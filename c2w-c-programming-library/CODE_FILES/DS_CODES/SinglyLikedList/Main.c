



    #include <stdio.h>
    #include <stdlib.h>

    typedef struct Node
    {

        int data;
        struct Node *next;
    } Node;

    Node *head = NULL;

    Node *createNode()
    {

        Node *newNode = (Node *)malloc(sizeof(Node));

        printf("Enter data : ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        return newNode;
    }

    void addNode()
    {

        Node *newNode = createNode();

        if (head == NULL)
            head = newNode;
        else
        {
            Node *temp = head;

            while (temp->next != NULL)
                temp = temp->next;

            temp->next = newNode;
        }   
    }

    void printLL()
    {

        Node *temp = head;

        if (head == NULL)
            printf("LinkedList is Empty.\n");
        else
        {

            while (temp->next != NULL)
            {
                printf("|%d|->", temp->data);
                temp = temp->next;
            }
            printf("|%d|", temp->data);
            printf("\n");
        }
    }

    void addFirst()
    {

        Node *newNode = createNode();

        if (head == NULL)
            head = newNode;
        else
        {

            newNode->next = head;
            head = newNode;
        }
    }

    void addLast()
    {

        struct Node *newNode = createNode();

        if (head == NULL)
            head = newNode;
        else
        {
            struct Node *temp = head;

            while (temp->next != NULL)
                temp = temp->next;

            temp->next = newNode;
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

    void addAtPos(int pos)
    {

        int count = countNode();

        if (pos <= 0 || pos > count + 1)
        {

            printf("Invalid Position.\n");
            return;
        }
        else
        {

            if (pos == 1)
                addFirst();
            else if (pos == count + 1)
                addNode();
            else
            {

                Node *newNode = createNode();
                Node *temp = head;

                while (pos - 2)
                {

                    temp = temp->next;
                    pos--;
                }

                newNode->next = temp->next;
                temp->next = newNode;
            }
        }
    }

    void deleteFirst()
    {

        if (head == NULL)
            printf("LinkedList is Empty.\n");
        else
        {

            Node *temp = head;
            head = head->next;
            free(temp);
        }
    }

    void deleteLast()
    {

        if (head == NULL)
            printf("LinkedList is Empty.\n");
        else
        {

            if (head->next == NULL)
                deleteFirst();
            else
            {

                Node *temp = head;

                while (temp->next->next != NULL)
                    temp = temp->next;

                free(temp->next);
                temp->next = NULL;
            }
        }
    }

    void deleteLL()
    {

        struct Node *temp = head;

        while (head != NULL)
        {
            head = head->next;
            free(temp);
            temp = head;
        }
    }

    void deleteAtPos(int pos)
    {

        int count = countNode();

        if (pos <= 0 || pos > count)
            printf("Invalid Position.\n");
        else
        {

            if (pos == 1)
                deleteFirst();
            else if (pos == count)
                deleteLast();
            else
            {

                Node *temp = head;

                while (pos - 2)
                {

                    temp = temp->next;
                    pos--;
                }

                Node *ptr = temp->next;
                temp = temp->next->next;
                free(ptr);
            }
        }
    }   

    int updateNode(int pos, int data)
    {

        int count = countNode();

        if (pos <= 0 || pos > count)
            printf("INVALID POSITION\n");
        else
        {
            struct Node *temp = head;

            while (pos - 1)
            {
                temp = temp->next;
                pos--;
            }

            temp->data = data;
        }
        return 0;
    }

    void main()
    {

        int pos;
        int data;
        char choice;

        do
        {

            printf("1. ADD NODE\n");
            printf("2. ADD FIRST\n");
            printf("3. ADD LAST");
            printf("4. PRINT LINKEDLIST\n");
            printf("5. COUNT NODE\n");
            printf("6. DELETE FIRST\n");
            printf("7. DELETE LAST\n");
            printf("8. DELETE LINKEDLIST\n");
            printf("9. ADD AT POSITION\n");
            printf("10. UPDATE NODE\n");
            printf("11. DELETE AT POSITION\n");

            int ch;

            printf("Enter you choice : ");
            scanf("%d", &ch);

            switch (ch)
            {

            case 1:
                addNode();
                break;
            case 2:
                addFirst();
                break;
            case 3:
                addLast();
                break;
            case 4:
                printLL();
                break;
            case 5:
                printf("Node count = %d", countNode());
                break;
            case 6:
                deleteFirst();
                break;
            case 7:
                deleteLast();
                break;
            case 8:
                deleteLL();
                break;
            case 9:
                printf("Enter position : ");
                scanf("%d", &pos);
                addAtPos(pos);
                break;
            case 10:
                printf("Enter position : ");
                scanf("%d", &pos);
                printf("Enter data : ");
                scanf("%d", &data);
                updateNode(pos, data);
                break;
            case 11:
                printf("Enter position : ");
                scanf("%d", &pos);
                deleteAtPos(pos);
                break;
            default:
                printf("Invalid choice.\n");
            }

            getchar();
            printf("Do you want to continue ?\n");
            scanf("%c", &choice);

        } while (choice == 'y' || choice == 'Y');
    }