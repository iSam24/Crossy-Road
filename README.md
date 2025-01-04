# Crossy Road Game

This project is a Crossy Road game developed in C++ using the Qt framework.

## Requirements

- MinGW C++ compiler
- CMake 3.16
- Qt framework (add C:\Qt\6.8.1\mingw_64\bin to environment variables path)
- add "C:/Qt/6.8.1/mingw_64/include/**" to include path in c_cpp_properties.json

## Installation

1. Clone the repository:
    ```sh
    git clone https://github.com/iSam24/Crossy-road.git
    ```
2. Build and run the project.
    ```sh
    mkdir build
    cd build
    cmake .. -G "MinGW Makefiles"
    cmake --build .
    ```
3. Run the executable
    ```sh
    ./CrossyRoad.exe
    ```
