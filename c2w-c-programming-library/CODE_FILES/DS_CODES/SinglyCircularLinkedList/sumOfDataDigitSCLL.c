/*A Program adds the digits of a data element from singly circular linked list and changes the data.*/


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

	//SumOfDataDigit

	int sumOfDigit(int num){

		int sum=0;

		while(num!=0){

			sum+=num%10;
			num/=10;
		}

		return sum;
	}


	void sumOfData(){

		Node *temp = head;

		while(temp->next!= head){

				temp->data = sumOfDigit(temp->data);
				temp = temp->next;

		}
		temp->data = sumOfDigit(temp->data);

		printLL();

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
			
			sumOfData();
		
		}else{
			printf("Invalid Node Count!\n");

		}
		
	}


