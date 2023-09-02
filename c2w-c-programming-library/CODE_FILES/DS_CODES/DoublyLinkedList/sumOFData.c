


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
	int sumOfData(){
			if(head == NULL){
			printf("Empty Linked List\n");
			return -1;
		}else{
			int sum=0;
		node *temp= head;
		while(temp != NULL){
				sum += temp->data;		
			temp=temp->next;
		}

		return sum;

	}
	}
	void main(){
		int x;
		printf("How Many Nodes Do You Want?\n");
		scanf("%d",&x);
		for(int i=1;i<=x;i++){
			addNode();
		}
		printf("%d",sumOfData());
	
	}

			


