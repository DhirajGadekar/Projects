


	//This function gives total occurrence count of given number in LinkedList.

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

	//Occurrence Count

	int occurenceCount(int num){

		int count = 0;

		Node *temp = head;

		while(temp != NULL){

			if(temp->data == num){

				count++;
			}
	        
			temp = temp->next;
		}

		return count;
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
		
		    int num;
				  
	    	printf("Enter number to be Searched:\n");
	    	scanf("%d",&num);

            int ret = occurenceCount(num);
 
            printf("Occurrence Count of %d : %d\n",num,ret);           
       
	   }else{
			
			printf("Invalid Node Count!\n");
		}
	
	}


