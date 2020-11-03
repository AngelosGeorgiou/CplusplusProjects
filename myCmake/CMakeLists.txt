cmake_minimum_required(VERSION 3.12)
project(myCmake)

add_subdirectory(include)
list(APPEND EXTRA_LIBS MyLib)

add_subdirectory(src)


