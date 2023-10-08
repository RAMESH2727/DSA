#include <stdio.h>
#include <stdlib.h>

// Structure Definition
struct node
{
    int data;
    struct node *Next;
};

// Function to print Linked List from Head pointer
void printLL(struct node *p)
{
    struct node *head = p;
    do
    {
        printf("%d ", p->data);
        p = p->Next;
    } while (p != head);
    printf("...\nAnd the Singly Circular Linked List Loops Back");
    return;
}

int main()
{
    // -------------------- Creating a Singly Circular Linked List --------------------
    // 1. Declaring New Nodes
    struct node *Head = NULL;
    struct node *e1;
    struct node *e2;
    struct node *e3;
    struct node *e4;

    // 2. Allocating Memory to Nodes
    e1 = (struct node *)malloc(sizeof(struct node));
    e2 = (struct node *)malloc(sizeof(struct node));
    e3 = (struct node *)malloc(sizeof(struct node));
    e4 = (struct node *)malloc(sizeof(struct node));

    // 3. Initializing Data in Nodes
    e1->data = 5;
    e2->data = 10;
    e3->data = 15;
    e4->data = 20;

    // 4. Connecting Nodes Together
    e1->Next = e2;
    e2->Next = e3;
    e3->Next = e4;
    e4->Next = e1;
    Head = e1;

    // Printing Linked List
    printf("Initial Linked List: ");
    printLL(Head);
    printf("\n");

    // -------------------- Insertion --------------------
    // ----- Insertion at the Beginning -----

    // Creating Node to be Inserted
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    // Creating pointer to traverse
    struct node *point;
    point = Head;

    // Traversing pointer till node->Next == Head
    do
    {
        point = point->Next;
    } while (point->Next != Head);

    // Inserting New Node
    if (newNode != NULL)
    {
        newNode->data = 9;
        newNode->Next = Head;
        point->Next = newNode;
        Head = newNode;
    }

    // Printing Linked List
    printf("Modified Linked List: ");
    printLL(Head);
    printf("\n");
    return 0;
}