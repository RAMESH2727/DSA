#include <stdio.h>
#include <stdlib.h>

// Structure Definition
struct node
{
    struct node *BLink;
    int data;
    struct node *FLink;
};

// Function to print Linked List from Head pointer
void printLL(struct node *p)
{
    while (p != NULL)
    {
        if (p->BLink != NULL)
            printf("BLink data: %d \n", p->BLink->data);
        printf("data: %d \n", p->data);
        if (p->FLink != NULL)
            printf("FLink data: %d \n", p->FLink->data);
        printf("\n");
        p = p->FLink;
    }
    return;
}

int main()
{
    // -------------------- Creating a Doubly Linked List --------------------
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

    // 4. Connecting Nodes FLink Together
    e1->FLink = e2;
    e2->FLink = e3;
    e3->FLink = e4;
    e4->FLink = NULL;

    // 5. Connecting Nodes BLink Together
    e1->BLink = NULL;
    e2->BLink = e1;
    e3->BLink = e2;
    e4->BLink = e3;

    // Connecting Head to First Node
    Head = e1;

    // Printing Linked List
    printf("Initial Linked List: \n");
    printLL(Head);
    printf("\n");

    // -------------------- Insertion --------------------
    // ----- Insertion after a searchData -----

    // Creating Node to be Inserted
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    // Initializing searchData
    int searchData = 11;

    // Creating pointer to traverse
    struct node *point;
    point = Head;

    // Traversing pointer till searchData is found
    while (point->data != searchData && point->FLink != NULL)
    {
        point = point->FLink;
    }

    // If search data not found, end program
    if (point->data != searchData)
    {
        printf("Search data not found in Linked List! \nExitting...");
        return 0;
    }

    // Inserting New Node
    if (newNode != NULL)
    {
        newNode->BLink = point;
        newNode->data = 9;
        newNode->FLink = point->FLink;
        newNode->BLink->FLink = newNode;
        newNode->FLink->BLink = newNode;
    }

    // Printing Linked List
    printf("Modified Linked List: \n");
    printLL(Head);
    printf("\n");
    return 0;
}