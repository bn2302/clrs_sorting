#include <vector>
#include <algorithm>
#include <iterator>

#include "sort.h"

template<typename T>
void merge_sort(T start, T end)
{
    std::size_t length = std::distance(start, end);

    if (length <= 1) { return;}

    std::size_t middle = length/2;
    T mid_point = std::next(start, middle);

    merge_sort(start, mid_point);
    merge_sort(mid_point, end);

    merge(start, mid_point, end); 

}

template void merge_sort(std::vector<int>::iterator,
                         std::vector<int>::iterator);

template void merge_sort(std::vector<double>::iterator,
                         std::vector<double>::iterator);

