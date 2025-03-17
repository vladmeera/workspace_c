#include <stdio.h>

int main () {

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A': 
            printf("Perfect!");
            break;
        case 'B':
            printf("You did good");
            break;
        case 'C':
            printf("You did okay");
            break;
        case 'D':
            printf("Ar leats it's not an F");
            break;
        case 'F':
            printf("YOU FAILED");
            break;
        default:
            printf("Please enter valid grade letter!");
    }

    return 0;
}