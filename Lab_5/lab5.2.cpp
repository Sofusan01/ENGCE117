#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

void insNode(struct studentNode **prev, const char n[], int a, char s, float g);
void goNext(struct studentNode ***walk);
void delNode(struct studentNode **prev);

void showAll(struct studentNode **walk);

int main() {
    struct studentNode *start, **now;
    start = NULL;
    now = &start;

    insNode(now, "one", 6, 'M', 3.11);
    showAll(&start);

    insNode(now, "two", 8, 'F', 3.22);
    showAll(&start);

    goNext(&now);

    insNode(now, "three", 10, 'M', 3.33);
    showAll(&start);

    insNode(now, "four", 12, 'F', 3.44);
    showAll(&start);

    goNext(&now);

    delNode(now);
    showAll(&start);

    return 0;
}

void showAll(struct studentNode **walk) {
    while (*walk != NULL) {
        printf("%s ", (*walk)->name);
        walk = &(*walk)->next;
    }
    printf("\n");
}

void insNode(struct studentNode **prev, const char n[], int a, char s, float g) {
    struct studentNode *newNode = new struct studentNode;
    strcpy(newNode->name, n);
    newNode->age = a;
    newNode->sex = s;
    newNode->gpa = g;
    newNode->next = *prev;
    *prev = newNode;
}

void goNext(struct studentNode ***walk) {
    if (*walk != NULL) {
        *walk = &((*walk)->next);
    }
}

void delNode(struct studentNode **prev) {
    if (*prev != NULL) {
        struct studentNode *temp = *prev;
        *prev = (*prev)->next;
        delete temp;
    }
}
