#include <stdio.h>

int main(){

    int n = 0;
    char again;
    char mode;
    char sort;
    int i = 0;

    printf("User input Max number : ");
    scanf("%d",&n);

    printf("\n");

    printf("----> Normal Series : ");
    for ( i = 1; i <= n; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    do
    {
        printf("Display Odd/Event/Number (o/e/n) : ");
        scanf("%c",&mode);
        // printf("----> Mode : %c ",&mode);

        if (mode == 'e')
        {
            printf("----> Event Series : ");
            for ( i = 1; i <= n; i++)
            {
                
                if (i % 2 == 0)
                {
                    printf("%d ", i);
                }
                
            }
            break;
        }
        else if (mode == 'o')
        {
            printf("----> Odd Series : ");
            for ( i = 1; i <= n; i++)
            {
                
                if (i % 2 != 0)
                {
                    printf("%d ", i);
                }
                
            }
            break;
        }
        else if (mode == 'n')
        {
            printf("----> Normal Series : ");
            for ( i = 1; i <= n; i++)
            {
                printf("%d ", i);
            }
            break;
        }
    

    } while (1);

    printf("\n");

    do
    {
    printf("Display a-z / z-a (a/z): ");
    scanf("%c",&sort);

        switch (sort)
        {
        case 'a':
                if (mode == 'e')
                    {
                        printf("----> Event Series : ");
                        for ( i = 1; i <= n; i++)
                        {
                            if (i % 2 == 0)
                            {
                                printf("%d ", i);
                            }
                        }
                        break;
                    }
                else if (mode == 'o')
                    {
                        printf("----> Odd Series : ");
                        for ( i = 1; i <= n; i++)
                        {
                            if (i % 2 != 0)
                            {
                                printf("%d ", i);
                            }
                        }
                        break;
                    }
                else if (mode == 'n')
                    {
                        printf("----> Normal Series : ");
                        for ( i = 1; i <= n; i++)
                        {
                            printf("%d ", i);
                        }
                        break;
                    }
        break;

        case 'z':
                if (mode == 'e')
                    {
                        printf("----> Event Series : ");
                        for ( i = n; i >= 0; i--)
                        {
                            if (i % 2 == 0)
                            {
                                printf("%d ", i);
                            }
                        }
                        break;
                    }
                else if (mode == 'o')
                    {
                        printf("----> Odd Series : ");
                        for ( i = n; i >= 0; i--)
                        {
                            if (i % 2 != 0)
                            {
                                printf("%d ", i);
                            }
                        }
                        break;
                    }
                else if (mode == 'n')
                    {
                        printf("----> Normal Series : ");
                        for ( i = n; i >= 0; i--)
                        {
                            printf("%d ", i);
                        }
                        break;
                    }
            break;
        }
    } while ( sort != 'a' && sort != 'z');
    printf("END");
    return 0;
}
