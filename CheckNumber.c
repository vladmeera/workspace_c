#include <stdio.h>
#include <assert.h>
#include <ctype.h>
// #include <FunctionPrototype.h>


void checkNumber(int num);

int main()
{
    int num = 1;
    char name[10] = "Vlad";

    printf("%s", name);

    // printf("Enter your number: ");
    // scanf("%d", num);



    printf("%d is ", num);
    checkNumber(num);


    return 0;
}


void checkNumber(int num)
{
    if (num == 0)
    {

        assert(num == 0);
        printf("Zero");
    }
    else if (num < 0)
    {
        assert(num == -1);
        printf("Negative");
    }
    else if (num > 0)
    {
        assert(num == 1);
        printf("Positive");
    }
}
