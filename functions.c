#include <stdio.h>

double square(double x)
{
    return x * x;
}

int main()
{
    double x = square(3);
    printf("%.1lf", x);

    return 0;
}

// void welcome(char name[], int age)
// {
//     printf("\nWelcome %s", name);
//     printf("\nYou are %d", age);
// }

// int main()
// {
//     char name[] = "";
//     int age;

//     printf("What is your name: ");
//     scanf("%s", &name);

//     printf("How old are you?: ");
//     scanf("%d", &age);

//     welcome(name, age);

//     return 0;
// }