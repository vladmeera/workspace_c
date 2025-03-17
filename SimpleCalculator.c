#include <stdio.h>


int main(){

    double numA;
    double numB;
    double result;
    char sign;

    printf("\nWelcome to Calulator v1.0!");
    printf("\nWhat would you like to do (+, -, *, /): ");

    scanf("%c", &sign);

    printf("\nEnter first number: ");
    scanf("%lf", &numA);
    printf("\nEnter second number: ");
    scanf("%lf", &numB);
    switch(sign){
        case '+':

            result = numA + numB;
            printf("The result of adding %.0lf and %.0lf is: %.2lf", numA, numB, result);
            break;
        case '-':

            result = numA - numB;
            printf("The result of subtracting %.0lf and %.0lf is: %.2lf", numA, numB, result);
            break;
        case '*':

            result = numA * numB;
            printf("The result of multiplying %.0lf and %.0lf is: %.2lf", numA, numB, result);
            break;
        case '/':
            if(numB != 0){
                result = numA / numB;
                printf("The result of dividing %.0lf and %.0lf is: %.1lf", numA, numB, result);
            }
            else{
                printf("\nCan't divide by zero!!!");
            }
            
            break;

        default:
            printf("\n%c is invalid input! Please make sure you read the instruction!", sign);
            
    }


    return 0;
}