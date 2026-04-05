target_sources(
  ${PROJECT_NAME}
  PUBLIC FILE_SET
         CXX_MODULES
         FILES
         "Colorable.cppm"
         "Drawable.cppm"
         "Positionable.cppm"
         "Printable.cppm"
         "Stylable.cppm"
  PRIVATE "Colorable.cpp" "Drawable.cpp" "Positionable.cpp" "Printable.cpp"
          "Stylable.cpp")
