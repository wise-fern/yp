target_sources(
  ${PROJECT_NAME}
  PUBLIC FILE_SET CXX_MODULES FILES "Color.cppm"
  PRIVATE "Color.cpp")
add_subdirectory("Elements")
add_subdirectory("Interfaces")
