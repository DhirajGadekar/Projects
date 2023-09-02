


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
	void seclast(int num)
	{

		int n = countNode();

		if (head == NULL)
			printf("LINKEDLIST IS EMPTY.\n");
		else
		{
			int arr[n];
			int count = 0;
			int i = 0, pos = 0;
			Node *temp = head;
			if (head != NULL)
			{
				while (temp != NULL)
				{
					pos++;
					if (temp->data == num)
					{
						count++;
						arr[i] = pos;
						i++;
					}
					temp = temp->next;
				}
			}
			if (count == 1)
			{
				printf("%d  appeared only one time at position %d", num, arr[0]);
			}
			else if (count == 0)
			{
				printf("%d is  not present.\n", num);
			}
			else
			{
				printf("%d is 2nd last position of %d ", arr[count - 2], num);
			}
		}
	}
	void main()
	{
		printf("How many Nodes you want\n");
		int x;
		scanf("%d", &x);
		for (int i = 1; i <= x; i++)
		{
			addNode();
		}

		seclast(10);
	}



