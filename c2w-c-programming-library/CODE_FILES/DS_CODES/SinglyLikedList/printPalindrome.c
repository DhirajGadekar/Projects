


	//Program that searches all palindrome data elements from singly linear linked list.And print position of palindrome data

	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node{

		int data;
		struct Node *next;
	}Node;

	Node *head = NULL;

	//createNode

	Node* createNode(){

		Node *newNode = (Node*)malloc(sizeof(Node));

		printf("Enter Data:\n");
		scanf("%d",&(newNode->data));

		newNode->next = NULL;

		return newNode;
	}

	//addNode

	void addNode(){

       Node *newNode = createNode();

       if(head==NULL){

             head = newNode;

       }else{

            Node *temp = head;

	      	while(temp->next != NULL){

		      	temp = temp->next;

	       }

	        temp->next = newNode;
		}
	}

	//printLL

	int printLL(){

		if(head==NULL){

		 return -1;
	
		}else{
	
			Node *temp = head;

			while(temp->next != NULL){

				printf("|%d|->",temp->data);
				temp = temp->next;
			}

			printf("|%d|\n",temp->data);
			return 0;
	    }
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

    // 	Print Palinrome

	void printPalindrome(){

		int index=0,flag=0;

		Node *temp = head;

		while(temp != NULL){

			index++;

			if(checkPalindrome(temp->data)){

				printf("%d is Palindrome at index %d\n",temp->data,index);
				flag=1;
			}
	
			temp = temp->next;
		}

		if(flag==0)
			printf("No Palindrome Present!\n");
	}

	// Driver Code

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


