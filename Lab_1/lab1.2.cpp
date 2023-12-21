#include <stdio.h>
#include <stdlib.h>

void GetSet(int [], int *);

int main() {
    
    int *data, num;
    GetSet(&data, &num);
    free(data);

    return 0;
}

void GetSet(int **arr, int *num) {
    printf("Enter number of elements: ");
    scanf("%d", num);

    *arr = (int *)malloc((*num) * sizeof(int));

    for (int i = 0; i < *num; i++) {
        printf("Enter members: ");
        scanf("%d", &((arr)[i]));
    }

    printf("Number of elements: %d\n", *num);
    for (int i = 0; i < *num; i++) {
        printf("%d ", (arr)[i]);
    }

    free(*arr);
}
