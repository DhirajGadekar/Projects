
// Singly Circular LinkedList

typedef struct NodeSCLL
{

    int data;
    struct NodeSCLL *next;
} NodeSCLL;

NodeSCLL *headSCLL = NULL;

int singlyCLLVal;
int positionSCLL;
char singlyCLLStr1[50000];
char singlyCLLStr2[50000];

NodeSCLL *createNodeSCLL()
{

    NodeSCLL *newNodeSCLL = (NodeSCLL *)malloc(sizeof(NodeSCLL));

    newNodeSCLL->data = singlyCLLVal;
    newNodeSCLL->next = NULL;

    return newNodeSCLL;
}

void addNodeSCLL()
{

    NodeSCLL *newNodeSCLL = createNodeSCLL();

    if (headSCLL == NULL)
    {

        headSCLL = newNodeSCLL;
        newNodeSCLL->next = headSCLL;
    }
    else
    {

        NodeSCLL *temp = headSCLL;

        while (temp->next != headSCLL)
            temp = temp->next;

        temp->next = newNodeSCLL;
        newNodeSCLL->next = headSCLL;
    }
}

void addFirstSCLL()
{

    NodeSCLL *newNodeSCLL = createNodeSCLL();

    if (headSCLL == NULL)
    {

        headSCLL = newNodeSCLL;
        newNodeSCLL->next = headSCLL;
    }
    else
    {

        NodeSCLL *temp = headSCLL;

        while (temp->next != headSCLL)
            temp = temp->next;

        newNodeSCLL->next = headSCLL;
        headSCLL = newNodeSCLL;
        temp->next = headSCLL;
    }
}

int countNodeSCLL()
{

    int count = 0;

    if (headSCLL == NULL)
        return count;
    else
    {
        NodeSCLL *temp = headSCLL;

        while (temp->next != headSCLL)
        {

            count++;
            temp = temp->next;
        }
    }

    return count + 1;
}

void addLastSCLL()
{

    NodeSCLL *newNodeSCLL = createNodeSCLL();

    if (headSCLL == NULL)
    {

        headSCLL = newNodeSCLL;
        newNodeSCLL->next = headSCLL;
    }
    else
    {

        NodeSCLL *temp = headSCLL;

        while (temp->next != headSCLL)
            temp = temp->next;

        temp->next = newNodeSCLL;
        newNodeSCLL->next = headSCLL;
    }
}

int addAtPositionSCLL(int pos)
{

    int count = countNodeSCLL();

    if (pos <= 0 || pos > count + 1)
        return -1;
    else
    {
        if (pos == 1)
            addFirstSCLL();
        else if (pos == count + 1)
            addNodeSCLL();
        else
        {

            NodeSCLL *newNodeSCLL = createNodeSCLL();
            NodeSCLL *temp = headSCLL;

            while (pos - 2)
            {

                temp = temp->next;
                pos--;
            }

            newNodeSCLL->next = temp->next;
            temp->next = newNodeSCLL;
        }
    }
    return 0;
}

void deleteFirstSCLL()
{

    if (headSCLL == NULL)
        sprintf(singlyCLLStr2, "LINKEDLIST IS EMPTY\n");
    else
    {
        if (headSCLL->next == headSCLL)
        {
            free(headSCLL);
            headSCLL = NULL;
        }
        else
        {

            NodeSCLL *temp = headSCLL;

            while (temp->next != headSCLL)
                temp = temp->next;

            NodeSCLL *temp1 = headSCLL;

            headSCLL = headSCLL->next;
            temp->next = headSCLL;

            free(temp1);
        }
    }
}

void deleteLastSCLL()
{

    if (headSCLL == NULL)
        sprintf(singlyCLLStr2, "LINKEDLIST IS EMPTY.\n");
    else
    {
        if (headSCLL->next == headSCLL)
            deleteFirstSCLL();
        else
        {

            NodeSCLL *temp = headSCLL;

            while (temp->next->next != headSCLL)
                temp = temp->next;

            free(temp->next);
            temp->next = headSCLL;
        }
    }
}

// Infinite loop.

// void deleteSCLL()
// {

//     struct NodeSCLL *temp = headSCLL;
//     struct NodeSCLL *temphead = headSCLL;

