#include <stdio.h>

void print_array(int arr[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubble_sort(int arr[100], int n)
{
    // Bubble sort algorithm
    int i, j, temp;
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
        printf("\nStep: %d: ", i + 1);
        print_array(arr, n);
    }
}
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

    bubble_sort(arr, n);
    // Print the sorted array
    printf("\nSorted array:\n");
    print_array(arr, n);
    printf("\n");

    return 0;
}
