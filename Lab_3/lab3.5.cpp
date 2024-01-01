#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int age;
    char sex;
    float gpa;
};

struct student (*GetStudent(int *room))[2];

int main() {
    struct student (*children)[2];
    int group;
    children = GetStudent(&group);

    // for ( int i = 0 ; i < group ; i++ ) {
    //         printf ( "Details for group %d:\n" , i + 1 );

    //         for (int j = 0; j < 2; j++) {
    //             printf ( "Student name: %s\n" , children [ i ] [ j ].name );
    //             printf ( "Student age: %d\n"  , children [ i ] [ j ].age  );
    //             printf ( "Student sex: %c\n"  , children [ i ] [ j ].sex  );
    //             printf ( "Student GPA: %.2f\n", children [ i ] [ j ].gpa  );
    //             printf ( "\n"); 
    //         } 
    //     }
    //end function

    return 0;
}

struct student (*GetStudent(int *room))[2] {

    printf("Enter the number of groups: ");
    scanf("%d", room);

    struct student (*result)[2] = (struct student (*)[2])malloc(*room * 2 * sizeof(struct student));

    for (int i = 0; i < *room; i++) {

        printf("Enter the details for group %d:\n", i + 1);

        int j = 0 ;
        do
        {
            printf("Enter student name: ");
            scanf("%s", result[i][j].name);

            printf("Enter student age: ");
            scanf("%d", &result[i][j].age);

            printf("Enter student sex (M/F): ");
            scanf(" %c", &result[i][j].sex);

            printf("Enter student GPA: ");
            scanf("%f", &result[i][j].gpa);
            
            j++;

        } while (j < 2);
    }
    return result;
}