#include <stdio.h>
#include <string.h>

typedef char user[25];

typedef struct 
{

    char name[25];
    char password[12];
    int id;


} User;


int main()
{
    //typedef = reserved keyword that gives an existing datatype a "nickname"

    // user user1 = "Vlad";


    User user_vlad = {"Vlad", "123456pass", 1};

    printf("%s", user_vlad.name);

    return 0;
}