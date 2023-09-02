


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

	int Count()
	{
		int count = 0;
		if (head == NULL)
		{
			count = 0;
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

	void addFirst()
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

			newNode->next = head;
			head->prev->next = newNode;
			newNode->prev = head->prev;
			head->prev = newNode;
			head = newNode;
		}
	}

	int addAtPos(int pos)
	{

		int cnt = Count();

		if (pos <= 0 || pos > cnt + 1)
		{
			printf("Invalid Position");
			return -1;
		}
		else
		{
			if (pos == cnt + 1)
			{

				addNode();
			}
			else if (pos == 1)
			{

				addFirst();
			}
			else
			{
				struct Node *newNode = createNode();
				struct Node *temp = head;

				while (pos - 2)
				{

					temp = temp->next;
					pos--;
				}
				newNode->next = temp->next;
				newNode->prev = temp;

				temp->next->prev = newNode;
				temp->next = newNode;
			}
			return 0;
		}
	}

	void delFirst()
	{

		if (head == NULL)
		{
			printf("LinkedList is Empty\n");
		}
		else if (head->next == head)
		{

			free(head);
			head = NULL;
		}

		else
		{
			head = head->next;
			head->prev = head->prev->prev;

			free(head->prev->next);

			head->prev->next = head;
		}
	}

	int delLast()
	{

		if (head == NULL)
		{
			printf("LinkedList is Empty\n");
			return -1;
		}
		else
		{
			if (head->next == head)
			{

				free(head);
				head = NULL;
			}
			else
			{
				head->prev = head->prev->prev;
				free(head->prev->next);
				head->prev->next = head;
			}
			return 0;
		}
	}

	void delAtPos(int pos)
	{

		int count = Count();

		if (pos <= 0 || pos > count)
		{
			printf("Invalid Position\n");
		}
		else
		{
			if (pos == 1)
			{
				delFirst();
			}
			else if (pos == count)
			{
				delLast();
			}
			else
			{

				struct Node *temp = head;

				while (pos - 2)
				{

					temp = temp->next;
					pos--;
				}

				temp->next = temp->next->next;
				free(temp->next->prev);
				temp->next->prev = temp;
			}
		}
	}
	void main()
	{

		char choice;

		do
		{

			printf("1. addNode()\n 2.addFirst()\n 3.addAtPos \n 4.PrintNode\n 5.delFirst()\n 6.delLast()\n 7.delAtPos()\n 8.count()\n");

			int ch;
			printf("Enter choice : ");
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
			{

				int pos;
				printf("Enter position: \n");
				scanf("%d", &pos);
				addAtPos(pos);
			}
			break;
			case 4:
				PrintNode();
				break;
			case 5:
				delFirst();
				break;
			case 6:
				delLast();
				break;
			case 7:
			{
				int pos;
				printf("Enter position: \n");
				scanf("%d", &pos);
				delAtPos(pos);
			}
			break;
			case 8:
				Count();
				break;
			default:
				printf("wrong choice!!\n");
			}

			getchar();
			printf("\nDo You Want To Continue :  y or n\n");
			scanf("%c", &choice);

		} while (choice == 'y' || choice == 'Y');
	}



