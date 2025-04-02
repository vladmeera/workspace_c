#ifndef data_h
#define data_h

enum Days{OneDay = 1, TwoDays, ThreeDays, FourDays, FiveDays};

typedef struct
{
    int id;
    char name[100];
    double SalaryHour;
    enum Days WorkDays; 
    double hours;
} Employee;

Employee EmployeeJohn = {1, "John", 30, 8, FiveDays};
Employee EmployeeNick = {2, "Nick", 25, 8, ThreeDays}

#endif