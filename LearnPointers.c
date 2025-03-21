#include <stdio.h>


int main()
{
    char message[15] = "Vlad";

    char *pMessage[15] = NULL;
    pMessage[15] = &message[15];

    // printf("Enter your name?: ");
    // scanf("\n%s", &pMessage);
    printf("\nYour name is: %s", *pMessage);


    return 0;
}