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
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->Next;
    }
    printf("\n");
    return;
}

int main()
{
    // -------------------- Creating a Singly Linked List --------------------
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
    e4->Next = NULL;
    Head = e1;

    // Printing Linked List
    printf("Initial Linked List: ");
    printLL(Head);
    printf("\n");

    // -------------------- Deletion --------------------
    // ----- Deletion at searchData -----

    // Initializing searchData
    int searchData = 20;

    // Creating pointer to traverse
    struct node *point;
    point = Head;

    // Traversing pointer till searchData is found
    while (point->Next != NULL && point->Next->data != searchData)
    {
        point = point->Next;
    }

    // If search data not found, end program
    if (point->Next == NULL && point->data != searchData)
    {
        printf("Search data not found in Linked List! \nExitting...");
        return 0;
    }

    // Deleting Node After searchData
    if (point != NULL)
    {
        point->Next = point->Next->Next;
    }

    // Printing Linked List
    printf("Modified Linked List: ");
    printLL(Head);
    printf("\n");
    return 0;
}