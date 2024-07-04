#!/bin/bash

relative_dir=../deps

# deps relation, be carefully add
deps="cmocka uncrustify libssh-mirror protobuf protobuf-c libnetconf2 netopeer2 libyang sysrepo"
cmake_deps="cmocka uncrustify libssh-mirror libnetconf2 netopeer2 libyang sysrepo"
config_deps="protobuf protobuf-c"
bootstrap_scripts="autogen.sh"

function echo_message()
{
    RED='\033[0;31m'
    GREEN='\033[0;32m'
    YELLOW='\033[0;33m'
    BLUE='\033[0;34m'
    RESET='\033[0m' # No Color

    while [[ $# -gt 0 ]]; do
        case "$1" in
            -r|--red)
                shift
                echo -e "${RED}$1${RESET}"
                ;;
            -g|--green)
                shift
                echo -e "${GREEN}$1${RESET}"
                ;;
            -y|--yellow)
                shift
                echo -e "${YELLOW}$1${RESET}"
                ;;
            -b|--blue)
                shift
                echo -e "${BLUE}$1${RESET}"
                ;;
            *)
                echo "$1"
                ;;
        esac
        shift
    done
}

function observe_error()
{
    error=$1
    action=$2
    dep=$3
    if [ ${error} != 0 ]; then
        echo_message -r "${action} failed for ${dep}"
        echo_message -r "exiting the script."
        exit $rc
    fi
}

function build_config_dep()
{
    dep=$1
    dep_dir="${relative_dir}/${dep}"

    if [ -z ${dep} ]; then
        echo_message -r "${dep} not exist"
        exit -1
    fi

    if [ ! -d ${dep_dir} ]; then
	echo_message -r "${dep_dir} not exist"
        return -1
    fi
    
    cd "${dep_dir}"

    files=$(find . -maxdepth 1 -type f -exec basename {} \;)
    for boot in ${bootstrap_scripts}; do
	    
        if echo "${files}" | grep -q "\b${boot}\b"; then
	    ret=yes
	    break
	fi
    done

    if [ -z ${ret} ]; then
        echo_message -r "${dep_dir} not have any boot scripts"
	exit -1
    fi

    sh ${boot}
    observe_error $? "${boot}" ${dep}

    ./configure
    observe_error $? "configure" ${dep}

    make -j$(nproc)
    observe_error $? "make" ${dep}

    wait

    make install
    observe_error $? "make install" ${dep}

    ldconfig

    cd -
}

function build_cmake_dep()
{
    dep=$1
    dep_dir="${relative_dir}/${dep}"
    build_dir="${relative_dir}/${dep}/build"

    if [ -z ${dep} ]; then
	echo_message -r "${dep} not exist"
	exit -1
    fi

    if [ ! -d ${dep_dir} ]; then
        echo_message -r "${dep_dir} not exist"
        return -1
    fi

    if [ ! -d "$build_dir" ]; then
	echo_message -r "build directory does not exist, creating: $build_dir"
	mkdir -p "$build_dir"
    fi

    cd "${build_dir}"

    echo_message -g "cmake building ${dep} ..."
    cmake ..
    observe_error $? "cmake" ${dep}

    make -j$(nproc)
    observe_error $? "make" ${dep}

    make install
    observe_error $? "make install" ${dep}

    ldconfig

    cd -

    return 0
}

function prompt()
{
    echo_message -g "had install submodules: "

    for dep in ${deps}; do
        echo_message -y "    submodules: ${dep}"
    done
}

function install_deps()
{
    for dep in ${deps}; do
        echo_message -g "processing dependency: ${dep}"

        if echo " ${cmake_deps} " | grep -q " ${dep} "; then
	    build_cmake_dep ${dep}
	elif echo " ${config_deps} " | grep -q " ${dep} "; then
	    build_config_dep ${dep}
        else
            echo_message -r "'${dep}' not found in '${deps}'"
        fi
    done

    prompt
}

install_deps
