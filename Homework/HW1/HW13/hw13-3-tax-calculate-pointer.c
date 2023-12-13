#include <stdio.h>
#include <string.h>

int main() {
    double totalSalaryPerMonth = 0;
    double totalSalaryPerYear = 0;

    char MostTaxEmployee[50];
    double highestTax = 0;
    double annualTax;
    
    int i = 0;

    while (1) {
        char name[50];
        double salary, taxRate = 0.07;
        i++;
        
        printf("Employee %d's Name : (or -1 to exit): " ,i);
        scanf("%s", name);

        if (strcmp(name, "-1") == 0) {
            break;
        }

        printf("Salary (Bath/Month) :");
        scanf("%lf", &salary);

        totalSalaryPerMonth += salary;
        totalSalaryPerYear += salary * 12;
        annualTax = totalSalaryPerYear * taxRate;
        double Tax = (salary * 12) * taxRate;

        if (Tax > highestTax) {
            highestTax = Tax;
            strcpy(MostTaxEmployee, name);
        }

    }

    printf("All salary per month: %.2lf\n", totalSalaryPerMonth);
    printf("All salary per year: %.2lf\n", totalSalaryPerYear);
    printf("Tax (7%% per year) : %.2lf\n", annualTax);
    printf("Most tax in company : %s (%'.2lf Bath per year)", MostTaxEmployee,highestTax);

}