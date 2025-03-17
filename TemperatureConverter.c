#include <stdio.h>
// #include <math.h>
#include <ctype.h>


int main(){

    char unit;
    float temp;
    float result;
    // float fahrenheit = 32;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        if(temp == 0){
            result = (temp * 9) + 32;
        }
        else{
            result = (temp * 9 / 5) + 32;
        }

        printf("%.1f", result);
        
    }
    else if(unit == 'F'){
        printf("\nEnter the temp in Fahrenheit: ");
        scanf("%f", &temp);

        if(temp == 32){
            result = 0;
            printf("The temp is: %.1f", result);
        }
        else{
            result = (temp - 32) * 5 / 9;
            printf("The temp is: %.1f", result);
        }
    }
    else{
        printf("\n%c is not valid unit of measurement!", unit);
    }

    return 0;
}