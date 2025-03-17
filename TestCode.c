#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void check_pass();


int main()
{

    char password[25];

    printf("\nEnter your password: ");

    fgets(password, 25, stdin);
    password[strlen(password)- 1] = '\0';

    // if(password == )

    char PASSWORDS[10][10];

    for(int i = 0; i < sizeof(PASSWORDS)/sizeof(PASSWORDS[0]); i++)
    {

        printf("%s\n", PASSWORDS[i]);

    }
    printf("%d", sizeof(PASSWORDS));
    // check_pass();


    return 0;
}

void check_pass()
{
    char PASSWORDS[10][10];

    PASSWORDS[1][1] = 'H';

    for(int i = 0; i < sizeof(PASSWORDS)/sizeof(PASSWORDS[0]); i++)
    {
        printf("%s", PASSWORDS[i]);
    }
    
}