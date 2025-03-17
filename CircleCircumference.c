#include <stdio.h>
#include <math.h>

int main () {

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("PI is: %lf\n", PI);
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    printf("The circumference of the circle is: %.2lf\n", circumference);
    printf("The area of a circle is: %.2lf\n", area);

    return 0;
}