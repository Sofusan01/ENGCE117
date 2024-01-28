
 #include <stdio.h>
 #include <string.h>
 
 struct studentNode {
  char number[ 20 ] ;
  struct studentNode *next ;
 } ;
 
 void SaveNode ( struct studentNode *child , char n [] ) ;
 void GoNext1 ( struct studentNode **walk ) ;
 void swapNodes (struct studentNode** begin , int x, int y ) ;
 
int main() {
  struct studentNode *start , *now1 , **now2 ;
  start = new struct studentNode ;
  SaveNode( start , " start" ) ;
  
  start->next = new struct studentNode ;
  SaveNode( start->next , " two " ) ;
  
  start->next->next = new struct studentNode ;
  SaveNode( start->next->next , " three " ) ;
 
  start->next->next->next = new struct studentNode ;
  SaveNode( start->next->next->next , " four " ) ;
  
  start->next->next->next->next = new struct studentNode ;
  SaveNode( start->next->next->next->next , " five " ) ;

  now1 = start ; 
  now2 = &start ;
  
  swapNodes( &start , 3 , 2 ) ;

  GoNext1( now2 ) ;

  return 0 ;

 }//end function
 
 void SaveNode ( struct studentNode *child, char n[] ) {

  strcpy( child->number , n ) ;
 
 }//end function

 void GoNext1 ( struct studentNode **walk ) {
    while ( (*walk)->next != NULL ) {

        printf( " %s    ", (*walk)->number ) ;
        *walk = (*walk)->next ;

    } 
        printf( "No next node.\n" ) ;
 }

void swapNodes( struct studentNode** begin , int x , int y ) {

    struct studentNode *temp1 = NULL, *now1 = *begin ;
    struct studentNode *temp2 = NULL, *now2 = *begin ;

    // Find nodes at positions x and y
    for ( int i = 1; i < x && now1 != NULL; ++i ) {
        temp1 = now1 ;
        now1 = now1->next ;
    }

    for ( int i = 1; i < y && now2 != NULL; ++i ) {
        temp2 = now2 ;
        now2 = now2->next ;
    }

    // If either position is out of bounds, return
    if ( now1 == NULL || now2 == NULL ) {
        return ;
    }

    // If node1 is not the begin of the list
    if ( temp1 != NULL ) {
        temp1->next = now2 ;
    } else {
        *begin = now2 ; // Make node2 the new begin
    }

    // If node2 is not the begin of the list
    if ( temp2 != NULL ) {
        temp2->next = now1 ;
    } else {
        *begin = now1 ; // Make node1 the new begin
    }

    // Swap next pointers
    struct studentNode* temp = now1->next ;
    now1->next = now2->next ;
    now2->next = temp ;
}