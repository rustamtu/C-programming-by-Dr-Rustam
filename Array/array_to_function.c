#include <stdio.h>

void print_array(int arr[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void modify_array(int arr[100], int n)
{
    // Bubble sort algorithm
    int i, j, temp;
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
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

    modify_array(arr, n);
    // Print the sorted array
    printf("\nRevere array:\n");
    print_array(arr, n);
    printf("\n");

    return 0;
}
