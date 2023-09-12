// Sub array
#include <stdio.h>

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    print_array(arr, n);

    printf("Sub array\n");
    print_array(&arr[4], n - 4);
    return 0;
}
