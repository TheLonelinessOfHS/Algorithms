#include <cstdlib>
#include <algorithm>
#include <iostream>


template<typename T>
void bubble_sort(T arr[], std::size_t size) {
    for (std::size_t i = 0; i < size - 2; ++i) {
        for (std::size_t j = 0; j < size - 2; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }

    return;
}

template<typename T>
void print(T arr[], std::size_t size) {
    for (std::size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }

    std::cout << std::endl;

}

int main() {
    int arr[] = {233, 5124, 121, 152134, 1245151, 23623, 12315, 635134, 123415, 1412512};
    print(arr, std::extent<decltype(arr)>::value);

    bubble_sort(arr, std::extent<decltype(arr)>::value);

    print(arr, std::extent<decltype(arr)>::value);
    return 0;
}
