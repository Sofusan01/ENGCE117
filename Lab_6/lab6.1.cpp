#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
    struct studentNode *back;
};
void DelNode(struct studentNode **walk, struct studentNode **begin);
void InsNode(struct studentNode *walk, char name[], int age, char sex, float gpa, struct studentNode **begin);
struct studentNode *AddNode(struct studentNode **walk, char name[], int age, char sex, float gpa);
void ShowAll(struct studentNode *walk);
void GoBack(struct studentNode **walk);

int main() {
 	struct studentNode *start, *now ;
 	start = NULL ;
 	now = AddNode( &start, "one", 6, 'M', 3.11 ) ; ShowAll( start ) ;
 	now = AddNode( &start, "two", 8, 'F', 3.22 ) ; ShowAll( start ) ;
 	InsNode( now, "three", 10, 'M', 3.33, &start ) ; ShowAll( start ) ;
 	InsNode( now, "four", 12, 'F', 3.44, &start ) ; ShowAll( start ) ;
 	GoBack( &now ) ;
 	DelNode( &now, &start ) ; ShowAll( start ) ; 
 	DelNode( &now, &start ) ; ShowAll( start ) ;
 	DelNode( &now, &start ) ; ShowAll( start ) ;
 	return 0 ;
}

void ShowAll(struct studentNode *walk) {
    while (walk != NULL) {
        printf("%s ", walk->name);
        walk = walk->next;
    }
    printf("\n");
}

struct studentNode *AddNode(struct studentNode **walk, char name[], int age, char sex, float gpa) {
    struct studentNode *temp = NULL;
    while (*walk != NULL) {
        temp = *walk;
        walk = &(*walk)->next;
    }
    *walk = new struct studentNode;
    strcpy((*walk)->name, name);
    (*walk)->age = age;
    (*walk)->sex = sex;
    (*walk)->gpa = gpa;
    (*walk)->next = NULL;
    (*walk)->back = temp;

    return *walk;
}
void InsNode(struct studentNode *walk, char name[], int age, char sex, float gpa, struct studentNode **begin) {
    if (walk->back != NULL) {	
        walk->back->next = new struct studentNode;
        strcpy(walk->back->next->name, name);
        walk->back->next->age = age;
        walk->back->next->sex = sex;
        walk->back->next->gpa = gpa;
        walk->back->next->next = walk;
        walk->back->next->back = walk->back;
        walk->back = walk->back->next;
    } else {
        *begin = new struct studentNode;
        strcpy((*begin)->name, name);
        (*begin)->age = age;
        (*begin)->sex = sex;
        (*begin)->gpa = gpa;
        (*begin)->next = walk;
        (*begin)->back = NULL;
        walk->back = *begin;
    }
}

void DelNode(struct studentNode **walk, struct studentNode **begin) {
	
    struct studentNode *temp;
    if ((*walk)->back != NULL){
        (*walk)->back->next = (*walk)->next;
    }
    else{
        *begin = (*walk)->next;
	}    
	
    delete *walk;
    *walk = temp;
}

void GoBack(struct studentNode **walk) {
    if ((*walk)->back != NULL){
        *walk = (*walk)->back;
    }
}