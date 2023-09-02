/*This function checks if given number is present in LinkedList or not, and return index of second last occurance or idex of first occurance if number is present only once otherwise Zero 

*/
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


	void  secondLastOccurence(int num){

		int index = 0,occ1=0,occ2=0;

		Node *temp = head;

		while(temp->next != head){

			index++;

			if(temp->data == num){

				occ2 = occ1;
				occ1 = index;
			}

				temp = temp->next;
		}
				if(temp->data == num){

				occ2 = occ1;
				occ1 = index;
		}

		if(occ1==0){

			printf("%d is Not Present in LinkedList!\n",num);
			
		}else{

			if(occ2){

				printf("%d is Present and it's Second Last Occurence is at Index %d\n",num,occ2);
				
			}else{
				printf("%d is Present Only once at Index %d\n",num,occ1);
					
			}
		}
	}


	void main(){

		int n;
		
		printf("Enter No of Nodes:\n");
		scanf("%d",&n);
			
		if(n>=2){
		
			for(int i =0;i<n;i++){

				addNode();
			}

			printLL();
			
			int num;
					
			printf("Enter number to be Searched:\n");
			scanf("%d",&num);

			secondLastOccurence(num);
				
		}else{
			printf("Invalid Node Count!\n");

		}
		
	}



