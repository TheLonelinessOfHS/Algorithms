#include <cstdlib>
#include <algorithm>
#include <iostream>



template<typename T>
std::size_t partition(T arr[], std::size_t left, std::size_t right) {
    std::size_t ptr_left= left;
    std::size_t ptr_right = right;
    std::size_t piv = arr[right];    

    while (ptr_left < ptr_right) {
        while (arr[ptr_left] < piv) {
            ++ ptr_left;
        }        

        while ((arr[ptr_right] >= piv) && (ptr_right > ptr_left)) {
            -- ptr_right;
        }

        if (ptr_left < ptr_right) {
            std::swap(arr[ptr_left], arr[ptr_right]);
        }
    }
    
    std::swap(arr[ptr_left], arr[right]);

    return ptr_left;
}

template<typename T>
void quick_sort(T arr[], std::size_t left, std::size_t right) {
    if (left < right) {
        std::size_t pos = partition(arr, left, right);

        if (pos != 0) {
            quick_sort(arr, left, pos - 1);
        }

    
        quick_sort(arr, pos + 1, right);
    }
}

template<typename T>
void print(T arr[], std::size_t size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }

    std::cout << std::endl;

}

int main() {
    int arr[] = {233, 5124, 121, 152134, 1245151, 23623, 12315, 635134, 123415, 1412512};
    print(arr, std::extent<decltype(arr)>::value);

    quick_sort(arr, 0, std::extent<decltype(arr)>::value - 1);

    print(arr, std::extent<decltype(arr)>::value);
    return 0;
}
