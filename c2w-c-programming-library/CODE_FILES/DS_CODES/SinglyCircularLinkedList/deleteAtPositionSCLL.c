/* This Program delete the node at given position in singly circular LinkedList*/


	#include<stdio.h>
	#include<stdlib.h>


	struct Node{

		int data;
		struct Node *next;

	};

	struct Node *head = NULL;

	//createNode

	struct Node *createNode(){

		struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

		printf("Enter Data:\n");
		scanf("%d",&(newNode->data));

		newNode->next = NULL;

		return newNode;
	}


	//count

	int count(){

		struct Node *temp = head;
		int count = 0;

		if(head==NULL){

			return count;
		}else{

		while(temp->next!=head){

			count++;
			temp = temp->next;
		}

			return count+1;
		}
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

	//deleteFirst

	void deleteFirst(){


		if(head==NULL){

			printf("LinkedList is EMPTY !\n");
		
		}else{
		
					struct Node *temp = head;

					if(temp->next == head){

						free(temp);
						head = NULL;
					}else{

						while(temp->next!=head){

							temp = temp->next;
						}   

						head = head->next;
						free(temp->next);
						temp->next = head;
					}
				}
	}


	//deleteLast

	void deleteLast(){


		if(head==NULL){
			
			printf("LinkedList is EMPTY !\n");
		
		}else{ 
			
			struct Node *temp = head;
				
				if(head->next==head){

				free(temp);
				head=NULL;
			
			}else{

				while(temp->next->next !=head){

					temp = temp->next;
				}

				free(temp->next);
				temp->next = head;

			}
		}
	}


	void deleteAtPos(int pos){


		int cnt = count();

		if(pos<=0 || pos>cnt){

			printf("Invalid Position!\n");
		
		}else{
			if(pos==1)

				deleteFirst();

			else if(pos==cnt)

				deleteLast();

			else{
				struct Node * temp1 = head;


				while(pos-2){

					temp1 = temp1->next;
					pos--;
				}

				struct Node *temp2 = temp1->next;
				temp1->next = temp2->next;
				free(temp2);
			}
		}
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
			
				int pos;
					
				printf("Enter Position to be Delete\n");
				scanf("%d",&pos);

				deleteAtPos(pos);

				printLL();
				

		}else{
			printf("Invalid Node Count!\n");

		}
		
	}


	