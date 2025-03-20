#include <stdio.h>


int main()
{
    // memory - ann array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memor address = the address of where a memory block is loceted (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(c));


    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);



    return 0;
}