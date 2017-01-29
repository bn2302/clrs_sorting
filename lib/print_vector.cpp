#include <vector>
#include <iterator>
#include <iostream>

template <typename T> void print_vector(T vec)
{
    std::copy(std::begin(vec),
              std::end(vec),
              std::ostream_iterator<typename T::value_type>(std::cout, ", "));
    std::cout << "\n";
}

template void print_vector(std::vector<int>);
template void print_vector(std::vector<double>);

