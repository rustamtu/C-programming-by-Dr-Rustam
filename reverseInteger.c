#include <stdio.h>

int reverseInteger(int num)
{
    int reversedNum = 0;
    while (num != 0)
    {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return reversedNum;
}

int main()
{
    int num = 12345;
    int reversed = reverseInteger(num);

    printf("Original number: %d\n", num);
    printf("Reversed number: %d\n", reversed);

    return 0;
}

// In this program, the reverseInteger function takes an integer num as input and reverses it. It initializes a variable reversedNum to 0, and then using a while loop, it repeatedly extracts the last digit of num using the modulo operator % and adds it to reversedNum by multiplying it by 10. After each iteration, num is divided by 10 to eliminate the last digit. This process continues until num becomes 0.

// In the main function, we initialize an integer variable num with a value (12345 in this case) and then call the reverseInteger function to reverse it. Finally, we print the original and reversed numbers.

// When you run this program, the output will be:

// Copy code
// Original number: 12345
// Reversed number: 54321