#include <stdio.h>
#include <errno.h>


int main()
{
    FILE *pF = fopen("test.txt", "w");

    fprintf(pF, "Hello World!");

    fclose(pF);


    return 0;
}