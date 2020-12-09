cmake_minimum_required(VERSION 3.16.3)
project(over)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Quick Widgets REQUIRED)

add_executable(over 
    src/main.cpp
    src/myvec.cpp
    src/opread.cpp
    src/oppush.cpp
    )
target_include_directories(over PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(over
    PRIVATE 
    Qt5::Widgets
    Qt5::Quick
)

add_custom_target(run
    COMMAND ./over
    WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)
