set(library_SRC
    merge.cpp
    merge_sort.cpp
    insertion_sort.cpp
    print_vector.cpp
    fill_vector_with_random.cpp
)

add_library (sorting SHARED ${library_SRC})


install(TARGETS sorting
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
)
