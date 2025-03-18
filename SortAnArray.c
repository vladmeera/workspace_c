#include <stdio.h>


void sort(char array[], int size) // change char to int if you are going to sort numbers (integers)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                // printf("%d", sizeof(array[j+1]));
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}


void printArray(char array[], int size) // change char to int
{
    for(int i = 0; i < size; i++)
    {
        printf("%c\n", array[i]); // %c to %d if sort numbers
    }
}

int main()
{

    // int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    char array[] = {'W', 'F', 'T', 'A', 'P'};

    int size;
    size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printArray(array, size);


    return 0;
}