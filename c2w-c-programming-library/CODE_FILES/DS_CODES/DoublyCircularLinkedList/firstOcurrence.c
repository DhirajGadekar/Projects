


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
        int firstOccurence(int num)
        {

                if (head == NULL)
                {

                        return -1;
                }
                else
                {
                        int count = 0;
                        struct Node *temp = head;

                        while (temp->next != head)
                        {
                                count++;

                                if (temp->data == num)
                                        return count;
                                temp = temp->next;
                        }
                        count++;

                        if (temp->data == num)
                                return count;
                }
                return 0;
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
                printf("\nEnter a number\n");
                scanf("%d", &x);
                printf("%d", firstOccurence(x));
        }



