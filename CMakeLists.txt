cmake_minimum_required(VERSION 3.11)

SET (PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
SET(PROJECT_NAME "WxWidgets")
SET(CMAKE_C_COMPILER i686-w64-mingw32.static)
SET(CMAKE_CXX_COMPILER i686-w64-mingw32.static-g++)
project(
  ${PROJECT_NAME}
  VERSION 1.0)

  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lstdc++")
  
  file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/src/*.h"
        "${PROJECT_SOURCE_DIR}/src/*.hpp"
        "${PROJECT_SOURCE_DIR}/src/*.c"
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/**/*.c"
        "${PROJECT_SOURCE_DIR}/src/**/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/**/*.hpp"
        )

  add_executable(${PROJECT_NAME} ${all_SRCS})

  include( "${wxWidgets_USE_FILE}" )
  find_package(wxWidgets REQUIRED)
  target_include_directories(${PROJECT_NAME} PUBLIC /home/kevin/mxe/usr/i686-w64-mingw32.static/include/wx-3.1/ /home/kevin/mxe/usr/i686-w64-mingw32.static/lib/wx/include/i686-w64-mingw32.static-msw-unicode-static-3.1/)
  target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})