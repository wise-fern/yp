cmake_minimum_required(VERSION 3.28)
project(
  libyunpa
  VERSION 0.0.1
  LANGUAGES CXX)

add_library(${PROJECT_NAME})
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "" FOLDER
                                                           ${PROJECT_NAME})
add_subdirectory("src")
add_subdirectory("tests")
