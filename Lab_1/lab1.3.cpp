#include <stdio.h>
#include <stdlib.h>

int *GetSet(int *num);

int main() {

    int *data, member;
    
    data = GetSet(&member);

    printf("Elements in the array:\n");

    for (int i = 0; i < member; i++) {
        printf("%d ", data[i]);
    }

    free(data);

    return 0;
}

int *GetSet(int *num) {

    int *n;
    printf("How many number? :");
    scanf("%d", num);

    n = (int*)malloc(*num * sizeof(int));

    for (int i = 0; i < *num; i++)
    {
        printf("Numbers? :");
        scanf("%d", &n[i]); 
        
    }
    return n;
}