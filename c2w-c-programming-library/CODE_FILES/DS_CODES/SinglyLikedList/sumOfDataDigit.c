


	//A Program adds the digits of a data element from singly linear linked list and changes the data.*/

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
		}
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

		while(temp != NULL){

			temp->data = sumOfDigit(temp->data);
			temp = temp->next;
		}

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
		
		    sumOfData();
	   
  	     }else{
		
			printf("Invalid Node Count!\n");

		}
	
	}


