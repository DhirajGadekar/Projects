


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
			head = newNode;
		else
		{
			Node *temp = head;

			while (temp->next != NULL)
				temp = temp->next;

			temp->next = newNode;
			newNode->prev = temp;
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

	void firstOccurrence(int num)
	{
		if (head == NULL)
			printf("LINKEDLIST IS EMPTY!\n");
		else
		{
			int count = 0;
			Node *temp = head;

			while (temp != NULL)
			{
				count++;
				if (temp->data == num)
				{
					printf("%d first Occured at Position %d", num, count);
					break;
				}
				temp = temp->next;
			}
			printf("%d Not Fount in linked list\n", num);
		}
	}

	void main()
	{
		int x;
		printf("How Many Nodes Do You Want?\n");
		scanf("%d", &x);
		for (int i = 1; i <= x; i++)
		{
			addNode();
		}

		printf("Enter a number\n");
		scanf("%d", &x);
		firstOccurrence(x);
	}


	
