#include <random>
#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <functional>

#include "sort.h"

template <typename T> void print_vector(T vec);

int main()
{
    // Initialize random number generator engine
    std::random_device rnd_device;
    std::mt19937 mersenne_engine(rnd_device());

    // Generate 20 random integers between 0 and 100
    std::uniform_int_distribution<int> dist_int(0, 100);
    auto gen_int = std::bind(dist_int, mersenne_engine);
    std::vector<int> data_int(20);
    std::generate(begin(data_int), end(data_int), gen_int);

    // Sort these integers
    std::cout << "20 Random integers between 0 and 100.\nBefore sorting:\n";
    print_vector(data_int);
    merge_sort(std::begin(data_int), std::end(data_int));
    std::cout << "\nAfter sorting:\n";
    print_vector(data_int);
    
    // Generate 20 random doubles between 0 and 1
    std::uniform_real_distribution<double> dist_real(0, 1);
    auto gen_real = std::bind(dist_real, mersenne_engine);
    std::vector<double> data_dbl(20);
    std::generate(begin(data_dbl), end(data_dbl), gen_real);

    // Sort these doubles
    std::cout << "\n\n20 Random doubles between 0 and 1.\nBefore sorting:\n";
    print_vector(data_dbl);
    merge_sort(std::begin(data_dbl), std::end(data_dbl));
    std::cout << "\nAfter sorting:\n";
    print_vector(data_dbl);

    return 0;
}

template <typename T> void print_vector(T vec)
{
    std::copy(std::begin(vec),
              std::end(vec),
              std::ostream_iterator<typename T::value_type>(std::cout, ", "));
    std::cout << "\n";
}

