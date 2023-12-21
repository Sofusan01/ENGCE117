#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    aboy = upgrade( aboy ) ;
    printf( "%.2f", aboy.gpa ) ;
    return 0 ;
}//end function

struct student upgrade( struct student child ){

        float percent = 0 ;
    
    switch ( child.sex )
    {
    case 'M':
        percent = child.gpa * 0.1 ;
        child.gpa = child.gpa + percent ;
        break;
    case 'F':
        percent = child.gpa * 0.2 ;
        child.gpa = child.gpa + percent ;
        break;
    }

    return child;

    }