/*This Program checks if given number is present in LinkedList or not, and return index of first occurrence otherwise Zero ·
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

	int firstOccurence(int num){

		int index = 0,flag=0;
		
		Node *temp = head;

		while(temp->next != head){

			index++;

			if(temp->data == num){

				flag=1;
				break;
			}

			temp = temp->next;
		}

		if(temp->data == num){

			index++;
			flag=1;
		}

		if(flag==0){

			return 0;
		}else{
			
			return index;
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
			
			int num;
					
			printf("Enter number to be Searched:\n");
			scanf("%d",&num);

				int ret = firstOccurence(num);
				
				if(ret)
						printf("%d is Present in LinkedList at Index %d\n",num,ret);
				
				else
						printf("%d is Not Present in LinkedList !\n",num);
				
				
				

		}else{
			printf("Invalid Node Count!\n");

		}
		
	}


