#include <stdio.h>

int main()
{
    // BITWISE operators = special operators used in bit level programming (knowing binary is important for this topic)

    // & = AND - we assign 1 to z only if x and y = 1
    // | = OR - we assign 1 to z if one or both x and y = 1
    // ^ = XOR - we assign 1 to z ONLY IF either x or y = 1 | if x and y = 1 we do not assign 1 
    // << left shift - double the number up
    // >> right shift - double the number down

    int x = 6;  //  6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;  //      00001110

    z = x & y;
    printf("AND is: %d", z);

    z = x | y;
    printf("OR is: %d", z);

    z = x ^ y;
    printf("XOR is: %d", z);

    z = x << y;
    printf("SHIFT LEFT is: %d", z);

    z = x >> y;
    printf("SHIFT RIGHT is: %d", z);


    return 0;
}