//     while (headSCLL->next != temphead)
//     {
//         headSCLL = headSCLL->next;
//         free(temp);
//         temp = headSCLL;
//     }
//     // free(headSCLL->next);
// }

int updateNodeSCLL(int pos)
{

    int count = countNodeSCLL();

    if (pos <= 0 || pos > count)
        return -1;
    else
    {
        struct NodeSCLL *temp = headSCLL;

        while (pos - 1)
        {
            temp = temp->next;
            pos--;
        }

        temp->data = singlyCLLVal;
    }
    return 0;
}

int deleteAtPositionSCLL(int pos)
{

    int count = countNodeSCLL();

    if (pos <= 0 || pos > count)
        return -1;
    else
    {
        if (pos == 1)
            deleteFirstSCLL();
        else if (pos == count)
            deleteLastSCLL();
        else
        {

            NodeSCLL *temp = headSCLL;

            while (pos - 2)
            {

                temp = temp->next;
                pos--;
            }

            NodeSCLL *temp2 = temp->next;

            temp->next = temp->next->next;
            free(temp2);
        }
    }
    return 0;
}

char *printLinkedListSCLL()
{

    if (headSCLL == NULL)
        sprintf(singlyCLLStr2, "LINKEDLIST IS EMPTY.\n");
    else
    {
        NodeSCLL *temp = headSCLL;
        singlyCLLStr2[0] = '\0';

        while (temp->next != headSCLL)
        {
            sprintf(singlyCLLStr1, "| %d |->", temp->data);
            concat(singlyCLLStr2, singlyCLLStr1);

            temp = temp->next;
        }
        sprintf(singlyCLLStr1, "| %d |", temp->data);
        concat(singlyCLLStr2, singlyCLLStr1);
    }
    return singlyCLLStr2;
}

///////////////////Extra///////////////////////

// First Occurence
int firstOccurenceSCLL(int num)
{

    if (headSCLL == NULL)
        return -1;
    else
    {
        int count = 0;
        struct NodeSCLL *temp = headSCLL;

        while (temp->next != headSCLL)
        {
            count++;

            if (temp->data == num)
                return count;
            temp = temp->next;
        }
        count++;

        if (temp->data == num)
            return count;
    }
    return 0;
}

// Second Last Occurence
int secondLastOccurenceSCLL(int num)
{

    int first = 0;
    int second = 0;
    int count = 0;

    if (headSCLL == NULL)
    {
        // sprintf(singlyLLStr2, "LINKEDLIST IS EMPTY.\n");
        return -1;
    }
    else
    {
        struct NodeSCLL *temp = headSCLL;

        while (temp->next != headSCLL)
        {
            count++;

            if (temp->data == num)
            {

                second = first;
                first = count;
            }
            temp = temp->next;
        }
        count++;

        if (temp->data == num)
        {

            second = first;
            first = count;
        }
    }

    if (first == 0)
        return 0;
    else if (second == 0)
        return -2;
    else
        return second;
}

// Total Occurence Count
int occurenceCountSCLL(int num)
{

    if (headSCLL == NULL)
        return -1;
    else
    {
        int count = 0;
        struct NodeSCLL *temp = headSCLL;

        while (temp->next != headSCLL)
        {
            if (temp->data == num)
                count++;

            temp = temp->next;
        }
        if (temp->data == num)
            count++;

        return count;
    }
}

