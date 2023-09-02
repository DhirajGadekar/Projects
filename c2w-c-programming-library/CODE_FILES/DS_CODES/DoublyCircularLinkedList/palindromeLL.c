


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

        int Count()
        {
                int count = 0;
                if (head == NULL)
                {
                        count = 0;
                        return count;
                }
                else
                {

                        struct Node *temp = head;

                        while (temp->next != head)
                        {
                                count++;
                                temp = temp->next;
                        }
                }
                return count + 1;
        }

        int isPalindrome()
        {

                struct Node *temp = head;
                if (head == NULL)
                        return -1;
                else if (temp->next == head)
                {
                        return 1;
                }
                struct Node *head1 = temp;
                struct Node *head2 = temp->next;
                int count = Count();

                head1 = temp;
                temp->next = NULL;

                for (int i = 1; i < count / 2; i++)
                {
                        struct Node *r = head2->next;
                        head2->next = head1;
                        head1 = head2;
                        head2 = r;
                }

                if (count % 2 != 0)
                {
                        head2 = head2->next;
                }

                while (head1 != NULL)
                {
                        if (head1->data != head2->data)
                        {
                                return 0;
                        }
                        head1 = head1->next;
                        head2 = head2->next;
                }
                return 1;
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
                x = isPalindrome();
                if (x == 1)
                {
                        printf("\nLinked List is palindrome list.\n");
                }
                else
                        printf("\nLinked List is not palindrome.\n");
        }



