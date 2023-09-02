


	//This Program gives maximum data element from Linked List.

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

	//Maximum data 

	int  max(){
		
		int max = head->data;

		Node *temp=head;
	
		while(temp!= NULL){
            
			if( max < temp->data)
		    
				max = temp->data;
	    
	    	temp = temp->next;

		}
        
		return max;
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
		
	

            int ret = max();
               
            printf("%d is maximum in LinkedList \n",ret);
                  
               
      }else{
		printf("Invalid Node Count!\n");

	}
	
}


