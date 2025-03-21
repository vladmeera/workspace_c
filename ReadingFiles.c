#include <stdio.h>


int main()
{
    FILE *pF = fopen("C:\\Users\\mirgo\\OneDrive\\Desktop\\ADB_HW.txt", "r");
    char buffer[255];

    if(pF == NULL)
    {
        printf("Unable to open file!\n");
    }
    else
    {
        while(fgets(buffer, 255, pF) != NULL)
        {
        fgets(buffer, 255, pF);
        printf("%s", buffer);
        }
    }
    printf("\n%d", sizeof(buffer));


    fclose(pF);


    return 0;
}