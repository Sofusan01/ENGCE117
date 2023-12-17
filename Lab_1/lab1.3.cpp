#include <stdio.h>

int *GetSet(int *num);

int main() {

    int *data,num;
    
    data = GetSet(&num);

    printf("Elements in the array:\n");

    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }


    return 0;
}

int *GetSet(int *num) {

    int *n;
    printf("How many number? :");
    scanf("%d", num);

    n = new int(*num);

    for (int i = 0; i < *num; i++)
    {
        printf("Numbers? :");
        scanf("%d", &n[i]); 
        
    }
    return n;
}