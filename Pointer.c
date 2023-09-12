#include <stdio.h>

int main()
{

    int s[10]; // = "SMIT";
    int i;
    for (i = 0; i < 5; i++)
    {
        // printf("S: %d\n", &s[i]);
        printf("S: %d\n", s + i);
    }

    return 0;
}
