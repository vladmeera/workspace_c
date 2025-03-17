#include <stdio.h>
#include <stdbool.h>


int main(){

    // logical operators = ! (NOT) reverses the state of a condition

    bool car = true;

    if(!car){
        printf("You don't have a car");
    }
    else{
        printf("You have a car");
    }

    return 0;
}

// int main(){

//     // logical operator = || (OR) checks if at least one condition is true

//     int age = 17;
//     bool haveID = true;
//     bool haveDriverLicense = false;

//     if((haveID && age >= 18) || (haveDriverLicense && age >= 18)){
//         printf("You can enter the pub!");
//     }
//     else{
//         printf("I need your ID or driver license! You look young!");
//     }


//     return 0;
// }

// int main(){

//     // logical operators = && (AND) checks if two conditions are true

//     float temp = 50;
//     bool isSunny = false;

//     if(temp >= 32 && temp < 90 && isSunny){
//         printf("We can go out!");
//     }
//     else{
//         printf("The weather is bad");
//     }

//     return 0;
// }
