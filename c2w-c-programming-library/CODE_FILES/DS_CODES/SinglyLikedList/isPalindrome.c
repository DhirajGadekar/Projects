

// Program that checkes if given linked list is Palindrome or not

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{

    int data;
    struct Node *next;
} Node;

Node *head = NULL;

// createNode

Node *createNode()
{

    Node *newNode = (Node *)malloc(sizeof(Node));

    printf("Enter Data:\n");
    scanf("%d", &(newNode->data));

    newNode->next = NULL;

    return newNode;
}

// addNode

void addNode()
{

    Node *newNode = createNode();

    if (head == NULL)
    {

        head = newNode;
    }
    else
    {

        Node *temp = head;

        while (temp->next != NULL)
        {

            temp = temp->next;
        }

        temp->next = newNode;
    }
}

// printLL

int printLL()
{

    if (head == NULL)
    {

        return -1;
    }
    else
    {

        Node *temp = head;

        while (temp->next != NULL)
        {

            printf("|%d|->", temp->data);
            temp = temp->next;
        }

        printf("|%d|\n", temp->data);
        return 0;
    }
}

int countNode()
{

    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {

        count++;
        temp = temp->next;
    }

    return count;
}

// Linked list is Palindrome or not

int isPalindromeLL()
{

    struct Node *temp = head;

    if (head == NULL)
        return -1;
    else if (temp->next == NULL)
    {
        return 1;
    }
    struct Node *temp1 = head;
    struct Node *temp2 = head;

    int count = countNode() / 2;
    int x = 0, i = 0;

    while (count - 1)
    {
        int k = countNode() - 1 - i;

        while (k)
        {
            temp2 = temp2->next;
            k--;
        }

        if (temp1->data != temp2->data)
            return 0;

        temp1 = temp1->next;
        temp2 = head;
        count--;
        i++;
    }
    return 1;
}

// Driver Code

void main()
{

    int n;

    printf("Enter No of Nodes:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        addNode();
    }

    printLL();

    int ret = isPalindromeLL();

    if (ret == -1)
        printf("LINKEDLIST IS EMPTY\n");
    else if (ret == 0)
        printf("NOT PALINDROME\n");
    else
        printf("PALINDROME\n");
}
