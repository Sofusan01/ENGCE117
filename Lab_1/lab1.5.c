#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    GetMatrix( &data, &m, &n ) ;
    return 0 ;
}

void GetMatrix( int value[], int *row, int *col ) {
    printf("Row : ");
    scanf("%d",  row);

    printf("Col : ");
    scanf("%d" , col);

    for (int i = 0; i < *row; i++)
    {
        for (int j = 0; j < *col; j++)
        {
            printf("Number Columns : ( %d | %d ) \n" , i + 1 , j + 1 );
            printf("Add Data : ");
            scanf("%d", &value[i * (*col) + j]);
        }      
    }
    printf("row : %d" ,*row);
    printf("col : %d" ,*col);
    printf("\n");
    for (int i = 0; i < *row; i++){
        for (int j = 0; j < *col; j++)
        {
            printf("| %d | " , value[i * (*col) + j]);
        }
        printf("\n");
    }
    

}