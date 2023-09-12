#include <stdio.h>
int main()
{
    int a[100], n, i;

    printf("Enter n\n");
    scanf("%d", &n);
    printf("Enter %d numbers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The inputed %d numbers\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%d\n", i + 1, a[i]);
    }

    return 0;
}