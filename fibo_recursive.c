#include <stdio.h>

// Function to calculate Fibonacci series using recursion
int fibonacci(int n)
{
    // Base cases
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

// In this program, the fibonacci() function is called recursively to calculate the Fibonacci series. The base cases are when n is 0 or 1, where the function returns the respective values. For any other value of n, the function recursively calls itself with n-1 and n-2, and returns the sum of the two previous Fibonacci numbers.

// In the main() function, the user is prompted to enter the number of terms they want in the series. Then, a loop iterates from 0 to n-1 and calls the fibonacci() function for each iteration, printing the Fibonacci numbers.

// Please note that the Fibonacci series can grow very quickly, and the recursive approach becomes inefficient for larger values of n.