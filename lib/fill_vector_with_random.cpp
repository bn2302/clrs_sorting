#include <random>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
#include <iostream>

template <typename T>
void fill_vector_with_random(T& vec)
{
    std::random_device rnd_device;
    std::mt19937 mersenne_engine(rnd_device());

    if(std::is_same<T, std::vector<int>>::value){
        std::cout << "Generating random numbers\n";

        std::uniform_int_distribution<int> dist(0, 100);
        auto gen = std::bind(dist, mersenne_engine);
        std::generate(begin(vec), end(vec), gen);


    } 

    if(std::is_same<T, std::vector<double>>::value){
        std::uniform_real_distribution<double> dist(0, 1);
        auto gen = std::bind(dist, mersenne_engine);
        std::generate(begin(vec), end(vec), gen);
    }

}

template void fill_vector_with_random(std::vector<int>&);
template void fill_vector_with_random(std::vector<double>&);

