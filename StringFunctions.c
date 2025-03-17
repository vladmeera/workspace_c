#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "Vlad";
    char string2[] = "vlaD";

    // strlwr(string1);                 // converts a string to lowercase
    // strupr(string2);                 // converts a string to uppercase
    // strcat(string1, string2);        // appends string2 to end of string1
    // strncat(string1, string2, 1);    // appends n character from string2 to string1
    // strcpy(string1, string2);        // copy string2 to string1
    // strncpy(string1, string2, 1);    // copy n charaacters of string2 to string1

    // strset(string1, '*');            //sets all characters of a string to a given character
    // strnset(string1, '*', 2);        // sets first n characters of a string to a given character
    // strrev(string1);                 // reverses a string

    // next set of functions will return an integer
    // int result = strlen(string1);                //
    int result = strcmp(string1, string2);          // compare all characters, returns 0 if they're same or something beside 0
    // int result = strncmp(string1, string2, 2);   //
    // int result = strcmpi(string1, string2);     //
    // int result = strnicmp(string1, string1, 1);   //


    // printf("%s", string1);
    printf("%d", result);
    // printf("Name %s has %d digits!", string1, result);

    return 0;
}