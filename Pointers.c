#include <stdio.h>

void countMoney(float *pAge, float *pMoney)
{
    float result;
    if(*pAge > 18)
    {
        result = *pMoney * (*pAge - 18);
        printf("You would invest your $%.1f every %.1f year(s) since you were 18 you'd get: $%.1f", *pMoney, (*pAge - 18), result);
    }
}


int main()
{
    // pointers = a "variable-like" reference that holds a memory address to another variable, array, etc.
    // some tasks are performed more easily with pointers
    // * = indirection operator (value at address)


    float age = 21;
    float money = 300;


    float *pMoney = NULL; // good practice to assign NULL if declaring a pointer
    pMoney = &money;

    float *pAge = NULL;
    pAge = &age;


    // printf("address of age: %p\n", &age);
    // printf("address of pAge: %p\n", &pAge);

    // printf("size of age: %d\n", sizeof(age));
    // printf("size of pAge: %d\n", sizeof(pAge));

    // printf("value of age: %d\n", age);
    // printf("value at stored address: %d\n", *pAge); // dereferencing


    countMoney(pAge, pMoney);

    return 0;
}