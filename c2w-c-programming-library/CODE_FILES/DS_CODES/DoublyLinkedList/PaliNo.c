


        #include <stdio.h>
        #include <stdlib.h>

        typedef struct Node
        {
                struct Node *prev;
                int data;
                struct Node *next;
        } Node;

        Node *head = NULL;

        Node *createNode()
        {

                Node *newNode = (Node *)malloc(sizeof(Node));
                newNode->prev = NULL;
                printf("Enter data\n");
                scanf("%d", &newNode->data);
                newNode->next = NULL;
        }

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
                        newNode->prev = temp;
                }
        }

        void palindromeNum()
        {

                if (head == NULL)
                        printf("LINKEDLIST IS EMPTY!\n");

                else
                {
                        Node *temp = head;
                        int count = 0;
                        int flag = 0;
                        while (temp != NULL)
                        {
                                count++;
                                int num, rem;
                                int sum = 0;
                                num = temp->data;
                                while (num != 0)
                                {
                                        rem = num % 10;
                                        sum = sum * 10 + rem;
                                        num /= 10;
                                }
                                if (temp->data == sum)
                                {
                                        printf("Palindrome found at %d\n", count);
                                        flag = 1;
                                }

                                temp = temp->next;
                        }
                        if (flag == 0)
                                printf("Palindrome number not found.\n");
                }
        }

        void printll()
        {
                if (head == NULL)
                        printf("Nothing to print\n");
                else
                {
                        Node *temp = head;
                        while (temp->next != NULL)
                        {
                                printf("|%d|->", temp->data);
                                temp = temp->next;
                        }
                        printf("|%d|\n", temp->data);
                }
        }

        void main()
        {

                int x;
                printf("Enter no of Nodes\n");
                scanf("%d", &x);
                for (int i = 1; i <= x; i++)
                {
                        addNode();
                }
                printll();
                palindromeNum();
        }



