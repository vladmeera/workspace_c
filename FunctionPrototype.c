#include <stdio.h>

void hello(char[], int); // function prototype


int main(){
    

    // Function prototype

    // Function declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct arguments

    char name[] = "Vlad";
    int age = 23;

    hello(name, age);

    return 0;

}


void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d age old", age);
}