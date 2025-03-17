#include <stdio.h>

int main()
{
    // array = a data structure that can store many values of the same data type

    double prices[10] = {5.0, 10.0, 15.0, 20.0};

    char name[] = "YourName";

    prices[4] = 35.0;

    printf("%d bytes\n", sizeof(prices));

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("Price is $%.2lf\n", prices[i]);
    }

    printf("$%.2lf", prices[4]);

    return 0;
}