// nthOccurrence
int nthOccurrenceSCLL(int num, int occ)
{

    int index = 0;
    int flag = 0;
    int count = 0;

    if (headSCLL == NULL)
        return -1;
    else
    {
        struct NodeSCLL *temp = headSCLL;

        while (temp->next != headSCLL)
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

// Print index of Palindrome Number in LinkedList
char *printPalindromeSCLL()
{

    if (headSCLL == NULL)
    {
        sprintf(singlyCLLStr2, "LINKEDLIST IS EMPTY!\n");
        return singlyCLLStr2;
    }
    else
    {

        int count = 0;
        int flag = 0;
        struct NodeSCLL *temp = headSCLL;
        singlyCLLStr2[0] = '\0';

        while (temp->next != headSCLL)
        {
            count++;

            if (palindrome(temp->data))
            {
                sprintf(singlyCLLStr1, "%d ", count);
                concat(singlyCLLStr2, singlyCLLStr1);

                flag = 1;
            }

            temp = temp->next;
        }
        count++;

        if (palindrome(temp->data))
        {
            sprintf(singlyCLLStr1, "%d ", count);
            concat(singlyCLLStr2, singlyCLLStr1);

            flag = 1;
        }

        temp = temp->next;

        if (flag == 0)
        {
            sprintf(singlyCLLStr2, "PALINDROME NUMBER NOT FOUND.\n");
            return singlyCLLStr2;
        }
    }
    return singlyCLLStr2;
}

int sumOfDataDigitSCLL()
{

    if (headSCLL == NULL)
        return -1;
    else
    {

        struct NodeSCLL *temp = headSCLL;

        while (temp->next != headSCLL)
        {

            temp->data = sumOfDigits(temp->data);
            temp = temp->next;
        }
        temp->data = sumOfDigits(temp->data);
    }
    return 0;
}

char *sumOfDataSCLL()
{
    if (headSCLL == NULL)
    {
        sprintf(singlyCLLStr2, "LINKEDLIST IS EMPTY!\n");
        return singlyCLLStr2;
    }
    else
    {

        int sum = 0;
        struct NodeSCLL *temp = headSCLL;

        while (temp->next != headSCLL)
        {

            sum = sum + temp->data;
            temp = temp->next;
        }
        sum = sum + temp->data;
        sprintf(singlyCLLStr2, "SUM OF DATA IN LINKEDLIST IS %d.", sum);
    }

    return singlyCLLStr2;
}

// maxLL data in Sll
char *maxSCLL()
{
    if (headSCLL == NULL)
    {
        sprintf(singlyCLLStr2, "LINKEDLIST IS EMPTY!\n");
        return singlyCLLStr2;
    }
    else
    {
        int maxSCLL = headSCLL->data;
        struct NodeSCLL *temp = headSCLL;

        while (temp->next != headSCLL)
        {
            if (maxSCLL < temp->data)
                maxSCLL = temp->data;

            temp = temp->next;
        }
        if (maxSCLL < temp->data)
            maxSCLL = temp->data;

        sprintf(singlyCLLStr2, "MAXIMUM DATA IN LINKEDLIST IS %d.", maxSCLL);
    }
    return singlyCLLStr2;
}

// minLL data in Sll
char *minSCLL()
{

    if (headSCLL == NULL)
    {
        sprintf(singlyCLLStr2, "LINKEDLIST IS EMPTY!\n");
        return singlyCLLStr2;
    }

    else
    {
        int minSCLL = headSCLL->data;
        struct NodeSCLL *temp = headSCLL;

        while (temp->next != headSCLL)
        {

            if (minSCLL > temp->data)
                minSCLL = temp->data;

            temp = temp->next;
        }
        if (minSCLL > temp->data)
            minSCLL = temp->data;

        sprintf(singlyCLLStr2, "MINIIMUM DATA IN LINKEDLIST IS %d.", minSCLL);
    }
    return singlyCLLStr2;
}

// Inplace Reverse
int inplaceReverseSCLL()
{

    if (headSCLL == NULL)
        return -1;
    else
    {
        struct NodeSCLL *temp1 = headSCLL;
        struct NodeSCLL *temp2 = NULL;
        struct NodeSCLL *temp3 = NULL;

        while (temp3 != headSCLL)
        {

            temp3 = temp1->next;
            temp1->next = temp2;
            temp2 = temp1;
            temp1 = temp3;
        }
        headSCLL->next = temp2;
        headSCLL = temp2;
    }
    return 0;
}

// LinkedList Palindrome
// Problem with this functions after we check palindrome and then call printLL.

int isPalindromeSCLL()
{

    struct NodeSCLL *temp = headSCLL;
    if (headSCLL == NULL)
        return -1;
    else if (temp->next == headSCLL)
    {
        return 1;
    }
    struct NodeSCLL *headSCLL1 = temp;
    struct NodeSCLL *headSCLL2 = temp->next;
    int count = countNodeSCLL();

    // while (headSCLL1->next != NULL)
    // {
    //     headSCLL1 = headSCLL1->next;
    //     count++;
    // }
    headSCLL1 = temp;
    temp->next = NULL;

    for (int i = 1; i < count / 2; i++)
    {
        struct NodeSCLL *r = headSCLL2->next;
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