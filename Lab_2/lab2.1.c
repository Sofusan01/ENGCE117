#include <stdio.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text [50] = "I Love You" ;
    char out [50] ;
    reverse( text, out ) ;
    return 0 ;
}//end function

/*  Fucntion Name : reverse
    @param Input Char str1 Char
    @param Input Chat str2 Char
*/

void reverse(char str1[], char str2[]) {
    int length = 0 ;
    while ( str1 [ length ] != '\0' ) {
        length++ ;
    }//end while

    for ( int i = 0 ; i < length ; i++ ) {
        str2 [ i ] = str1 [ length - i - 1] ;
    }//end for
    str2 [ length ] = '\0' ;
    printf( "Input: %s\n" , str1 ) ;
    printf( "Output: %s" , str2 ) ;
}//end fucntion