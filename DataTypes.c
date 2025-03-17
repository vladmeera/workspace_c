#include <stdio.h>
#include <stdbool.h>

int main () {

    char a = 'C';                       // single character     %c
    char b[] = "Vlad";                  // array of characters  %s

    float c = 3.141592;                 // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.14159265358979323846;  // 8 bytes (64 bits of precision) 15 - 16 digits %lf

    bool e = true;                      // 1 byte (true or false) %d

    char f = 100;                       // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255;              // 1 byte (0 to +255) %d or %c

    short int h = 32768;                // 2 bytes (-32,768 to +32,767) %d
    // you can also use short h = 32768; - it is the same
    unsigned short int i = 65535;       // 2 bytes (0 to +65,535) %d
    // unsigned short i = 65535; - it is the same

    int j = 2147483647;                 // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    // standart int considered long but we dont need to type long int
    unsigned int k = 4294967295;        // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807; // 8 bytes (-9,223,372,036,854,775,808 to +9,223,372,036,854,775,807) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18,446,744,073,709,551,615) %llu



    // printf("Strings: %s\n",b);              // string
    // printf("Character: %c\n",a);            // character
    // printf("Float: %0.15f\n",c);            // float
    // printf("Double: %0.15lf\n",d);          // double
    // printf("Boolean: %d\n",e);              // boolean
    // printf("Character as a decimal number using ASCII table: %c\n",f);       // char
    // printf("Unsigned char: %d\n",g);        // unsigned char
    // printf("Short int: %d\n",h);            // short int
    // printf("Unsigned short int: %d\n",i);   // unsigned short int
    printf("int: %d\n",j);                        // int
    printf("unsigned int: %u\n",k);                      // unsigned int
    printf("Long long int: %lld\n",l);          // long long int
    printf("Unsigned long long int: %llu\n",m); // unsigned long long int

    return 0;


}