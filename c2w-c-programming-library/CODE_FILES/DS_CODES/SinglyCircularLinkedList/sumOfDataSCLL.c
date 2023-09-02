
/*A Program adds of a data element from singly circular linked list .*/

	#include<stdio.h>
	#include<stdlib.h>


	typedef struct Node{

		int data;
		struct Node *next;

	}Node;

	struct Node *head = NULL;

	//createNode

	struct Node *createNode(){

		struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

		printf("Enter Data:\n");
		scanf("%d",&(newNode->data));

		newNode->next = NULL;

		return newNode;
	}

	//addNode
	void addNode(){

		struct Node *newNode = createNode();

		if(head==NULL){

		head = newNode;
		newNode->next = head;

		}else{

				struct Node *temp = head;

			while(temp->next != head){

					temp = temp->next;

				}

			temp->next = newNode;
			newNode->next = head;

		}

	}

	//printLL

	void printLL(){

		if(head==NULL){

			printf("LinkedList is Empty!\n");
		}else{

					struct Node *temp = head;

				while(temp->next != head){

					printf("|%d|-->",temp->data);
					temp = temp->next;
			
				} 
					
				printf("|%d|",temp->data);
			
		}
		
		printf("\n");
	}

	//SumOfData

	int sumOfData(){

		Node *temp = head;

		int sum = 0;

		while(temp->next!= head){

				sum+= temp->data;
				temp = temp->next;

		}
			sum+=temp->data;

		return sum;

	}

	void main(){

		int n;
		
		printf("Enter No of Nodes:\n");
		scanf("%d",&n);
			
		if(n>0){
		
			for(int i =0;i<n;i++){

				addNode();
			}

			printLL();
			
			int ret = sumOfData();

			printf("Sum Of Data:%d\n",ret);
		
		}else{
			printf("Invalid Node Count!\n");

		}
		
	}



	