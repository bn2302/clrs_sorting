#include <vector>
#include <algorithm>
#include <iterator>


template <typename T> 
void insertion_sort(T start, T end)
{
    for (auto i = start; i != end; ++i) {
        std::rotate(std::upper_bound(start, i, *i), i, i+1);
    }
}

template void insertion_sort(std::vector<int>::iterator,
                             std::vector<int>::iterator);

template void insertion_sort(std::vector<double>::iterator,
                             std::vector<double>::iterator);


