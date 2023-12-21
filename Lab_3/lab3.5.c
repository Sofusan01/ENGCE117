#include <stdio.h>

struct student (*GetStudent( int *room ) )[10] ;

int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    return 0 ;
}//end function

struct student (*GetStudent( int *room ) )[10] {

    printf("Enter the number of groups: ");
    scanf("%d", room);

    struct student (*result)[10] = new struct student[*room][10];

    for (int i = 0; i < *room; i++) {
        printf("Enter the details for group %d:\n", i + 1);

        for (int j = 0; j < 10; j++) {
            printf("Enter student name: ");
            scanf("%s", result[i][j].name);

            printf("Enter student age: ");
            scanf("%d", result[i][j].age);

            printf("Enter student sex (M/F): ");
            scanf(" %c", result[i][j].sex);

            printf("Enter student GPA: ");
            scanf("%f", result[i][j].gpa);
        }
    }

    return result;
}
