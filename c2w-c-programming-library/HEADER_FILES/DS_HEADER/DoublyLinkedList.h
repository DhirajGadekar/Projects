
typedef struct NodeDLL
{
    struct NodeDLL *prev;
    int data;
    struct NodeDLL *next;

} NodeDLL;

int doublyLLVal;
int positionDLL;
char doublyLLStr1[50000];
char doublyLLStr2[50000];

NodeDLL *headDLL = NULL;

NodeDLL *createNodeDLL()
{

    NodeDLL *newNodeDLL = (NodeDLL *)malloc(sizeof(NodeDLL));

    newNodeDLL->prev = NULL;
    newNodeDLL->data = doublyLLVal;
    newNodeDLL->next = NULL;

    return newNodeDLL;
}

void addNodeDLL()
{

    NodeDLL *newNodeDLL = createNodeDLL();

    if (headDLL == NULL)
        headDLL = newNodeDLL;
    else
    {

        NodeDLL *temp = headDLL;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNodeDLL;
        newNodeDLL->prev = temp;
    }
}

void addFirstDLL()
{

    NodeDLL *newNodeDLL = createNodeDLL();

    if (headDLL == NULL)
        headDLL = newNodeDLL;
    else
    {

        newNodeDLL->next = headDLL;
        headDLL->prev = newNodeDLL;
        headDLL = newNodeDLL;
    }
}

int countNodeDLL()
{

    NodeDLL *temp = headDLL;
    int count = 0;

    while (temp != NULL)
    {

        count++;
        temp = temp->next;
    }

    return count;
}

void addLastDLL()
{

    NodeDLL *newNodeDLL = createNodeDLL();

    if (headDLL == NULL)
        headDLL = newNodeDLL;
    else
    {

        NodeDLL *temp = headDLL;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNodeDLL;
        newNodeDLL->prev = temp;
    }
}

int addAtPositionDLL(int pos)
{

    int count = countNodeDLL();

    if (pos <= 0 || pos > count + 1)
        return -1;
    else
    {

        if (pos == 1)
            addFirstDLL();
        else if (pos == count + 1)
            addNodeDLL();
        else
        {

            NodeDLL *newNodeDLL = createNodeDLL();
            NodeDLL *temp = headDLL;

            while (pos - 2)
            {

                temp = temp->next;
                pos--;
            }

            newNodeDLL->next = temp->next;
            newNodeDLL->prev = temp;
            newNodeDLL->next->prev = newNodeDLL;
            temp->next = newNodeDLL;
        }
    }
    return 0;
}

void deleteFirstDLL()
{

    if (headDLL == NULL)
        sprintf(doublyLLStr2, "LINKEDLIST IS EMPTY.\n");
    else
    {
        if (headDLL->next == NULL)
        {

            free(headDLL);
            headDLL = NULL;
        }
        else
        {

            headDLL = headDLL->next;
            free(headDLL->prev);
            headDLL->prev = NULL;
        }
    }
}

void deleteLastDLL()
{

    if (headDLL == NULL)
        sprintf(doublyLLStr2, "LINKEDLIST IS EMPTY.\n");
    else
    {

        if (headDLL->next == NULL)
            deleteFirstDLL();
        else
        {

            NodeDLL *temp = headDLL;

            while (temp->next->next != NULL)
                temp = temp->next;

            free(temp->next);
            temp->next = NULL;
        }
    }
}

void deleteDLL()
{
    while (headDLL != NULL)
    {
        free(headDLL->prev);
        headDLL = headDLL->next;
    }
}

int updateNodeDLL(int pos)
{

    int count = countNodeDLL();

    if (pos <= 0 || pos > count)
        return -1;
    else
    {
        NodeDLL *temp = headDLL;

        while (pos - 1)
        {
            temp = temp->next;
            pos--;
        }

        temp->data = doublyLLVal;
    }
    return 0;
}

int deleteAtPositionDLL(int pos)
{

    int count = countNodeDLL();

    if (pos <= 0 || pos > count)
        return -1;
    else
    {

        if (pos == 1)
            deleteFirstDLL();
        else if (pos == count)
            deleteLastDLL();
        else
        {
            NodeDLL *temp = headDLL;

            while (pos - 2)
            {

                temp = temp->next;
                pos--;
            }

            NodeDLL *ptr = temp->next;
            temp->next = temp->next->next;
            temp->next->prev = temp;
            free(ptr);
        }
    }
    return 0;
}

char *printLinkedListDLL()
{

    if (headDLL == NULL)
        sprintf(doublyLLStr2, "LINKEDLIST IS EMPTY\n");
    else
    {

        NodeDLL *temp = headDLL;
        doublyLLStr2[0] = '\0';
        // printf("in print\n");
        while (temp != NULL)
        {

            if (temp->next != NULL)
                sprintf(doublyLLStr1, "| %d |->", temp->data);
            else
                sprintf(doublyLLStr1, "| %d |", temp->data);

            concat(doublyLLStr2, doublyLLStr1);
            temp = temp->next;
        }
    }
    return doublyLLStr2;
}

// No error================

//----------First Occurence of num-------
int foccurDLL(int num)
{

    if (headDLL == NULL)
        return -1;
    else
    {
        int count = 0;
        NodeDLL *temp = headDLL;

        while (temp != NULL)
        {
            count++;
            if (temp->data == num)
                return count;

            temp = temp->next;
        }

    }
    return 0;
}

//-------------second last position------------------------
//(We can calculate any position from ending of ll if position is given .
// at time of printing use arr[count-pos] ----

