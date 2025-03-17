#include <stdio.h>

int main () {

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 16){
        printf("You can drive a car");
    }
    else if(age == 0){
        printf("You can't drive a car. You were just born!");
    }
    else{
        printf("You are too young to drive a car!");
    }

    return 0;
}