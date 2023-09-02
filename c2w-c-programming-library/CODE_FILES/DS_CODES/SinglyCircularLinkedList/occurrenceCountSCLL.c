/*This function gives total occurrence count of given number in LinkedList.*/


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

	int occurenceCount(int num){

		int count = 0;

		Node *temp = head;

		while(temp->next != head){

			if(temp->data == num){

				count++;
			}
				
			temp = temp->next;
		}

			if(temp->data == num){

				count++;
			}



		return count;
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
			
			int num;
					
			printf("Enter number to be Searched:\n");
			scanf("%d",&num);

			int ret = occurenceCount(num);
	
				printf("Occurrence Count of %d : %d\n",num,ret);           
		}else{
			printf("Invalid Node Count!\n");

		}
		
	}


