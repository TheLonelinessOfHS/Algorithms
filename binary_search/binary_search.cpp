#include <cstdlib>
#include <algorithm>
#include <iostream>

template<typename T>
std::size_t binary_search(T arr[], T key, std::size_t left, std::size_t right) {
    if (left > right) {
        return -1;
    }    

    std::size_t pos = (right + left) / 2;
    
    if (arr[pos] == key) {
        return pos;
    }

    if (arr[pos] < key) {
        return binary_search(arr, key, pos + 1, right);
    }

    else {
        return binary_search(arr, key, left, pos - 1);
    }
}


template<typename T, std::size_t N>
void print(T (&arr)[N]) {
    for (auto& v : arr) {
        std::cout << v << ' ';
    }

    std::cout << std::endl;

}

int main() {
    int arr[] = {233, 5124, 121, 152134, 1245151, 23623, 12315, 635134, 123415, 1412512};

    std::sort(std::begin(arr), std::end(arr));

    print(arr);

    std::cout << binary_search(arr, arr[5], 0, std::extent<decltype(arr)>::value - 1) << std::endl;

    std::cout << binary_search(arr, arr[3], 0, std::extent<decltype(arr)>::value - 1) << std::endl;


    return 0;
}
