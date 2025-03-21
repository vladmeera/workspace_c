#include <stdio.h>
#include <errno.h>


int main()
{
    FILE *pF = fopen("test.txt", "w"); // w - write | a = append

    fprintf(pF, "Hello World!");

    fclose(pF);

    if(remove("test.txt") == 0)
    {
        printf("That file was deleted successfully");
    }
    else
    {
        printf("That file was NOT found");
    }

    return 0;
}