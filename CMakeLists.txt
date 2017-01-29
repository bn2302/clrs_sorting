Project(intro_to_algo_chapter2)

cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 11) # C++11...
set(CMAKE_CXX_STANDARD_REQUIRED ON) #...is required...
# set(CMAKE_CXX_EXTENSIONS OFF) #...
# set(CMAKE_CXX_FLAGS "-std=c++11")

add_subdirectory(lib)
add_subdirectory(src)


