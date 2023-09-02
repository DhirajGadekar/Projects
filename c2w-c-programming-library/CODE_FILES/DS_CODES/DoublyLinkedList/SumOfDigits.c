


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
			{
				temp = temp->next;
			}
			temp->next = newNode;
			newNode->prev = temp;
		}
	}

	void add()
	{
		if (head == NULL)
			printf("Empty Linked List\n");
		else
		{
			int num, sum, rem;
			Node *temp = head;
			while (temp != NULL)
			{
				num = temp->data;
				sum = 0;
				rem = 0;
				while (num != 0)
				{
					rem = num % 10;
					sum += rem;
					num /= 10;
				}

				temp->data = sum;
				temp = temp->next;
			}
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
		add();
		printll();
	}



