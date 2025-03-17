#include <stdio.h>

int main () {

    // augmented assignment operator = used to replace a statement where an operator takes a variable
    // as one of its arguments and then assigns the result back to the variable

    // +=, -=, *=, /=, %=

    // x = x + 1; can be written as x += 1;

    int x = 10;

    // x = x + 2;
    x += 2;

    // x = x - 3;
    x -= 3;

    // x = x * 5;
    x *= 5;

    // x = x / 2;
    x /= 2;

    // x = x % 3;
    x %= 3;


    printf("x = %d\n", x);

    return 0;

}