cmake_minimum_required(VERSION 3.14)
project(test4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

include_directories(/usr/local/include)
link_directories(/usr/local/lib)
link_libraries(cotp)

add_executable(test4
        CMakeLists.txt
        main.c)

target_link_libraries(test4 cotp)