
typedef struct NodeDCLL
{

    struct NodeDCLL *prev;
    int data;
    struct NodeDCLL *next;

} NodeDCLL;

int doublyCLLVal;
int positionDCLL;
char doublyCLLStr1[50000];
char doublyCLLStr2[50000];

struct NodeDCLL *headDCLL = NULL;

struct NodeDCLL *createNodeDCLL()
{

    struct NodeDCLL *newNodeDCLL = (struct NodeDCLL *)malloc(sizeof(struct NodeDCLL));

    newNodeDCLL->prev = NULL;
    newNodeDCLL->data = doublyCLLVal;
    newNodeDCLL->next = NULL;

    return newNodeDCLL;
}

void addNodeDCLL()
{

    struct NodeDCLL *newNodeDCLL = createNodeDCLL();

    if (headDCLL == NULL)
    {
        headDCLL = newNodeDCLL;
        headDCLL->next = headDCLL;
        headDCLL->prev = headDCLL;
    }
    else
    {

        headDCLL->prev->next = newNodeDCLL;
        newNodeDCLL->prev = headDCLL->prev;

        newNodeDCLL->next = headDCLL;
        headDCLL->prev = newNodeDCLL;
    }
}

void addFirstDCLL()
{

    struct NodeDCLL *newNodeDCLL = createNodeDCLL();

    if (headDCLL == NULL)
    {

        headDCLL = newNodeDCLL;
        headDCLL->next = headDCLL;
        headDCLL->prev = headDCLL;
    }
    else
    {

        newNodeDCLL->next = headDCLL;
        headDCLL->prev->next = newNodeDCLL;
        newNodeDCLL->prev = headDCLL->prev;
        headDCLL->prev = newNodeDCLL;
        headDCLL = newNodeDCLL;
    }
}

int CountNodeDCLL()
{
    int count = 0;
    if (headDCLL == NULL)
        return count;
    else
    {
        struct NodeDCLL *temp = headDCLL;

        while (temp->next != headDCLL)
        {
            count++;
            temp = temp->next;
        }
    }

    return count + 1;
}

void addLastDCLL()
{

    struct NodeDCLL *newNodeDCLL = createNodeDCLL();

    if (headDCLL == NULL)
    {
        headDCLL = newNodeDCLL;
        headDCLL->next = headDCLL;
        headDCLL->prev = headDCLL;
    }
    else
    {

        headDCLL->prev->next = newNodeDCLL;
        newNodeDCLL->prev = headDCLL->prev;

        newNodeDCLL->next = headDCLL;
        headDCLL->prev = newNodeDCLL;
    }
}

int addAtPositionDCLL(int pos)
{

    int count = CountNodeDCLL();

    if (pos <= 0 || pos > count + 1)
        return -1;
    else
    {
        if (pos == count + 1)
            addNodeDCLL();
        else if (pos == 1)
            addFirstDCLL();
        else
        {
            struct NodeDCLL *newNodeDCLL = createNodeDCLL();
            struct NodeDCLL *temp = headDCLL;

            while (pos - 2)
            {
                temp = temp->next;
                pos--;
            }

            newNodeDCLL->next = temp->next;
            newNodeDCLL->prev = temp;

            temp->next->prev = newNodeDCLL;
            temp->next = newNodeDCLL;
        }
        return 0;
    }
}

void deleteFirstDCLL()
{

    if (headDCLL == NULL)
        sprintf(doublyCLLStr2, "LINKEDLIST IS EMPTY\n");
    else
    {
        if (headDCLL->next == headDCLL)
        {

            free(headDCLL);
            headDCLL = NULL;
        }

        else
        {
            headDCLL = headDCLL->next;
            headDCLL->prev = headDCLL->prev->prev;

            free(headDCLL->prev->next);

            headDCLL->prev->next = headDCLL;
        }
    }
}

void deleteLastDCLL()
{

    if (headDCLL == NULL)
        sprintf(doublyCLLStr2, "LINKEDLIST IS EMPTY\n");
    else
    {
        if (headDCLL->next == headDCLL)
        {

            free(headDCLL);
            headDCLL = NULL;
        }
        else
        {
            headDCLL->prev = headDCLL->prev->prev;
            free(headDCLL->prev->next);
            headDCLL->prev->next = headDCLL;
        }
    }
}

// Write code to delete entire LinkedList.

//---------------------------------

int updateNodeDCLL(int pos)
{

    int count = CountNodeDCLL();

    if (pos <= 0 || pos > count)
        return -1;
    else
    {
        struct NodeDCLL *temp = headDCLL;

        while (pos - 1)
        {
            temp = temp->next;
            pos--;
        }

        temp->data = doublyCLLVal;
    }
    return 0;
}

int deleteAtPositionDCLL(int pos)
{

    int count = CountNodeDCLL();

    if (pos <= 0 || pos > count)
        return -1;
    else
    {
        if (pos == 1)
            deleteFirstDCLL();
        else if (pos == count)
            deleteLastDCLL();
        else
        {

            struct NodeDCLL *temp = headDCLL;

            while (pos - 2)
            {

                temp = temp->next;
                pos--;
            }

            temp->next = temp->next->next;
            free(temp->next->prev);
            temp->next->prev = temp;
        }
    }
}

