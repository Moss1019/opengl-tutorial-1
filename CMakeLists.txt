
cmake_minimum_required(VERSION 3.16)
project(tutorialgl)

add_executable(tutorialgl main.cpp filehandler.cpp)
target_link_libraries(tutorialgl PRIVATE GL GLEW glfw)
