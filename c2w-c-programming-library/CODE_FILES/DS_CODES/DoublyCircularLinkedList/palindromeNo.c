


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

        void paliNo()
        {

                if (head == NULL)
                {
                        printf("LINKEDLIST IS EMPTY\n");
                }
                else
                {

                        struct Node *temp = head;
                        int count = 0;
                        int num, rem, sum;

                        while (temp->next != head)
                        {
                                count++;

                                sum = 0;
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
                                }

                                temp = temp->next;
                        }

                        count++;
                        sum = 0;
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
                        }
                }
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
                        printf("\n");
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
                paliNo();
        }




