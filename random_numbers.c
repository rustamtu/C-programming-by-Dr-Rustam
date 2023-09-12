// The functions rand() and srand() are inbuilt functions in C that are used for random number generator in C/C++.

// rand()
// The function rand() is used for random number generator in C in a certain range that can take values from [0, Range_max]. Range_max value can be an integer.

// Syntax

// int rand(void)
// It does not take any parameters, and it returns random numbers.

// srand()
// The srand() function is used to initialize the starting point i.e., the value of the seed. If srand() is not initialized then the seed value in rand() function is set as srand(1).

// Syntax

// void srand(unsigned int)
// srand takes a parameter that is used to set the starting value of the random number generator. There is no return value.

// srand is known as the set seed for the rand() function.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    printf("%d ", rand());
    printf("%d ", rand());
    return 0;
}
