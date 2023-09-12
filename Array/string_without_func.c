
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
    char str1[] = "SMIT";
    char str2[] = "Majitar";

    // String length
    int len1 = 0;
    while (str1[len1] != '\0')
    {
        len1++;
    }
    printf("The length of str1 is %d\n", len1);

    // String copy
    char str3[10];
    // strcpy(str3, str1); // str3 = str1

    int i = 0;
    while (str1[i] != '\0')
    {
        str3[i] = str1[i];
        i++;
    }
    str3[i] = '\0';
    printf("str3 = %s\n", str3);

    // String concatenation
    char str4[200] = "abcd";
    printf("The length of str4 is %d\n", strlen(str4));

    i = 0;
    while (str4[i] != '\0')
    {
        i++;
    }
    printf("\nValue of i= %d\n", i);

    printf("str4=%s, str1 = %s\n", str4, str1);
    // strcpy(str4, str1); // str4 = str4 + str1
    int j = 0;
    while (str1[j] != '\0')
    {
        str4[i] = str1[j];
        i++, j++;
    }
    str4[i] = '\0';

    printf("str1 added to str4 = %s\n", str4);

    // add again str2
    printf("str4=%s, str2 = %s\n", str4, str2);
    // strcat(str4, str2); // str4 = str4 + str2
    j = 0;
    while (str2[j] != '\0')
    {
        str4[i] = str2[j];
        i++, j++;
    }
    str4[i] = '\0';

    printf("str2 added to str4 = %s\n", str4);

    // // String comparison
    // if (strcmp(str1, str2) == 0)
    // {
    //     printf("str1 and str2 are equal\n");
    // }
    // else
    // {
    //     printf("str1 and str2 are not equal\n");
    // }

    int flag = -1;
    if (strlen(str1) != strlen(str2))
    {
        flag = 0;
    }
    else
    {
        for (i = 0; str1[i]; i++)
        {
            if (str1[i] != str2[i])
            {
                flag = i;
                break;
            }
        }
    }

    if (flag < 0)
    {
        printf("str1 and str2 are equal\n");
    }
    else
    {
        printf("str1 and str2 are not equal, last unequal position: %d\n", flag);
    }

    return 0;
}

// PS E:\Programmings\C Programs\Array> .\a.exe
// The length of str1 is 4
// str3 = SMIT
// The length of str4 is 4

// Value of i= 4
// str4=abcd, str1 = SMIT
// str1 added to str4 = abcdSMIT
// str4=abcdSMIT, str2 = Majitar
// str2 added to str4 = abcdSMITMajitar
// str1 and str2 are not equal, last unequal position: 0