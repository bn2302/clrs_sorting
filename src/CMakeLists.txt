include_directories(
    ${CMAKE_SOURCE_DIR}/lib
)

set(sort_SRC
    sort_random_vectors.cpp
)

add_executable (sort_random_vectors ${sort_SRC})

target_link_libraries(sort_random_vectors
    sorting
)

install(TARGETS sort_random_vectors
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
)
