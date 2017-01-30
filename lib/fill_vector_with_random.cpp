#include <random>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
#include <iostream>

template<class T>
struct Distribution {};

template <> 
struct Distribution<int>
{
    typedef std::uniform_int_distribution<int> type;
};

template <> 
struct Distribution<double> 
{
    typedef std::uniform_real_distribution<double> type;
};

template <typename T, typename A1, typename A2>
void fill_vector_with_random(T& vec, A1 lo, A2 up)
{
    std::random_device rnd_device;
    std::mt19937 mersenne_engine(rnd_device());

    typename Distribution<typename T::value_type>::type dist = typename Distribution<typename T::value_type>::type(lo, up);

    auto gen = std::bind(dist, mersenne_engine);
    std::generate(begin(vec), end(vec), gen);
}

template void fill_vector_with_random(std::vector<int>&, int, int);
template void fill_vector_with_random(std::vector<double>&, double, double);

