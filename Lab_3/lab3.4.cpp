
    #include <stdio.h>

    struct student {
        char name [ 20 ] ;
        int age ;
        char sex ;
        float gpa ;
    } ;


    void GetStudent ( struct student child [ ] [ 2 ] , int * room ) ;

    int main () {
        struct student children [ 20 ] [ 2 ] ;
        int group ;
        GetStudent ( children, &group ) ;
        return 0 ;

        

    void GetStudent( struct student child[][ 2 ], int *room ){
        
    printf( "Enter the number of groups: ");
    scanf( "%d" , room );

    for (int i = 0; i < *room; i++) {

        // printf("Room is : %d " , *room );
        
        printf("Enter the details for group %d:\n", i + 1);

        int j = 0 ;
        do
        {
            printf("Enter student name: ");
            scanf("%s", child[i][j].name);

            printf("Enter student age: ");
            scanf("%d", &child[i][j].age);

            printf("Enter student sex (M/F): ");
            scanf(" %c", &child[i][j].sex);

            printf("Enter student GPA: ");
            scanf("%f", &child[i][j].gpa);
            
            j++;

        } while (j < 2);

    }

    for (int i = 0; i < *room; i++) {
        printf("Details for group %d:\n", i + 1);

        for (int j = 0; j < 2; j++) {
            printf("Student name: %s\n", child[i][j].name);
            printf("Student age: %d\n", child[i][j].age);
            printf("Student sex: %c\n", child[i][j].sex);
            printf("Student GPA: %.2f\n", child[i][j].gpa);
            printf("\n");
        }
    }
}