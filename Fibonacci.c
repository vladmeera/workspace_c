#include <stdio.h>
// #define prev1 1
// #define prev2 0


void printFib(int *pN);

int main()
{
    int n = 9;
    int *pN = NULL;
    pN = &n;



    printFib(pN);

    return 0;
}


void printFib(int *pN)
{
    if (*pN < 1)
    {
        printf("Invalid input!");
        return;
    }

    int prev1 = 1;
    int prev2 = 0;


    for (int i = 1; i <= *pN; i++)
    {
        if (i > 2)
        {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
            printf("%d ", curr);
        }
        else if (i == 1)
        {
            printf("%d ", prev2);
        }
        else if (i == 2)
        {
            printf("%d ", prev2);
        }
    }
}
