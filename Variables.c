#include <stdio.h>

int main () {

    int x;          //declaration
    x = 123;        //initialization
    int y = 456;    //declaration and initialization

    int age = 21;           //integer
    float gpa = 2.05;       //floating point number
    char grade = 'c';       //character
    char name[] = "Vlad";   //string or array of characters

    printf("Hello %s\n",name);
    printf("You are %d years old\n",age);
    printf("Your average grade is %c\n",grade);
    printf("your gpa is %f\n",gpa);

    return 0;
}