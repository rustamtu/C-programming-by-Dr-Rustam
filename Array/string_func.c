// This program uses the following built-in string functions:

// strlen() to get the length of a string
// strcpy() to copy a string to a new location
// strcat() to concatenate two strings together
// strcmp() to compare two strings and check if they are equal
// Note that all of these functions are included in the string.h library.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "hello  \0";
    char str2[] = "world";

    // String length
    printf("The length of str1 is %d\n", strlen(str1));

    // String copy
    char str3[10];
    strcpy(str3, str1); // str3 = str1
    printf("str3 = %s\n", str3);

    // String concatenation
    char str4[20];
    strcpy(str4, str1); // str4 = str4 + str1
    strcat(str4, " ");  // str4 = str4 + " "
    strcat(str4, str2); // str4 = str4 + str2
    printf("str4 = %s\n", str4);

    // String comparison
    if (strcmp(str1, str2) == 0)
    {
        printf("str1 and str2 are equal\n");
    }
    else
    {
        printf("str1 and str2 are not equal\n");
    }

    return 0;
}
