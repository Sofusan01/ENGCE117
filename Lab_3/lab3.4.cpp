
    #include <stdio.h>

    struct student {
        char name[ 20 ] ;
        int age ;
        char sex ;
        float gpa ;
    } ;


    void GetStudent( struct student child[][ 10 ], int *room ) ;

    int main() {
        struct student children[ 20 ][ 10 ] ;
        int group ;
        GetStudent( children, &group ) ;
        return 0 ;
    }//end function

    void GetStudent( struct student child[][ 10 ], int *room ){
        
    printf("Enter the number of groups: ");
    scanf("%d", room);

    for (int i = 0; i < *room; i++) {
        printf("Enter the details for group %d:\n", i + 1);

        for (int j = 0; j < 10; j++) {
            printf("Enter student name: ");
            scanf("%s", child[i][j].name);

            printf("Enter student age: ");
            scanf("%d", &child[i][j].age);

            printf("Enter student sex (M/F): ");
            scanf(" %c", &child[i][j].sex);

            printf("Enter student GPA: ");
            scanf("%f", &child[i][j].gpa);
        }
    }
}