#include <stdio.h>

int main() {
    int monthSalary = 0;
    int yearSalary = 0;
    char name[100];

    while (1) {
        int salary;
        int i = 1;

        printf(" Employee %d's Name :",i++);
        scanf("%s", &name);
        printf(" Salary (Bath/Month) :");
        scanf("%d", &salary);
        i += 1;
        
        if (salary == -1) {
            printf("Exiting the program.\n");
            printf("Total salary for the month: %d\n", monthSalary);
            printf("Total salary for the month: %d\n", yearSalary);
            break;
        }

        monthSalary += salary;
        yearSalary = monthSalary*12;
    }

}