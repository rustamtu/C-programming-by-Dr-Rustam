#include <stdio.h>
void fun2DArray(int (*ptr)[3])
{
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Declare a pointer to a 2D array
    int(*ptr)[3] = arr;
    fun2DArray(arr);
    // Accessing elements using pointer notation
    printf("Value at arr[0][0]: %d\n", **ptr);
    printf("Value at arr[2][2]: %d\n", *(*(ptr + 2) + 2));

    // Accessing elements using pointer arithmetic
    printf("Value at arr[1][2]: %d\n", *(*(ptr + 1) + 2));
    printf("Value at arr[2][1]: %d\n", *(*(ptr + 2) + 1));

    return 0;
}
