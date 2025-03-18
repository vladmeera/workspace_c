#include <stdio.h>
#include <string.h>


struct Player
{
    char name[12];
    int score;
};


int main()
{
    // strunct = collection of related memebers ("variables")
    // they can be of different data types
    // listed under one name in a block of memory
    // VERY SIMILAR to classes in other languages (but no methods)

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Vlad");   // to assign a name you must use strcpy() from <string.h>
    player1.score = 4;              // if it's integer you do not need to use strcpy()

    strcpy(player2.name, "Fred");
    player2.score = 5;

    printf("Name: %s\n", player1.name);
    printf("Score: %d\n", player1.score);

    printf("Score: %d", player2.score);


    return 0;
}

