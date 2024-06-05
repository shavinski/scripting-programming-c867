//  applyAll function
// arr1, size1, arr2, size2
// returns int *

// print function
// arr, size

#include <iostream>
using namespace std;

int apply_all(int *arr1, int size1, int *arr2, int size2) {}
{
    int *new_arr_ptr {nullptr};



    return new_arr_ptr;

}

int print(int *arr_ptr, int size)
{
    for (size_t i = 0; i < size; i++)
        cout << *arr_ptr++ << " ";

    return 0;
}

int main()
{
    const size_t array1_size{5};
    const size_t array2_size{3};

    int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};

    cout << "Array 1: ";
    print(array1, array1_size);

    cout << " Array 2: ";
    print(array2, array2_size);

    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size{array1_size * array2_size};

    cout << "Result: ";
    print(results, results_size);

    cout << endl;

    return 0;
}