#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

// In this program, the insertionSort function takes an array arr and its length n as input, and sorts the array using the insertion sort algorithm. The printArray function is used to display the elements of an array.

// In the main function, we initialize an array arr with some values, determine its length, and then call insertionSort to sort the array. Finally, we print the original and sorted arrays.

// When you run this program, the output will be:

// Copy code
// Original array: 12 11 13 5 6
// Sorted array: 5 6 11 12 13