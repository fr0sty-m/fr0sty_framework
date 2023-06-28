import argparse
import os
import shutil


def copy_folder(source_folder, destination_folder):
    try:
        shutil.copytree(source_folder, destination_folder)
        print(f"Successfully copied folder from '{source_folder}' to '{destination_folder}'")
    except FileExistsError:
        print(f"Destination folder '{destination_folder}' already exists!")


def create_file(file_path, content):
    # Create a file
    with open(file_path, 'w') as file:
        file.write(content)
    print(f"Created file: {file_path}")


def create_directory(project_name, project_path):
    # Create a directory
    try:
        os.makedirs(project_path + "/" + project_name)
        print(f'Created project directory: {project_path}')
    except FileExistsError:
        print(f'Project directory already exists: {project_path}')


def create_project(name, author, path, description):
    print(f'Creating project: {name}')
    print(f'Author: {author}')
    print(f'Project Path: {path}')
    print(f'Description: {description}')

    project_dir = os.path.join(path, name)

    # Create project directory
    create_directory(name, path)

    # Generate the project files
    main_file = os.path.join(project_dir, 'main.cpp')
    cmake_file = os.path.join(project_dir, 'CMakeLists.txt')

    copy_files = 'copy_files'
    destination_folder = f'{project_dir}/dependencies'
    copy_folder(copy_files, destination_folder)

    # Create the main.cpp file
    main_content = f'''#include <fr0sty_framework.h>

class {name} : public fr0sty::fApplication {{
private:

public:
    // This function runs only once
    void Start() override {{
        
    }}
    
    // This function runs every frame
    void Update(float deltaTime) override {{
    
    }}
    
    // This function runs every frame to render
    void Render() override {{
        
    }}


}};

int main() {{

    {name} {name.lower()};
    fr0sty::fEngine::Get()->SetApplication(&{name.lower()});
    fr0sty::fEngine::Get()->Start(1280, 720, "{name}", fr0sty::Styles::CLOSE);
        
return 0;
}}
    '''
    create_file(main_file, main_content)

    # Create the CMakeLists.txt file
    cmake_content = f'''cmake_minimum_required(VERSION 3.22)
project({name} VERSION 1.0.0)

set(FR0STY_INCLUDE ${{CMAKE_SOURCE_DIR}}/fr0sty_framework/src)
set(FR0STY_LIB ${{CMAKE_SOURCE_DIR}}/fr0sty_framework/lib)

include_directories(${{FR0STY_INCLUDE}})
link_directories(${{FR0STY_LIB}})

add_definitions(-DENABLE_LOGGING)

add_executable({name} main.cpp)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR ${{CMAKE_SOURCE_DIR}}/sfml_files/lib/cmake/SFML)
set(SFML_INCLUDE ${{CMAKE_SOURCE_DIR}}/sfml_files/include)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

target_link_libraries({name} sfml-system sfml-window sfml-graphics sfml-audio sfml-network fr0sty_framework)
    '''
    create_file(cmake_file, cmake_content)


def main():
    parser = argparse.ArgumentParser(description='Fr0sty Creator Tool')

    # Define command line arguments and options
    parser.add_argument('-n', '--name', type=str, help='Project Name', required=True)
    parser.add_argument('-a', '--author', type=str, help='Author Name', required=True)
    parser.add_argument('-p', '--path', type=str, help='Project Path', required=True)
    parser.add_argument('-d', '--description', type=str, help='Project Description', required=True)
    args = parser.parse_args()

    project_name = args.name
    author_name = args.author
    project_path = args.path
    project_description = args.description

    # Create project based on provided args
    create_project(project_name, author_name, project_path, project_description)


if __name__ == '__main__':
    main()
