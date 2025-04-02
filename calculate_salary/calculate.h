#ifndef CALCULATE_H
#define CALCULATE_H
#define WEEKS 4
#define INCOME_TAXES 9.65

double count_salary(double sal_hour, double hours, double days)
{

    double SalaryAfterTaxes;

    double SalaryBeforeTaxes = sal_hour * hours * days * WEEKS;

    SalaryAfterTaxes = SalaryBeforeTaxes - SalaryBeforeTaxes * INCOME_TAXES / 100;


    return SalaryAfterTaxes;
}

#endif