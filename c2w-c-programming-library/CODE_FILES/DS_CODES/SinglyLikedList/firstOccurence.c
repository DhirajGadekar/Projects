


	//This Program checks if given number is present in LinkedList or not, and return index of first occurrence.

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

    //FirstOccurrence

	int firstOccurence(int num){

		int index = 0,flag=0;
	
		Node *temp = head;

		while(temp!=NULL){

			index++;

			if(temp->data == num){

				flag=1;
				break;
			}

			temp = temp->next;
		}

		if(flag==0){

			return 0;
		}else{
		
		return index;
		}
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

            int ret = firstOccurence(num);
               
            if(ret)
                    printf("%d is Present in LinkedList at Index %d\n",num,ret);
               
            else
                    printf("%d is Not Present in LinkedList !\n",num);
               
        }else{
		
			printf("Invalid Node Count!\n");

		}
	}


