// Example of a C program that  writes to a file:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    FILE *outputFile;
    int i, r;

    // Open the output file in write mode
    outputFile = fopen("num1.txt", "w");
    if (outputFile == NULL)
    {
        printf("Error creating the output file.\n");
        return 1;
    }

    srand(time(0));
    for (i = 0; i < 10000; i++)
    {
        r = rand();
        // fputc(r, outputFile);
        // int fprintf(FILE *stream, const char *format, ...)
        fprintf(outputFile, "%d\n", r);
        // printf("%d ", r);
    }

    // Close the files
    fclose(outputFile);

    printf("\nFile writen successfully.\n");

    return 0;
}
