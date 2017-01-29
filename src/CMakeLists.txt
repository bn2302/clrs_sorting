include_directories(
    ${CMAKE_SOURCE_DIR}/lib
)

set(sort_array_merge_SRC
    sort_array_with_merge.cpp
)

add_executable (merge_sort_array ${sort_array_merge_SRC})

target_link_libraries(merge_sort_array
    library
)

install(TARGETS merge_sort_array
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
)
