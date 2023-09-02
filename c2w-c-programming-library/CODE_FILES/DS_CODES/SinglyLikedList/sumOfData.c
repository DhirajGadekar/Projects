


	//A Program adds of a data element from singly linear linked list.

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

	// sumOfData

	int sumOfData(){

		Node *temp = head;
		int sum=0;

		while(temp != NULL){

			sum+=temp->data;
			temp = temp->next;
		}

		return sum;

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
		
	    	int ret = sumOfData();

			printf("Sum Of Data:%d\n",ret);
	   
       }else{
	
		printf("Invalid Node Count!\n");

	   }
	
	}


