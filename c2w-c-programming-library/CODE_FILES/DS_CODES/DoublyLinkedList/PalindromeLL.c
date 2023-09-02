


	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node{
		struct Node *prev;
		int data;
		struct Node *next;
	}node;

	node *head = NULL;

	node *createNode(){

		node *newnode = (node*)malloc (sizeof(node));
		newnode->prev=NULL;
		printf("Enter data\n");
		scanf("%d",&newnode->data);
		newnode->next = NULL;
	}

	void addNode(){
	
		node *newnode = createNode();
			if(head == NULL){
		head = newnode;
		}else{
		node* temp = head;
		while(temp->next != NULL){
			temp=temp->next ;
		}
		temp->next = newnode;
		newnode->prev = temp;
		}
	}

	int isPalindrome()
	{

		node *temp = head;
		if (head == NULL)
			return -1;
		else if (temp->next == NULL)
		{
			return 1;
		}
		node *head1 = temp;
		node *head2 = temp->next;
		int count = 1;

		while (head1->next != NULL)
		{
			head1 = head1->next;
			count++;
		}
		head1 = temp;
		temp->next = NULL;

		for (int i = 1; i < count / 2; i++)
		{
			node *r = head2->next;
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
	void main(){
		int x;
		printf("How Many Nodes Do You Want?\n");
		scanf("%d",&x);
		for(int i=1;i<=x;i++){
			addNode();
		}
		x = isPalindrome();
		if(x ==1){
			printf("Palindrome LL\n");
		}else{
			printf("Not a Palindrome LL\n");
	}
	
	}

			


