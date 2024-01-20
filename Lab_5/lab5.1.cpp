#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

struct studentNode* addNode(struct studentNode **start, const char n[], int a, char s, float g);
void insNode(struct studentNode *prev, const char n[], int a, char s, float g);
void delNode(struct studentNode **start, struct studentNode *node);
void showAll(struct studentNode *walk);

int main() {
    struct studentNode *start, *now;
    start = NULL;
    now = addNode(&start, "one", 6, 'M', 3.11);
    showAll(start);

    now = addNode(&start, "two", 8, 'F', 3.22);
    showAll(start);

    insNode(now, "three", 10, 'M', 3.33);
    showAll(start);

    insNode(now, "four", 12, 'F', 3.44);
    showAll(start);

    delNode(&start, now);
    showAll(start);

    return 0;
}

struct studentNode* addNode(struct studentNode **start, const char n[], int a, char s, float g) {
    struct studentNode *newNode = new struct studentNode;
    strcpy(newNode->name, n);
    newNode->age = a;
    newNode->sex = s;
    newNode->gpa = g;
    newNode->next = *start;
    *start = newNode;
    return newNode;
}

void insNode(struct studentNode *prev, const char n[], int a, char s, float g) {
    if (prev == NULL) {
        printf("Error: Cannot insert node after NULL.\n");
        return;
    }

    struct studentNode *newNode = new struct studentNode;
    strcpy(newNode->name, n);
    newNode->age = a;
    newNode->sex = s;
    newNode->gpa = g;
    newNode->next = prev->next;
    prev->next = newNode;
}

void delNode(struct studentNode **start, struct studentNode *node) {
    if (*start == NULL || node == NULL) {
        printf("Error: Cannot delete NULL node.\n");
        return;
    }

    if (node == *start) {
        *start = (*start)->next;
        delete node;
        return;
    }

    struct studentNode *prev = *start;
    while (prev != NULL && prev->next != node) {
        prev = prev->next;
    }

    if (prev != NULL) {
        prev->next = node->next;
        delete node;
    } else {
        printf("Error: Node not found.\n");
    }
}

void showAll(struct studentNode *walk) {
    while (walk != NULL) {
        printf("%s ", walk->name);
        walk = walk->next;
    }
    printf("\n");
}