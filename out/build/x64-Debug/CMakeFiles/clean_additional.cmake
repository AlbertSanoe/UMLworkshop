# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\UMLworkshop_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\UMLworkshop_autogen.dir\\ParseCache.txt"
  "UMLworkshop_autogen"
  )
endif()
