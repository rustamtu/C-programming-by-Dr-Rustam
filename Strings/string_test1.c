#include <stdio.h>
#include <string.h>
int main()
{
    // char s[] = "Hello, "
    //            "World!\n";
    char s[] = "abc xyz";
    printf("String: %s\n", s);
    printf("Strlen: %d\n", strlen(s));
    printf("Size: %d\n", sizeof(s));
    return 0;
}
