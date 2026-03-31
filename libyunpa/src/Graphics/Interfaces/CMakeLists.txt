target_sources(
  ${PROJECT_NAME}
  PUBLIC FILE_SET CXX_MODULES FILES "Drawable.cppm" "Printable.cppm"
  PRIVATE "Drawable.cpp" "Printable.cpp")
