#include <stdio.h>


int reverseDigits(int *pNum);

int main()
{
    int num = 46238; // function should return 83264
    int *pNum = NULL;
    pNum = &num;

    printf("%d", reverseDigits(pNum));


    return 0;
}


int reverseDigits(int *pNum)
{
    int rev_num = 0;
    while (*pNum > 0)
    {
        rev_num = rev_num * 10 + *pNum % 10;
        *pNum /= 10;
        printf("%d\n", *pNum);
        
    }
    return rev_num;
}
