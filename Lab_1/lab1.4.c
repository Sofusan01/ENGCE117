#include <stdio.h>

int GetSet( int [] ) ;

int main() {
    int *data, num ;
    num = GetSet( data ) ;
    return 0 ;
}

int GetSet(int arr[]){
    printf("Enter You Number of Data : ");
    scanf("%d" , &arr[0]);

    for (int i = 1; i <= arr[0]; i++)
    {
        printf ("Enter You Data [%d] : " , i );
        scanf("%d" , &arr[i]);
    }

    printf("You Number of Data : %d\n" , arr[0]);
    printf("All Number You Enter : ");
        for (int i = 1; i <= arr[0]; i++)
        {
            printf(" %d , " , arr[i]);
        }
        
    return arr;
}