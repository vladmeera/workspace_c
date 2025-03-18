#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Day{Sun = 1, Mon, Tue, Wed, Thu, Fri, Sat};

// void capitalize_first(char dayToday[15]);
int day(char dayToday[15]);

int main()
{
    // enum = a user defined type of named integer identifiers
    // helps to make a program more readable

    char dayToday[15];

    printf("Guess what day is today (mon, tue, wed, thu, fri, sat, sun)?");
    scanf("%s", &dayToday);

    // dayToday[0] = toupper(dayToday[0]);
    
    // printf("Today is: %c%s", toupper(dayToday[0]), dayToday + 1);
    // for(int i = 0; i < sizeof(dayToday[0]); i++)
    // {
    //     printf("%s", dayToday[i]);
    // }

    

    enum Day today = Mon;

    // printf("%d", today); // enums are NOT STRINGS, but can be treated as int

    // && (dayToday != "Sat" || dayToday != "Sun")

    printf("\n%d\n", day(dayToday));

    if(day(dayToday) == today)
    {
        printf("It's time to work!");
    }
    else
    {
        printf("Losers can relax, I am going to work anyway!!!");
    }

    return 0;
}

int day(char dayToday[15])
{
    if(dayToday == "mon")
    {
        return 2;
    }
}

// void capitalize_first(char dayToday[15])
// {
//     if(dayToday[0] != '\0')
//     {
//         dayToday[0] = toupper(dayToday[0]);
//     }
// }