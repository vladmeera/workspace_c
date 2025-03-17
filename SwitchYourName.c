#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int main()
{

    char name;
    char answer;

    printf("\nEnter your name: ");
    scanf("%c", &name);

    printf("%c");

    printf("Would you like to change your name?: ");
    scanf("%c", &answer);
    // answer = tolower(answer);
    printf("%c", answer);

    // if(answer == "yes")
    // {
    //     bool change = true;
    //     while(change)
    //     {
    //         printf("\nWhat's your new name?: ");
    //         scanf("%c", &name);
    //         if(strlen(name) == 0)
    //         {
    //             printf("\nPlease enter your new name");
    //         }
    //         else
    //         {
    //             change = false;
    //         }
    //     }
    // }
    // printf("Your new name is %c", name);

    return 0;
}