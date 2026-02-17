#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct List {
    Node* head;
} List;     

void printList(List* list) {
    Node* temp = list->head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void foo(List * list,int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (list->head == NULL) {
        list->head = newNode;
    } else {
        Node* temp = list->head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void bar(List* list) {
    if (list->head == NULL) return; 

    Node* temp = list->head;
    Node* minNode = temp;
    Node* prevMinNode = NULL;
    Node* prevTemp = NULL; 

    while (temp != NULL) {
        if (temp->data < minNode->data) {
            minNode = temp;
            prevMinNode = prevTemp; 
        }
        prevTemp = temp; 
        temp = temp->next;
    }

    if (prevMinNode == NULL) {
        list->head = minNode->next; 
    } else {
        prevMinNode->next = minNode->next; 
    }

    free(minNode);
}


int main() {
    List myList;
    myList.head = NULL;

    foo(&myList, 10);
    foo(&myList, 20);
    foo(&myList, 5);
    foo(&myList, 30);
    printList(&myList);
    return 0;

    bar(&myList);
    printList(&myList);

    return 0;
}   