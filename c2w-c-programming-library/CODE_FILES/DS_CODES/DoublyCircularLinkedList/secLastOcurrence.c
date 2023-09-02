


    #include <stdio.h>
    #include <stdlib.h>

    struct Node
    {

        struct Node *prev;
        int data;
        struct Node *next;
    };

    struct Node *head = NULL;

    struct Node *createNode()
    {

        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

        newNode->prev = NULL;

        printf("Enter Data : ");
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        return newNode;
    }
    void addNode()
    {

        struct Node *newNode = createNode();

        if (head == NULL)
        {
            head = newNode;
            head->next = head;
            head->prev = head;
        }
        else
        {

            head->prev->next = newNode;
            newNode->prev = head->prev;

            newNode->next = head;
            head->prev = newNode;
        }
    }

    int secLastOccurence(int num)
    {

        int first = 0;
        int second = 0;
        int count = 0;

        if (head == NULL)
        {
            // sprintf(singlyLLStr2, "LinkedList is empty.\n");
            return -1;
        }
        else
        {
            struct Node *temp = head;

            while (temp->next != head)
            {
                count++;

                if (temp->data == num)
                {

                    second = first;
                    first = count;
                }
                temp = temp->next;
            }
            count++;

            if (temp->data == num)
            {

                second = first;
                first = count;
            }
        }

        if (first == 0)
            return 0;
        else if (second == 0)
            return -2;
        else
            return second;
    }

    void PrintNode()
    {

        if (head == NULL)
        {
            printf("LINKEDLIST IS EMPTY\n");
        }
        else
        {

            struct Node *temp = head;

            while (temp->next != head)
            {

                if (temp->next != head)
                {
                    printf("| %d |<->", temp->data);
                }
                temp = temp->next;
            }
            printf("| %d |", temp->data);
        }
    }

    void main()
    {
        int x;
        printf("Enter number of nodes\n");
        scanf("%d", &x);
        for (int i = 1; i <= x; i++)
        {
            addNode();
        }

        PrintNode();
        printf("Enter a number: \n");
        scanf("%d", &x);
        printf("%d", secLastOccurence(x));
    }



