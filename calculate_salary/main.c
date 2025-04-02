#include <stdio.h>
#include <string.h>
#include "calculate.h"
#include "data.h"



int main()
{


    

    double result = count_salary(EmployeeJohn.SalaryHour, EmployeeJohn.hours, EmployeeJohn.JohnWorkDays);
    if(result != 0)
    {
        perror("Error!");
        printf("%s's salary is %.2lf", EmployeeJohn.name, result);
    }
    else
    {
        printf("ERROR");
    }



    return 0;
}