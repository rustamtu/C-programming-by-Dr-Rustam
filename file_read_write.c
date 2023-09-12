// Example of a C program that reads from a file and writes the content into another file:
#include <stdio.h>

int main()
{
    FILE *inputFile, *outputFile;
    char ch;

    // Open the input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("Error opening the input file.\n");
        return 1;
    }

    // Open the output file in write mode
    outputFile = fopen("output15.txt", "a");
    if (outputFile == NULL)
    {
        printf("Error creating the output file.\n");
        fclose(inputFile); // Close the input file before returning
        return 1;
    }

    // Read from the input file character by character and write to the output file
    while ((ch = fgetc(inputFile)) != EOF)
    {
        fputc(ch, outputFile);
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("File copied successfully.\n");

    return 0;
}
