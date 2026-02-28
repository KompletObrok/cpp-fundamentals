

/* Write a C++ function named apply_all that expects two arrays of integers and their sizes and
  dynamically allocates a new array of integers whose size is the product of the 2 array sizes
  
  The function should loop through the second array and multiplies each element across each element of array 1 and store the
  product in the newly created array.
  
  The function should return a pointer to the newly allocated array.
*/
  
#include <iostream>

using namespace std;

    void print(const int *array, int size);
    int *apply_all(int *array1, int array1_size, int *array2, int array2_size);


    void print(const int *array, int size) {
        cout << "[ ";
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << "]" << endl;
    }

    int *apply_all(int *array1, int array1_size, int *array2, int array2_size) {
        int new_size = array1_size * array2_size;
        int *result = new int[new_size];
        for (int i = 0; i < array1_size; i++) {
            for (int j = 0; j < array2_size; j++) {
                result[i * array2_size + j] = array1[i] * array2[j];
            }
        }
        return result;
    }



int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;
    print(results, results_size);

    delete [] results;
    
    cout << endl;

    return 0;
}
