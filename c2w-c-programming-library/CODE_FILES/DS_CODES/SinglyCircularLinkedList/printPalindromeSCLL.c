
/* This Program that searches all palindrome data elements from singly circular linked list.And print position of palindrome data*/

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

	int checkPalindrome(int num){

		int rev=0, temp=num;

		while(temp != 0){

			rev = rev*10 + temp%10;
			temp/=10;
		}

		if(num==rev)

			return 1;
		else
			return 0;
	}


	void printPalindrome(){

		int index=0,flag=0;

		Node *temp = head;

		while(temp->next!= head){

				index++;

				if(checkPalindrome(temp->data)){

					printf("%d is Palindrome at index %d\n",temp->data,index);
					flag=1;
				}
		
				temp = temp->next;
		}

		if(checkPalindrome(temp->data)){
					
					index++;
					printf("%d is Palindrome at index %d\n",temp->data,index);
					flag=1;
		}


		if(flag==0)
				printf("No Palindrome Present!\n");

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
			
		printPalindrome();
		
		}else{
			printf("Invalid Node Count!\n");

		}
		
	}



