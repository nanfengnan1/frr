import re
import os
import sys

class GitModulesParser:
    def __init__(self):
        self.main_dir = os.path.abspath(os.path.join(os.getcwd(), os.pardir))
        self.gitmodules_file = os.path.join(self.main_dir, ".gitmodules")
        self.nproc = os.cpu_count()
        self.submodule_data = []

        self.bootstrap_scripts = []

        # in fact, ai learn may feel pretty well.
        self.bootstrap_scripts.append("bootstrap.sh")
        self.bootstrap_scripts.append("autogen.sh")

    def parse_gitmodules(self):
        current_submodule = {}

        with open(self.gitmodules_file, 'r') as f:
            lines = f.readlines()

        for line in lines:
            line = line.strip()
            if line.startswith('[submodule'):
                if current_submodule:
                    self.submodule_data.append(current_submodule)
                    current_submodule = {}
                current_submodule['name'] = re.search(r'\[submodule "(.*?)"\]', line).group(1)
            elif line.startswith('path'):
                current_submodule['path'] = re.search(r'path = (.*)', line).group(1)
            elif line.startswith('url'):
                current_submodule['url'] = re.search(r'url = (.*)', line).group(1)
            elif line.startswith('branch'):
                current_submodule['branch'] = re.search(r'branch = (.*)', line).group(1)

        # Append the last submodule
        if current_submodule:
            self.submodule_data.append(current_submodule)

    def print_submodules(self):
        for submodule in self.submodule_data:
            print(f"Submodule: {submodule['name']}")
            print(f"  Path: {submodule['path']}")
            print(f"  URL: {submodule['url']}")
            print(f"  Branch: {submodule['branch']}")
            print("")

    def execute_command(self, command):
        result = os.system(command)
        try:
            assert result == 0
        except AssertionError:
            print(f"\033[91mcommand '{command}' failed with error code {result}\033[0m")
            sys.exit()

    def operate_submodule(self, submodule_name, branch_name):
        print("submodule_name: %s, branch_name: %s", submodule_name, branch_name)
        self.execute_command(f"cd ../{submodule_name} && git checkout {branch_name}")
        self.execute_command(f"cd ../{submodule_name} && git pull origin {branch_name}")

    def operate_all_submodules(self):
        for submodule in self.submodule_data:
            branch_name = submodule['branch']
            print(f"Performing Git operations for submodule: {submodule['name']} on branch {branch_name}")
            self.operate_submodule(submodule['name'], branch_name)

    def update_submodules_code(self):
        self.execute_command(f"cd .. && git submodule deinit -f .")
        self.execute_command(f"cd .. && git submodule update --init --recursive")
    
    ''' deprected, not flexiable
    def cmake_dep(self, submodule_name):
        build_dir = os.path.join(self.main_dir, submodule_name, "build")
        if not os.path.exists(build_dir):
            self.execute_command(f"mkdir -p {build_dir}")

        self.execute_command(f"cd {build_dir} && cmake ..")
        self.execute_command(f"cd {build_dir} && make -j {self.nproc}")
        self.execute_command(f"cd {build_dir} && make install")

    def config_dep(self, submodule_name):
        build_dir = os.path.join(self.main_dir, submodule_name)
        self.execute_command(f"cd {build_dir} && ")

    def build_all_deps(self):
        for submodule in self.submodule_data:
            result = self.detect_build_system(submodule['name'])
            if result == 'cmake':
                # self.cmake_dep(submodule['name'])
                pass
            elif result in self.bootstrap_scripts:
                print("*****" + result + "*******" + submodule['name'])
                pass
            elif result == 'make':
                pass
            else:
                pass

    def detect_build_system(self, submodule_name):
        if os.path.exists(os.path.join(self.main_dir, submodule_name, 'CMakeLists.txt')):
            return 'cmake'
        else:
            for script in self.bootstrap_scripts:
                if os.path.exists(os.path.join(self.main_dir, submodule_name, script)):
                    return script
            return 'unknown'
    '''

if __name__ == "__main__":

    parser = GitModulesParser()
    parser.parse_gitmodules()
    # parser.operate_submodule("libyang", "v2.1.128")
    parser.operate_all_submodules()
    # parser.print_submodules()
    parser.update_submodules_code()

