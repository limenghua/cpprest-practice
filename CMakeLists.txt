cmake_minimum_required(VERSION 3.5)
project(cpprest_practice)

set(CMAKE_CXX_STANDARD 14)


find_package(Boost REQUIRED COMPONENTS
        regex
        filesystem
        system)

find_package(OpenSSL REQUIRED)

add_subdirectory(http_server)