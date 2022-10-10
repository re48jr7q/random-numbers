#include <iostream>
#include <array>
#include <algorithm>    //std::shuffle
#include <ctime>
#include <numeric>      //std::reduce
#include <random>

int main()
{
    std::array arr{ 1, 2, 3, 4 };

    std::cout << std::reduce(arr.begin(), arr.end()) << '\n'; //reduce to 10

    std::cout << std::accumulate(arr.begin(), arr.end(), 0) << '\n'; //reduce to 10
                                                            //the 0 is the initial value

    std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
    std::shuffle(arr.begin(), arr.end(), mt);

    for (int i : arr)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    return 0;
}
