


	//A Program that reverse singly linkedlist in inplace .

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

	//Inplace Reverse

	void inplaceReverse(){

		struct Node *temp1 =head;
		struct Node *temp2 =NULL;
		struct Node *temp3 =NULL;

		while(temp1!=NULL){

			temp2 = temp1->next;
			temp1->next =temp3;
			temp3=temp1;
			temp1=temp2;
		}
	
		head= temp3;
		
		printLL();
	}

    //Driver Code

	void main(){

       int n;
       
       printf("Enter No of Nodes:\n");
       scanf("%d",&n);
        
       if(n>0){
	
	    for(int i =0;i<n;i++){

			addNode();
		}

	    printLL();
        inplaceReverse();
           
       }else{
		
			printf("Invalid Node Count!\n");

		}
	
	}


