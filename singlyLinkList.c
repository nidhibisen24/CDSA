#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

//================================== Traversal linked list =====================
void linkTraversal(struct Node *ptr)
{ // ptr ko Node bhi likh skte hai
    while (ptr != NULL)
    {
        printf(" Element is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// ================================= insert at begning =================
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node)); // for creation new node
    ptr->next = head;
    ptr->data = data;
    head = ptr; // iski jgh hum head = ptr bhi kr skte hai
}

// ================================= insert at between ===================
struct Node *insertAtBetween(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;
    return head;
};

// ===================================== insert at end ==================
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->data = data;
    return head;
}

// ===================================== insert after ===================
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    ptr->data = data;
    return head;
}

// =========================================================================================  Deletion Operations ======================================

//  ====================== Deleting the first element ===================
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head ;
    head = head->next;
    free(ptr);
    return head;
}

// ===================== Deleting the element at a given index===========
struct Node* deleteAtIndex(struct Node * head,int index){
    struct Node * p = head;
    int i =0;
    while (p!=index-1)
    {
        p = p->next;
        i++;
    }
    p->next;
    
}
int main()
{
    struct Node *head;
    struct Node *two;
    struct Node *three;

    // memory allocation

    head = (struct Node *)malloc(sizeof(struct Node));
    two = (struct Node *)malloc(sizeof(struct Node));
    three = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = two;

    two->data = 5;
    two->next = three;

    three->data = 5;
    three->next = NULL;

// ===============================insertion functions call =================
    // linkTraversal(head);
    // head = insertAtFirst(head, 12);
    // head = insertAtBetween(head, 10, 3);
    // head = insertAtBetween(head, 330, 2);
    // printf("Linked list before insertion\n");
    // linkTraversal(head);
    // // head = insertAtEnd(head, 32);
    // head = insertAfterNode(head, two, 122);
    // printf("Linked list after insertion\n");
    // linkTraversal(head);


// ========================== deletion functions call ===================
 printf("List before deletion\n");
linkTraversal(head);
 head = deleteFirst(head);  // delete first element in linked list 
 head = deleteFirst(head); 
 printf("List after deletion\n");
 linkTraversal(head);

    return 0;
}