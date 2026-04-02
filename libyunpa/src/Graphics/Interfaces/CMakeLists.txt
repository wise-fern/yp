target_sources(
  ${PROJECT_NAME}
  PUBLIC FILE_SET
         CXX_MODULES
         FILES
         "Drawable.cppm"
         "Positionable.cppm"
         "Printable.cppm"
         "Stylable.cppm"
  PRIVATE "Drawable.cpp" "Positionable.cpp" "Printable.cpp" "Stylable.cpp")
