
    /*A Program reverses the singly circular linked list .*/


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

    int inplaceReverseSCLL()
    {

        if (head == NULL)
        {
            
            return -1;
        }
        else
        {
            struct Node *temp1 = head;
            struct Node *temp2 = NULL;
            struct Node *temp3 = NULL;

            while (temp3 != head)
            {

                temp3 = temp1->next;
                temp1->next = temp2;
                temp2 = temp1;
                temp1 = temp3;
            }
            head->next = temp2;
            head = temp2;
        }
        return 0;
    }

    void main(){

        int n;
        
        printf("Enter No of Nodes:\n");
        scanf("%d",&n);
            
        if(n>0){
        
                for(int i =0;i<n;i++){

                    addNode();
                }
                inplaceReverseSCLL();
                printLL();
        }else{
            printf("Invalid Node Count!\n");

        }
        
    }