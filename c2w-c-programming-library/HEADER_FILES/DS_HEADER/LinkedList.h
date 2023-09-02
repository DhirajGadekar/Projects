
struct NodeLL
{
	int data;
	struct NodeLL *next;
};

struct NodeLL *headLL = NULL;

int singlyLLVal;
int positionLL;
char singlyLLStr1[50000];
char singlyLLStr2[50000];

struct NodeLL *createNodeLL()
{

	struct NodeLL *newNodeLL = (struct NodeLL *)malloc(sizeof(struct NodeLL));

	newNodeLL->data = singlyLLVal;
	newNodeLL->next = NULL;

	return newNodeLL;
}

void addNodeLL()
{

	struct NodeLL *newNodeLL = createNodeLL();

	if (headLL == NULL)
		headLL = newNodeLL;
	else
	{

		struct NodeLL *temp = headLL;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = newNodeLL;
	}
}

void addFirstLL()
{

	struct NodeLL *newNodeLL = createNodeLL();

	if (headLL == NULL)
		headLL = newNodeLL;
	else
	{
		newNodeLL->next = headLL;
		headLL = newNodeLL;
	}
}

int countNodeLL()
{

	int count = 0;
	struct NodeLL *temp = headLL;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return count;
}

void addLastLL()
{

	struct NodeLL *newNodeLL = createNodeLL();

	if (headLL == NULL)
		headLL = newNodeLL;
	else
	{
		struct NodeLL *temp = headLL;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = newNodeLL;
	}
}

int addAtPositionLL(int pos)
{

	int countLL = countNodeLL();

	if (pos <= 0 || pos > countLL + 1)
		return -1;
	else
	{
		if (pos == countLL + 1)
			addLastLL();

		else if (pos == 1)
			addFirstLL();
		else
		{
			struct NodeLL *newNodeLL = createNodeLL();
			struct NodeLL *temp = headLL;

			while (pos - 2)
			{
				temp = temp->next;
				pos--;
			}

			newNodeLL->next = temp->next;
			temp->next = newNodeLL;
		}
	}
	return 0;
}

void deleteFirstLL()
{

	if (headLL == NULL)
		sprintf(singlyLLStr2, "LINKEDLIST IS EMPTY\n");

	else
	{

		struct NodeLL *temp = headLL;
		headLL = temp->next;

		free(temp);
	}
}

void deleteLastLL()
{

	if (headLL == NULL)
		sprintf(singlyLLStr2, "LINKEDLIST IS EMPTY\n");

	else
	{
		if (headLL->next == NULL)
			deleteFirstLL();
		else
		{
			struct NodeLL *temp = headLL;

			while (temp->next->next != NULL)
				temp = temp->next;

			free(temp->next);
			temp->next = NULL;
		}
	}
}

void deleteLL()
{

	struct Node *temp = headLL;

	while (headLL != NULL)
	{
		headLL = headLL->next;
		free(temp);
		temp = headLL;
	}
}

int updateNodeLL(int pos)
{

	int count = countNodeLL();

	if (pos <= 0 || pos > count)
		return -1;
	else
	{
		struct NodeLL *temp = headLL;

		while (pos - 1)
		{
			temp = temp->next;
			pos--;
		}

		temp->data = singlyLLVal;
	}
	return 0;
}

int deleteAtPositionLL(int pos)
{
	int count = countNodeLL();

	if (pos <= 0 || pos > count)
		return -1;
	else
	{
		if (pos == 1)
			deleteFirstLL();

		else if (pos == count)
			deleteLastLL();

		else
		{
			struct NodeLL *temp1 = headLL;

			while (pos - 2)
			{
				temp1 = temp1->next;
				pos--;
			}

			struct NodeLL *temp2 = temp1->next;
			temp1->next = temp2->next;

			free(temp2);
		}
	}
	return 0;
}

char *printLinkedListLL()
{

	if (headLL == NULL)
		sprintf(singlyLLStr2, "LINKEDLIST IS EMPTY\n");

	else
	{
		struct NodeLL *temp = headLL;
		singlyLLStr2[0] = '\0';

		while (temp != NULL)
		{
			if (temp->next != NULL)
				sprintf(singlyLLStr1, "| %d |->", temp->data);

			else
				sprintf(singlyLLStr1, "| %d |", temp->data);

			concat(singlyLLStr2, singlyLLStr1);

			temp = temp->next;
		}
	}
	return singlyLLStr2;
}

////////////////////////Aakanksha////////////////

// No error=======

// First Occurence
int firstOccurenceLL(int num)
{

	if (headLL == NULL)
		return -1;
	else
	{

		int count = 0;
		struct NodeLL *temp = headLL;

		while (temp != NULL)
		{
			count++;

			if (temp->data == num)
				return count;
			temp = temp->next;
		}
	}
	return 0;
}

// Second Last Occurence
int secondLastOccurenceLL(int num)
{

	int first = 0;
	int second = 0;
	int count = 0;

	if (headLL == NULL)
		return -1;
	else
	{
		struct NodeLL *temp = headLL;

		while (temp != NULL)
		{
			count++;

			if (temp->data == num)
			{

				second = first;
				first = count;
			}
			temp = temp->next;
		}
	}

	if (first == 0)
		return 0;
	else if (second == 0)
		return -2;
	else
		return second;
}

