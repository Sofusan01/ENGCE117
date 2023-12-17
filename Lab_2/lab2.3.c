
#include <stdio.h>

void explode( char str1[], char splitter, char str2[][10], int *count ) ;

int main() {

    char out[ 20 ][ 10 ] ;
    int num ;
    explode( "I/Love/You",'/', out , &num) ;
    return 0 ;

}//end function
void explode( char str1[], char splitter, char str2[][10], int *count )
{
     int i, j, k;
    *count = 0;

    for (i = 0, j = 0, k = 0; str1[i] != '\0'; i++) {
        if (str1[i] == splitter) {
            str2[k][j] = '\0'; // ปิดสตริงใน str2
            k++;
            j = 0;
            (*count)++;
        } else {
            str2[k][j] = str1[i];
            j++;
        }
    }

     str2[k][j] = '\0';
    (*count)++;

    for (int i = 0; i < *count; i++) {
        printf("str2[%d] = \"%s\"\n", i, str2[i]);
    }
    printf("cout = %d",*count);


}