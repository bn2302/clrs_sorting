#include <random>
#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <functional>


#include "sort.h"

int main()
{
    // Generate 20 random integers between 0 and 100
    std::vector<int> data_int(20);
    fill_vector_with_random(data_int);

    // Sort these integers
    std::cout << "20 Random integers between 0 and 100.\nBefore sorting:\n";
    print_vector(data_int);
    insertion_sort(std::begin(data_int), std::end(data_int));
    std::cout << "\nAfter sorting with insertion_sort:\n";
    print_vector(data_int);
    
    std::vector<double> data_dbl(20);
    fill_vector_with_random(data_dbl);

    // Sort these doubles
    std::cout << "\n\n20 Random doubles between 0 and 1.\nBefore sorting:\n";
    print_vector(data_dbl);
    merge_sort(std::begin(data_dbl), std::end(data_dbl));
    std::cout << "\nAfter sorting with merge sort:\n";
    print_vector(data_dbl);

    return 0;
}