// Total Occurence Count
int occurenceCountLL(int num)
{

	if (headLL == NULL)
		return -1;
	else
	{
		int count = 0;
		struct NodeLL *temp = headLL;

		while (temp != NULL)
		{
			if (temp->data == num)
				count++;

			temp = temp->next;
		}
		return count;
	}
}

// nthOccurrence
int nthOccurrenceLL(int num, int occ)
{

	int index = 0;
	int flag = 0;
	int count = 0;

	if (headLL == NULL)
		return -1;
	else
	{
		struct NodeLL *temp = headLL;

		while (temp != NULL)
		{
			index++;

			if (temp->data == num)
			{

				count++;
				flag = 1;

				if (count == occ)
					return index;
			}

			temp = temp->next;
		}
	}

	if (flag == 0)
		return 0;
	else
		return -2;
}

// Print Palindrome Number in LinkedList
char *printPalindromeLL()
{

	if (headLL == NULL)
	{
		sprintf(singlyLLStr2, "LINKEDLIST IS EMPTY!\n");
		return singlyLLStr2;
	}
	else
	{

		int count = 0;
		int flag = 0;
		struct NodeLL *temp = headLL;
		singlyLLStr2[0] = '\0';

		while (temp != NULL)
		{
			count++;

			if (palindrome(temp->data))
			{
				sprintf(singlyLLStr1, "%d ", count);
				concat(singlyLLStr2, singlyLLStr1);

				flag = 1;
			}

			temp = temp->next;
		}

		if (flag == 0)
		{
			sprintf(singlyLLStr2, "PALINDROME NUMBER NOT FOUND.\n");
			return singlyLLStr2;
		}
	}
	return singlyLLStr2;
}

int sumOfDataDigitLL()
{

	if (headLL == NULL)
		return -1;

	else
	{

		struct NodeLL *temp = headLL;

		while (temp != NULL)
		{

			temp->data = sumOfDigits(temp->data);
			temp = temp->next;
		}
	}
	return 0;
}

char *sumOfDataLL()
{
	if (headLL == NULL)
	{
		sprintf(singlyLLStr2, "LINKEDLIST IS EMPTY!\n");
		return singlyLLStr2;
	}
	else
	{

		int sum = 0;
		struct NodeLL *temp = headLL;

		while (temp != NULL)
		{

			sum = sum + temp->data;
			temp = temp->next;
		}
		sprintf(singlyLLStr2, "SUM OF DATA IN LINKEDLIST IS %d.", sum);
	}

	return singlyLLStr2;
}

// maxLL data in Sll
char *maxLL()
{
	if (headLL == NULL)
	{
		sprintf(singlyLLStr2, "LINKEDLIST IS EMPTY!\n");
		return singlyLLStr2;
	}
	else
	{
		int maxLL = headLL->data;
		struct NodeLL *temp = headLL;

		while (temp != NULL)
		{
			if (maxLL < temp->data)
				maxLL = temp->data;

			temp = temp->next;
		}
		sprintf(singlyLLStr2, "MAXIMUM DATA IN LINKEDLIST IS %d.", maxLL);
	}
	return singlyLLStr2;
}

// minLL data in Sll
char *minLL()
{

	if (headLL == NULL)
	{
		sprintf(singlyLLStr2, "LINKEDLIST IS EMPTY!\n");
		return singlyLLStr2;
	}

	else
	{
		int minLL = headLL->data;
		struct NodeLL *temp = headLL;

		while (temp != NULL)
		{

			if (minLL > temp->data)
				minLL = temp->data;

			temp = temp->next;
		}
		sprintf(singlyLLStr2, "MAXIMUM DATA IN LINKEDLIST IS %d.", minLL);
	}
	return singlyLLStr2;
}

// Inplace Reverse
int inplaceReverseLL()
{

	if (headLL == NULL)
		return -1;
	else
	{
		struct NodeLL *temp1 = headLL;
		struct NodeLL *temp2 = NULL;
		struct NodeLL *temp3 = NULL;

		while (temp1 != NULL)
		{

			temp2 = temp1->next;
			temp1->next = temp3;
			temp3 = temp1;
			temp1 = temp2;
		}
		headLL = temp3;
	}
	return 0;
}

// LinkedList Palindrome

int isPalindromeLL()
{

	struct NodeLL *temp = headLL;
	if (headLL == NULL)
		return -1;
	else if (temp->next == NULL)
	{
		return 1;
	}
	struct NodeLL *temp1 = headLL;
	struct NodeLL *temp2 = headLL;
	int count = countNodeLL() / 2;
	int x = 0, i = 0;

	while (count - 1)
	{
		int k = countNodeLL() - 1 - i;
		while (k)
		{
			temp2 = temp2->next;
			k--;
		}
		if (temp1->data != temp2->data)
			return -1;
		temp1 = temp1->next;
		temp2 = headLL;
		count--;
		i++;
	}
	return 1;
}