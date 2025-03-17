#include <stdio.h>
#include <string.h>

int main()
{


    char cars[][10] = {"Mustang", "Aventador", "Camaro"};
    // cars[0] = "M5"; // error

    printf("%d\n", sizeof(cars));
    printf("%d\n", sizeof(cars[0]));
    printf("%d\n", sizeof(cars[0][0]));
    strcpy(cars[0], "Tesla"); // change 0 index item in the array (mustang to tesla)

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
        
    }

    return 0;
}