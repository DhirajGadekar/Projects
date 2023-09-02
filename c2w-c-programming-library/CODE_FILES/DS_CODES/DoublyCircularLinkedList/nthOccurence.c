


        #include<stdio.h>
        #include<stdlib.h>

        struct Node{

                struct Node *prev;
                int data;
                struct Node *next;
        };

        struct Node *head=NULL;

        struct Node* createNode(){

                struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

                newNode->prev = NULL;

                printf("Enter Data : ");
                scanf("%d",&newNode->data);

                newNode->next = NULL;

                return newNode;
        }
        void addNode(){

                struct Node *newNode = createNode();

                if(head == NULL){
                        head=newNode;
                        head->next=head;
                        head->prev=head;
                }else{

                        head->prev->next=newNode;
                        newNode->prev=head->prev;

                        newNode->next=head;
                        head->prev=newNode;

                }
        }


        int nthOccurrence(int num, int occ)
        {

        int index = 0;
        int flag = 0;
        int count = 0;

        if (head == NULL)
                return -1;
        else
        {
                struct Node *temp = head;

                while (temp->next != head)
                {
                index++;

                if (temp->data == num)
                {

                        count++;
                        flag = 1;

                        if (count == occ)
                        return index;
                }

                temp = temp->next;
                }
                index++;

                if (temp->data == num)
                {

                count++;
                flag = 1;

                if (count == occ)
                        return index;
                }
        }

        if (flag == 0)
                return 0;
        else
                return -2;
        }


        void PrintNode(){

                if(head == NULL){
                        printf("LINKEDLIST IS EMPTY\n");
                }else{

                        struct Node *temp=head;

                        while(temp ->next!= head){

                                if(temp -> next != head){
                                        printf("| %d |<->",temp -> data);

                                        }
                                temp = temp -> next;

                        }
                        printf("| %d |",temp -> data);
                }
        }

        void main(){
                int x,y ;
                printf("Enter number of nodes\n");
                scanf("%d",&x);
                for(int i = 1;i<=x;i++){
                        addNode();
                }

                PrintNode();
                printf("Enter a  number and occurence:\n");
                scanf("%d %d",&x,&y);

                printf("%d",nthOccurrence(x,y));     
        }



