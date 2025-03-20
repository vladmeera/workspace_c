#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


void welcome()
{
    printf("Welcome to Guessing Game v1.0\n");
}

int main()
{
    srand(time(0));
    int guessed_number = (rand() % 100) + 1;
    int number;
    
    welcome();

    bool play = true;
    while(play)
    {
        printf("Guess the number!: ");
        scanf("%d", &number);
        if(number != 0)
        {
            
            if(number == guessed_number)
            {
                printf("You are right! It is %d", guessed_number);
                play = false;
            }
            else if(number < guessed_number)
            {
                printf("Less then guessed number. Try again!");
            }
            else if(number > guessed_number)
            {
                printf("More than guessed number. Try again!");
            }
        }
        else
        {
            printf("Invalid input...");
        }

    }
   
    return 0;
}

