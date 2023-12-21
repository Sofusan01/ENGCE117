
#include <stdio.h>

int main() {

     int length = 6 ;
     int A [length] , B [length] ;
     int Answer [7] ;
     int i = 0 , carry = 0 ;
     char operators ;
     printf ( "\n" ) ;
     printf ( "Enter Number A : \n" ) ;

     do {      
        printf ( "A[%d] : " , i ) ;
        scanf ( "%d" , & A [i]) ;
        i++ ;
     } while ( i < length ) ;
   
     printf ( "Enter Number B:\n" ) ;
     i = 0 ;

     do {
        printf ( "B[%d]: " , i ) ;
        scanf ( "%d" , & B [i] ) ;
        i++ ;
     } while ( i < length ) ;
   
     printf ( "Operator :\n" ) ;
     scanf ( " %c" , & operators ) ;

     if ( operators == '+' || operators == '-' ) {
          if ( operators == '+' ) {
               i = length - 1 ;
               do {
                    Answer [i + 1] = ( A [i] + B [i] + carry ) % 10 ;
                    carry = ( A [i] + B [i] + carry ) / 10 ;
                    i--;
               } while ( i >= 0 );
          } //end if
          else if ( operators == '-' ) {
               i = length - 1;
               do {
                    int temp = A [i] - B [i] - carry ;
                    Answer [i + 1] = ( temp < 0 ) ? temp + 10 : temp ;
                    carry = ( temp < 0 ) ? 1 : 0 ;
                    i-- ;
               } while (i >= 0) ;
          } //end if
          Answer [0] = carry ;
     } else {
          printf( "Yours Input is Wrong!!!" ) ;
          main () ;
     } //end if

     printf ( "Index\t\t\t x\t0\t1\t2\t3\t4\t5\n" ) ;
     printf ( "Number A :\t\t\t" ) ;
     i = 0 ;

     do {
          printf ( "%d\t" , A [i] ) ;
          i++ ;
     } while ( i < length ) ;
     
     printf ( "\nOperator :\t\t\t\t\t\t\t\t\t %c\n" , operators ) ;
     printf ( "Number B :\t\t\t" ) ;
     i = 0 ;

     do {
          printf ( "%d\t" , B [i] ) ;
          i++ ;
     } while ( i < length ) ;

     printf ( "\n          \t\t---------------------------------------------------\n" ) ;
     printf ( "Answer :  \t\t" ) ;
     i = 0 ;

     do {
          printf ( "%d\t" , Answer [i] ) ;
          i++ ;
     } while ( i <= length) ;

     printf ( "\n          \t\t===================================================" ) ;

     return 0 ;
} //end function
