#include <stdio.h>

// Function declaration
void swap(int *a, int *b);

int main()
{
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Function call by reference
    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}

// Function definition
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

// In this program, we declare a function called swap which takes two integer pointers as parameters. Inside the function, we use pointer dereferencing to swap the values of the integers.
// In the main function, we declare two integer variables x and y. We then call the swap function by passing in the addresses of x and y, which allows the function to modify their values directly. Finally, we print the values of x and y before and after the swap to verify that the function worked correctly.