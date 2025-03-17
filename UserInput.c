#include <stdio.h>
#include <string.h>

int main () {

    char name[25]; // bytes allocated for the name

    int age;

    printf("What is your name? \n");

    // scanf accepts user input up to whitespace
    // scanf("%s", name); // %s is a format specifier for a string


    fgets(name, 25, stdin); // fgets accepts user input up to the number of characters specified
    name[strlen(name) - 1] = '\0'; // remove the newline character from the string


    printf("How old are you? \n");
    
    // get user input
    scanf("%d", &age);

    printf("Hello %s!\n", name);
    printf("You are %d years old.\n", age);

    return 0;
}