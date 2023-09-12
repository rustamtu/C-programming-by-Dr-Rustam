#include <stdio.h>

int main()
{
    char c;
    char str[100];

    // Using getchar and putchar
    printf("Enter a character: ");
    c = getchar();
    printf("You entered: ");
    putchar(c);
    printf("\n");
    c = getchar();

    // Using gets and puts
    printf("Enter a string: ");
    gets(str);
    printf("You entered: ");
    puts(str);

    return 0;
}

// In this program, we first use getchar() to read a single character from the user, and then use putchar() to display that character back to the user.
// Next, we use gets() to read a string from the user (note that gets() is not recommended for use, as it is not safe against buffer overflows, and has been removed from the C11 standard), and then use puts() to display that string back to the user.
// Note that putchar() and puts() both add a newline character (\n) to the end of the output, so we don't need to add that ourselves.