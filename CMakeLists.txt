cmake_minimum_required(VERSION 3.16)

# Project name and version
project(CrossyRoad VERSION 1.0)

# Add include directories
include_directories(src)

# Find the required Qt components
find_package(Qt6 COMPONENTS Core Widgets Gui REQUIRED)

# C++ Version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Instruct CMake to run moc and rcc automatically when needed
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH "C:/Qt/6.8.1/mingw_64")

# Add source files
set(SOURCES
    main.cpp
    src/Vehicle.cpp
    src/Player.cpp
    src/Game.cpp
    src/MainWindow.cpp
)

# Add header files
set(HEADERS
    src/Vehicle.h
    src/Player.h
    src/Game.h
    src/MainWindow.h
)

# Compiles binary resources into source code and puts the names into RESOURCES variable
#set(RESOURCE_FILES src/resources.qrc)
#QT6_ADD_RESOURCES(RESOURCES ${RESOURCE_FILES})

# Add executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${RESOURCES})

# Link Qt libraries
target_link_libraries(${PROJECT_NAME} Qt6::Core Qt6::Widgets Qt6::Gui)



