#include <stdio.h>
#include <math.h>

int main () {

    double a;
    double b;
    double hypotenuse;

    printf("\nEnter side A: ");
    scanf("%lf", &a);

    printf("\nEnter side B: ");
    scanf("%lf", &b);

    // printf("Number A is: %.0f | Number B is: %.0f", a, b);

    hypotenuse = sqrt((pow(a, 2) + pow(b, 2)));

    printf("Hypotenuse is: %.2lf", hypotenuse);

    

    return 0;
}