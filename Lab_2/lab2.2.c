    #include <stdio.h>

char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
    out = reverse( text ) ;
}//end function

char* reverse( char str1[]) {
    int length = 0 ;
    while ( str1 [length] != '\0') {
        length++ ;
    }//end while

    for ( int i = 0 ; i < length /2 ; i++ ) {
        char position = str1 [i] ;
        str1 [i] = str1 [length - i - 1] ;
        str1 [length - i - 1] = position ;
    }//end for

    printf ( "Reversed Text: %s\n" , str1 ) ;
    return str1 ;
}//end function