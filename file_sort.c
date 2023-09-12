// Example of a C program that reads from a file and writes the content into another file:
#include <stdio.h>

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubble_sort(int arr[], int n)
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
        // printf("\nStep: %d: ", i + 1);
        // print_array(arr, n);
    }
}

int main()
{
    FILE *inputFile, *outfile;

    int n, i, num[10000];

    // Open the input file in read mode
    inputFile = fopen("num1.txt", "r");
    outfile = fopen("sorted_num.txt", "w");
    if (inputFile == NULL)
    {
        printf("Error opening the input file.\n");
        return 1;
    }

    // Read from the input file character by character and write to the output file
    fscanf(inputFile, "%d", &n);

    for (i = 0; i < n; i++)
    {
        fscanf(inputFile, "%d", &num[i]);
        // printf("%d ", num[i]);
    }

    bubble_sort(num, n);

    printf("\nSorted array\n");
    print_array(num, n);
    fprintf(outfile, "Sorted array\n");
    for (i = 0; i < n; i++)
    {
        fprintf(outfile, "%d ", num[i]);
    }

    // Close the files
    fclose(inputFile);

    printf("\nFile saved successfully.\n");

    return 0;
}
