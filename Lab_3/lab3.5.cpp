#include <stdio.h>
#include <stdlib.h>



struct student {
    char name[50];
    int age;
    char sex;
    float gpa;
};

struct student (*GetStudent(int *room))[10];

int main() {
    struct student (*children)[10];
    int group;
    children = GetStudent(&group);
    return 0;
}

struct student (*GetStudent(int *room))[10] {
    printf("Enter the number of groups: ");
    scanf("%d", room);

    // Use the correct type for 'result' and allocate memory appropriately
    struct student (*result)[10] = malloc(*room * sizeof(struct student[10]));

    for (int i = 0; i < *room; i++) {
        printf("Enter the details for group %d:\n", i + 1);

        for (int j = 0; j < 10; j++) {
            printf("Enter student name: ");
            scanf("%s", result[i][j].name);

            printf("Enter student age: ");
            scanf("%d", &result[i][j].age);

            printf("Enter student sex (M/F): ");
            scanf(" %c", &result[i][j].sex);

            printf("Enter student GPA: ");
            scanf("%f", &result[i][j].gpa);
        }
    }

    return result;
}