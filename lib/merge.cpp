#include <vector>
#include <algorithm>
#include <iterator>

#include "sort.h"

template<typename T>
void merge(T start, T mid_point, T end)
{

    // Move the current vector slice into a temporary vector
    typedef typename std::vector<
        typename std::iterator_traits<T>::value_type> TmpVec;
    TmpVec  tmp(std::make_move_iterator(start), std::make_move_iterator(end));

    // Iterators specifying the start, end and mid point for the merge
    typename TmpVec::iterator startIt = std::begin(tmp);
    typename TmpVec::iterator endIt = std::end(tmp);
    typename TmpVec::iterator midIt = std::next(
            startIt, std::distance(start, mid_point));

    // Define left and right vectors
    typename TmpVec::iterator left = startIt;
    typename TmpVec::iterator right = midIt;

    T i = start;

    // Merge the iterators, moving the smaller element into the current
    // position of the iterator i
    while(left < midIt && right < endIt)
    {
        *i = std::move((*left < *right) ? *left++ : *right++);
        ++i;
    }

    while(left < midIt)
    {
        *i = std::move(*left++);
        ++i;
    }

    while(right < endIt)
    {
        *i = std::move(*right++);
        ++i;
    }

}

template void merge(std::vector<int>::iterator,
                    std::vector<int>::iterator,
                    std::vector<int>::iterator);

template void merge(std::vector<double>::iterator,
                    std::vector<double>::iterator,
                    std::vector<double>::iterator);

