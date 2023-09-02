


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
	int nthOccurrence(int num, int occ)
	{

		int index = 0;
		int flag = 0;
		int count = 0;

		if (head == NULL)
			return -1;
		else
		{
			node *temp = head;

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

	void main(){
		int x,y;
		printf("How Many Nodes Do You Want?\n");
		scanf("%d",&x);
		for(int i=1;i<=x;i++){
			addNode();
		}
		printf("Enter a number and occurrence\n");
		scanf("%d%d",&x,&y);
		printf("%d",nthOccurrence(x,y));
	
	}

			


