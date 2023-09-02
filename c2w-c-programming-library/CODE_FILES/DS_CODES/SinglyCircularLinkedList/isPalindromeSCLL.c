


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

    int countNode()
    {

        int count = 0;

        if (head== NULL)
            return count;
        else
        {
            Node *temp = head;

            while (temp->next != head)
            {

                count++;
                temp = temp->next;
            }
        }

        return count + 1;
    }

    int isPalindrome()
    {

        struct Node *temp = head;
        if (head == NULL)
            return -1;
        else if (temp->next == head)
        {
            return 1;
        }
        struct Node *headSCLL1 = temp;
        struct Node *headSCLL2 = temp->next;
        int count = countNode();

        headSCLL1 = temp;
        temp->next = NULL;

        for (int i = 1; i < count / 2; i++)
        {
            struct Node *r = headSCLL2->next;
            headSCLL2->next = headSCLL1;
            headSCLL1 = headSCLL2;
            headSCLL2 = r;
        }

        if (count % 2 != 0)
        {
            headSCLL2 = headSCLL2->next;
        }

        while (headSCLL1 != NULL)
        {
            if (headSCLL1->data != headSCLL2->data)
            {
                return 0;
            }
            headSCLL1 = headSCLL1->next;
            headSCLL2 = headSCLL2->next;
        }
        return 1;
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
        
        int ret = isPalindrome();
        if(ret){	    
        printf("Palindrome\n");

        }else{
            printf("Not Palindrome\n");
        }
        
        }else{
            printf("Invalid Node Count!\n");

        }
        
    }



