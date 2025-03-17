#include <stdio.h>

int main () {

    // format specifier % - defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = field width
    // %- = left justify

    float item1 = 2.99;
    float item2 = 4.99;
    float item3 = 5.99;

    printf("Item 1: $%8.2f\n", item1);
    printf("Item 2: $%8.2f\n", item2);
    printf("Item 3: $%8.2f\n", item3);

    return 0;

}