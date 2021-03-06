#include <cstdlib>
#include <algorithm>
#include <iostream>


template<typename T, std::size_t N>
void bubble_sort(T (&arr)[N]) {
    for (std::size_t i = 0; i < N - 2; ++i) {
        bool swapped = false;
        for (std::size_t j = 0; j < N - 2; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            return;
        }
    }

    return;
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
    print(arr);

    bubble_sort(arr);

    print(arr);
    
    return 0;
}
