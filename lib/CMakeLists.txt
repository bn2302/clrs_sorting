set(library_SRC
    merge.cpp
    merge_sort.cpp
    #    print_array.cpp
)

add_library (library SHARED ${library_SRC})


install(TARGETS library
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
)
