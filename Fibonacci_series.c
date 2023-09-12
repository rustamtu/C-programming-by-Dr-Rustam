#include <stdio.h>

void fibonacciSeries(int n)
{
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++)
    {
        if (i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
}

int main()
{
    int n;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Number of Fibonacci numbers should be greater than zero.\n");
        return 0;
    }

    fibonacciSeries(n);

    return 0;
}

// This program prompts the user to enter the number of Fibonacci numbers they want to generate. It then calculates and prints the Fibonacci series up to the specified number. The program uses a for loop to iterate and calculate each Fibonacci number by adding the previous two numbers.

// Note: The program assumes that the user enters a positive integer for the number of Fibonacci numbers. It also assumes the input is valid and doesn't perform extensive error checking.