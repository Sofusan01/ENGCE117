#include <stdio.h>
#include <string.h>

struct Human
{
    char Name[50];
    int Age;
};

void PrintHuman(struct Human Arr[] , int N);
void Sort(struct Human Arr[], int N ,int Mode = 1);
float AverageAge( struct Human Arr[] , int N);
void PrintHumanAboveAverage(struct Human Arr[] , int N , float Avg);


int main(){
    
    int N = 8; 
    struct Human Person[8];
    strcpy(Person[0].Name , "Leo"   );
    strcpy(Person[1].Name , "Max"   );
    strcpy(Person[2].Name , "Guide" );
    strcpy(Person[3].Name , "Wave"  );
    strcpy(Person[4].Name , "Dunk"  );
    strcpy(Person[5].Name , "Soft"  );
    strcpy(Person[6].Name , "Mean"  );
    strcpy(Person[7].Name , "Panda" );

    Person[0].Age = 10 ;
    Person[1].Age = 12 ;
    Person[2].Age = 13 ;
    Person[3].Age = 14 ;
    Person[4].Age = 20 ;
    Person[5].Age = 16 ;
    Person[6].Age = 16 ;
    Person[7].Age = 19 ;

    PrintHuman(Person , N);

    Sort(Person , N , 1); PrintHuman(Person , N);
    Sort(Person , N , 2); PrintHuman(Person , N);

    float  AVG = AverageAge( Person , N);

    printf("\n -----> Average Age: %.2f", AVG);
    PrintHumanAboveAverage(Person, N ,  AVG);


    return 0;
}   

void PrintHuman(struct Human Arr[] , int N){

        int i = 0;
        printf("--> Human: \n");
         for ( i = 0; i < N; i++)
        {
            printf(" %s (%d) ", Arr[i].Name , Arr[i].Age );
        }
    printf(" \n ");

}

void PrintHumanAboveAverage(struct Human Arr[] , int N , float Avg){

        int i = 0;
        printf("--> Human: \n");
         for ( i = 0; i < N; i++)
        {
            if (Arr[i].Age > Avg )
            {
                printf(" %s (%d) ", Arr[i].Name , Arr[i].Age );
            }
        }
    printf(" \n ");

}


void Sort(struct Human Arr[], int N ,int Mode ){

    int i = 0;
    int j = 0;
    struct Human hold;

    for ( i = 0; i < N; i++)
    {
        for ( j = i + 1 ; j < N ; j++)
        {
            if (Mode == 1)
            {
                if (Arr[i].Age > Arr[j].Age)
                {
                    hold   = Arr[i];
                    Arr[i] = Arr[j];
                    Arr[j] = hold;
                }
            }
            else if (Mode == 2)
            {
                if (Arr[i].Age < Arr[j].Age)
                {
                    hold   = Arr[i];
                    Arr[i] = Arr[j];
                    Arr[j] = hold;
                }
            }
        }
    }
}

float AverageAge( struct Human Arr[] , int N ) {

    float Output = 0 ;
    float Sum    = 0;

    for (int i = 0; i < N; i++)
    {
        Sum += Arr[i].Age;
    }
    

    return Sum / N;
}