// Program to copy one file to another

// Logic to copy contents from one file to another
// Step by step descriptive logic to copy file contents from one file to another.

// Input file path of source and destination file.
// Open source file in r (read) and destination file in w (write) mode.
// Read character from source file and write it to destination file using fputc().
// Repeat step 3 till source file has reached end.
// Close both source and destination file.

/**
 * C program to copy contents of one file to another.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *sourceFile;
    FILE *destFile;
    char ch;
    /*
     * Open source file in 'r' and
     * destination file in 'w' mode
     */
    sourceFile = fopen("input.txt", "r");
    destFile = fopen("output2.txt", "w");

    /* fopen() return NULL if unable to open file in given mode. */
    if (sourceFile == NULL || destFile == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read/write privilege.\n");

        exit(EXIT_FAILURE);
    }

    /*
     * Copy file contents character by character.
     */
    ch = fgetc(sourceFile);
    while (ch != EOF)
    {
        /* Write to destination file */
        fputc(ch, destFile);

        /* Read next character from source file */
        ch = fgetc(sourceFile);
    }

    printf("\nFiles copied successfully.\n");

    /* Finally close files to release resources */
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
