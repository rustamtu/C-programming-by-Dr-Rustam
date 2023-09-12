#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bubble sort algorithm
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Explanation:

// The program first asks the user to input the number of elements to be sorted.
// Then, it takes in n integers from the user and stores them in an array called arr.
// The bubble sort algorithm is then implemented using two nested loops. The outer loop iterates n-1 times and the inner loop iterates n-i-1 times.
// If the element at index j is greater than the element at index j+1, then the two elements are swapped.
// Finally, the sorted array is printed to the console.