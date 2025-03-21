#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    // pseudo random numbers = A set of values or elements that are statistically random
    // (Don't use these for any sort of cryptographic security)


    srand(time(0));

    // generates random number between 1 and 6
    int number1 = (rand() % 3);             // rand() function - random number between 0 and 32 767

    printf("%d", number1);


    return 0;
}