char *printLinkedListDCLL()
{

    if (headDCLL == NULL)
        sprintf(doublyCLLStr2, "LINKEDLIST IS EMPTY\n");
    else
    {

        struct NodeDCLL *temp = headDCLL;
        doublyCLLStr2[0] = '\0';

        while (temp->next != headDCLL)
        {
            sprintf(doublyCLLStr1, "| %d |<->", temp->data);
            concat(doublyCLLStr2, doublyCLLStr1);

            temp = temp->next;
        }
        sprintf(doublyCLLStr1, "| %d |", temp->data);
        concat(doublyCLLStr2, doublyCLLStr1);
    }
    return doublyCLLStr2;
}

///////////////////////////////////////----EXTRA----/////////////////////////////////////

int firstOccurenceDCLL(int num)
{

    if (headDCLL == NULL)
        return -1;
    else
    {
        int count = 0;
        struct NodeDCLL *temp = headDCLL;

        while (temp->next != headDCLL)
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

int secondLastOccurenceDCLL(int num)
{

    int first = 0;
    int second = 0;
    int count = 0;

    if (headDCLL == NULL)
        return -1;
    else
    {
        struct NodeDCLL *temp = headDCLL;

        while (temp->next != headDCLL)
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

int totalOccurenceDCLL(int num)
{

    if (headDCLL == NULL)
        return -1;
    else
    {
        int count = 0;
        struct NodeDCLL *temp = headDCLL;

        while (temp->next != headDCLL)
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

int nthOccurrenceDCLL(int num, int occ)
{

    int index = 0;
    int flag = 0;
    int count = 0;

    if (headDCLL == NULL)
        return -1;
    else
    {
        struct NodeDCLL *temp = headDCLL;

        while (temp->next != headDCLL)
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

char *palindromeNumDCLL()
{

    if (headDCLL == NULL)
    {
        sprintf(doublyCLLStr2, "LINKEDLIST IS EMPTY\n");
        return doublyCLLStr2;
    }
    else
    {

        struct NodeDCLL *temp = headDCLL;
        int count = 0;
        int flag = 0;
        doublyCLLStr2[0] = '\0';

        while (temp->next != headDCLL)
        {
            count++;

            if (palindrome(temp->data))
            {
                sprintf(doublyCLLStr1, "%d ", count);
                concat(doublyCLLStr2, doublyCLLStr1);

                flag = 1;
            }
            temp = temp->next;
        }

        count++;

        if (palindrome(temp->data))
        {
            sprintf(doublyCLLStr1, "%d ", count);
            concat(doublyCLLStr2, doublyCLLStr1);

            flag = 1;
        }
        // temp = temp->next;

        if (flag == 0)
        {
            printf("Flag 00\n");
            sprintf(doublyCLLStr2, "Palindrome number not found.\n");
            return doublyCLLStr2;
        }
    }
    return doublyCLLStr2;
}

int sumOfDataDigitDCLL()
{
    if (headDCLL == NULL)
        return -1;
    else
    {
        struct NodeDCLL *temp = headDCLL;

        while (temp->next != headDCLL)
        {
            temp->data = sumOfDigits(temp->data);
            temp = temp->next;
        }
        temp->data = sumOfDigits(temp->data);
    }
    return 0;
}

char *sumOfDataDCLL()
{
    if (headDCLL == NULL)
    {
        sprintf(doublyCLLStr2, "LINKEDLIST IS EMPTY!\n");
        return doublyCLLStr2;
    }
    else
    {
        int sum = 0;
        struct NodeDCLL *temp = headDCLL;

        while (temp->next != headDCLL)
        {
            sum += temp->data;
            temp = temp->next;
        }
        sum += temp->data;
        // return sum;
        sprintf(doublyCLLStr2, "SUM OF DATA IN LINKEDLIST IS %d.", sum);
    }

    return doublyCLLStr2;
}

char *maxDCLL()
{
    if (headDCLL == NULL)
    {
        sprintf(doublyCLLStr2, "LINKEDLIST IS EMPTY\n");
        return doublyCLLStr2;
    }
    else
    {

        struct NodeDCLL *temp = headDCLL;
        int maxDCLL = headDCLL->data;

        while (temp->next != headDCLL)
        {
            if (maxDCLL < temp->data)
                maxDCLL = temp->data;

            temp = temp->next;
        }
        if (maxDCLL < temp->data)
            maxDCLL = temp->data;

        sprintf(doublyCLLStr2, "MAXIMUM VALUE IN LINKED LIST IS :%d\n", maxDCLL);
    }

    return doublyCLLStr2;
}

char *minDCLL()
{
    if (headDCLL == NULL)
    {
        sprintf(doublyCLLStr2, "LINKEDLIST IS EMPTY\n");
        // return -1;
        return doublyCLLStr2;
    }
    else
    {

        struct NodeDCLL *temp = headDCLL;
        int min = headDCLL->data;

        while (temp->next != headDCLL)
        {
            if (min > temp->data)
                min = temp->data;

            temp = temp->next;
        }
        if (min > temp->data)
            min = temp->data;

        sprintf(doublyCLLStr2, "MINIMUN VALUE IN LINKED LIST IS :%d\n", min);
    }
    return doublyCLLStr2;
}

// Inplace reverse.

// Palindrome LinkedList.