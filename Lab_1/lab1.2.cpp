#include <stdio.h>
#include <stdlib.h>

void GetSet(int **, int *);

int main() {
    int *data, num;
    GetSet(&data, &num);

    // Don't forget to free the allocated memory
    free(data);

    return 0;
}

void GetSet(int **arr, int *num) {
    printf("Enter number of elements: ");
    scanf("%d", num);

    // Allocate memory for the array based on the input size
    *arr = (int *)malloc((*num) * sizeof(int));4

    for (int i = 0; i < *num; i++) {
        printf("Enter members: ");
        scanf("%d", &((arr)[i]));
    }

    printf("Number of elements: %d\n", *num);
    for (int i = 0; i < *num; i++) {
        printf("%d ", (arr)[i]);
    }

    // Don't forget to free the allocated memory
    free(*arr);
}