
/* This program checks if given number is present in LinkedList or not,and return index of Nth occurrence given by user*/

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

    int nthOccurence(int num,int occ){

        int index = 0,flag=0,count=0;
        
        Node *temp = head;

        while(temp->next!= head){

            index++;

            if(temp->data == num){

                count++;
                flag=1;

                if(count==occ){

                    return index;

                }

            }

            temp = temp->next;
        }

        if(temp->data == num){

                count++;
                flag=1;

                if(count==occ){
            
                    return index+1;

                }

        }


        if(flag==0){

                return 0;
        }else{

                return -2;
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
            
            int num,occ;
                    
            printf("Enter number to be Searched:\n");
            scanf("%d",&num);

            printf("Enter Occurrence:\n");
            scanf("%d",&occ);


            if(occ>0){

                int ret = nthOccurence(num,occ);
                
                if(ret){

                    if(ret<0)

                        printf("%d is present but not at given occurrence %d\n",num,occ);
                
                    else
                        printf("Index of %d Occurrence of %d is %d\n",occ,num,ret);
                
                }else{
                        printf("%d is Not Present in LinkedList !\n",num);
                }
                
            }else{

                printf("Invalid Occurrence!\n");
            }

        }else{
            printf("Invalid Node Count!\n");

        }
        
    }