int seclastDLL(int num)
{
    int NodeDLLcount = countNodeDLL();
    if (headDLL == NULL)
    {
        sprintf(doublyLLStr2, "LINKEDLIST IS EMPTY\n");
        return -1;
    }
    else
    {
        int arr[NodeDLLcount];
        int count = 0;
        int i = 0, pos = 0;
        struct NodeDLL *temp = headDLL;
        if (headDLL != NULL)
        {
            while (temp != NULL)
            {
                pos++;
                if (temp->data == num)
                {
                    count++;
                    arr[i] = pos;
                    i++;
                }
                temp = temp->next;
            }
        }
        if (count == 1)
            return -2;
        else if (count == 0)
            return 0;
        else
            return arr[count - 2];
    }
}

//----------------------Total Occurence of number-----------------------
int occurenceCountDLL(int num)
{

    if (headDLL == NULL)
        return -1;
    else
    {
        struct NodeDLL *temp = headDLL;
        int count = 0;

        while (temp != NULL)
        {
            if (temp->data == num)
                count++;

            temp = temp->next;
        }
        return count;
    }
}

// nth occurence
int nthOccurrenceDLL(int num, int occ)
{

    int index = 0;
    int flag = 0;
    int count = 0;

    if (headDLL == NULL)
        return -1;
    else
    {
        struct NodeDLL *temp = headDLL;

        while (temp != NULL)
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
    }

    if (flag == 0)
        return 0;
    else
        return -2;
}
//---Palindorme no position----------------------------
char *printPalindromeDLL()
{
    if (headDLL == NULL)
    {
        sprintf(doublyLLStr2, "LINKEDLIST IS EMPTY\n");
        return doublyLLStr2;
    }
    else
    {

        NodeDLL *temp = headDLL;
        int count = 0;
        int flag = 0;
        doublyLLStr2[0] = '\0';

        while (temp != NULL)
        {
            count++;

            if (palindrome(temp->data))
            {
                sprintf(doublyLLStr1, "%d ", count);
                concat(doublyLLStr2, doublyLLStr1);

                flag = 1;
            }

            temp = temp->next;
        }
        if (flag == 0)
        {
            sprintf(doublyLLStr2, "PALINDROME NUMBER NOT FOUND.\n");
            return doublyLLStr2;
        }
    }
    return doublyLLStr2;
}

int sumOfDataDigitDLL()
{
    if (headDLL == NULL)
    {
        sprintf(doublyLLStr2, "LINKEDLIST IS EMPTY\n");
        return -1;
    }
    else
    {
        struct NodeDLL *temp = headDLL;

        while (temp != NULL)
        {
            temp->data = sumOfDigits(temp->data);
            temp = temp->next;
        }
    }
    return 0;
}

//-----------Sum of Data --------------//

char *sumOfDataDLL()
{
    if (headDLL == NULL)
    {
        sprintf(doublyLLStr2, "LINKEDLIST IS EMPTY\n");
        return doublyLLStr2;
    }
    else
    {

        int sum = 0;
        NodeDLL *temp = headDLL;

        while (temp != NULL)
        {

            sum = sum + temp->data;
            temp = temp->next;
        }
        sprintf(doublyLLStr2, "SUM OF DATA IN LINKEDLIST IS %d.", sum);
    }

    return doublyLLStr2;
}

// -------------max data in ll----------------
char *maxDLL()
{

    if (headDLL == NULL)
    {
        sprintf(doublyLLStr2, "LINKEDLIST IS EMPTY\n");
        return doublyLLStr2;
    }
    else
    {
        int maxDLL = headDLL->data;
        NodeDLL *temp = headDLL;

        while (temp != NULL)
        {
            if (maxDLL < temp->data)
                maxDLL = temp->data;

            temp = temp->next;
        }
        sprintf(doublyLLStr2, "MAXIMUM DATA IN LINKEDLIST IS %d.", maxDLL);
    }
    return doublyLLStr2;
}

//-----------min data in ll------------------------

char *minDLL()
{

    if (headDLL == NULL)
    {
        sprintf(doublyLLStr2, "LINKEDLIST IS EMPTY\n");
        return doublyLLStr2;
    }
    else
    {
        int minDLL = headDLL->data;
        NodeDLL *temp = headDLL;

        while (temp != NULL)
        {
            if (minDLL > temp->data)
                minDLL = temp->data;

            temp = temp->next;
        }
        sprintf(doublyLLStr2, "MAXIMUM DATA IN LINKEDLIST IS %d.", minDLL);
    }
    return doublyLLStr2;
}

//----------Inplace Reverse ll----------------------

int inplaceReverseDLL()
{

    if (headDLL == NULL)
        return -1;

    else
    {
        NodeDLL *temp = NULL;
        while (headDLL != NULL)
        {
            headDLL->prev = headDLL->next;
            headDLL->next = temp;

            if (headDLL->prev == NULL)
            {
                temp = headDLL;
                break;
            }
            headDLL = headDLL->prev;
            temp = headDLL->prev;
        }
        return 0;
    }
}

int isPalindromeDLL()
{
    NodeDLL *temp = headDLL;
    if (temp == NULL)
        return 1;

    // Find rightmost NodeDLL
    struct NodeDLL *right = temp;
    while (right->next != NULL)
        right = right->next;

    while (temp != right)
    {
        if (temp->data != right->data)
            return 0;

        temp = temp->next;
        right = right->prev;
    }

    return 1;
}