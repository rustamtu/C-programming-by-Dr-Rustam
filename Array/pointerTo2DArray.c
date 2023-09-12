#include <stdio.h>

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Declare a pointer to a 2D array
    int(*ptr)[3] = arr;

    // Accessing elements using pointer notation
    printf("Value at arr[0][0]: %d\n", **ptr);
    printf("Value at arr[2][2]: %d\n", *(*(ptr + 2) + 2));

    // Accessing elements using pointer arithmetic
    printf("Value at arr[1][2]: %d\n", *(*(ptr + 1) + 2));
    printf("Value at arr[2][1]: %d\n", *(*(ptr + 2) + 1));

    return 0;
}

// In this example, arr is a 2D array with dimensions 3x3. We declare a pointer ptr to a 2D array by specifying the number of columns (3) in the pointer declaration. The pointer ptr is initialized to the address of the first element of arr.

// To access the elements of the 2D array using the pointer ptr, we can use pointer notation or pointer arithmetic:

// Using pointer notation: *(*(ptr + i) + j) represents the value at the i-th row and j-th column of the 2D array.
// Using pointer arithmetic: *(*(ptr + i) + j) is equivalent to ptr[i][j], representing the value at the i-th row and j-th column of the 2D array.
// The example demonstrates accessing various elements of the 2D array using both pointer notation and pointer arithmetic.

// Output:

// less
// Copy code
// Value at arr[0][0]: 1
// Value at arr[2][2]: 9
// Value at arr[1][2]: 6
// Value at arr[2][1]: 8