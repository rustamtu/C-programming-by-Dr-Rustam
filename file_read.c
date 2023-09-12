// Example of a C program that reads from a file and writes the content into another file:
#include <stdio.h>

int main()
{
    FILE *inputFile;
    char ch;

    // Open the input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("Error opening the input file.\n");
        return 1;
    }

    // Read from the input file character by character and write to the output file
    printf("\nContents of the input file:\n");
    while ((ch = fgetc(inputFile)) != EOF)
    {
        // fputc(ch, outputFile);
        // putchar(ch);
        printf("%c", ch);
    }

    // Close the files
    fclose(inputFile);
    // fclose(outputFile);

    printf("\nFile read successfully.\n");

    return 0;
}
