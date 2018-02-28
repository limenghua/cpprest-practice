aux_source_directory(. DIR_HTTP_SERVER_SRCS)

include_directories(${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})

add_executable(http_server ${DIR_HTTP_SERVER_SRCS})

target_link_libraries(http_server
        cpprest
        pthread
        ${Boost_LIBRARIES}
        ${OPENSSL_LIBRARIES}
        )