// Example of a C program that reads from a file and writes the content into another file:
#include <stdio.h>

int main()
{
    FILE *inputFile;

    int n, i, num;

    // Open the input file in read mode
    inputFile = fopen("output.txt", "r");
    if (inputFile == NULL)
    {
        printf("Error opening the input file.\n");
        return 1;
    }

    // Read from the input file character by character and write to the output file
    printf("\nContents of the input file:\n");

    for (i = 0; i < 50; i++)
    {
        fscanf(inputFile, "%d", &num);
        printf("%d ", num);
    }

    // Close the files
    fclose(inputFile);

    printf("\nFile read successfully.\n");

    return 0;
}
