#include <stdio.h>
#include <string.h>
#include "calculate.h"
#include "data.h"



int main() {
 

    double result_john = count_salary(EmployeeJohn.SalaryHour, EmployeeJohn.hours, EmployeeJohn.WorkDays);
    if(result_john != 0) {
        perror("Error!");
        printf("%s's salary is %.2lf", EmployeeJohn.name, result);
    }
    else {
        printf("ERROR");
    }
    return 0;
}