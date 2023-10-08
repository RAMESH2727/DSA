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

    // -------------------- Deletion --------------------
    // ----- Deletion at the Beginning -----
    if (Head != NULL)
    {
        Head = Head->FLink;
        Head->BLink = NULL;
    }

    // Printing Linked List
    printf("Modified Linked List: \n");
    printLL(Head);
    printf("\n");
    return 0;
}