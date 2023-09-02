


	#include <stdio.h>
	
	int Anagrams_Num(int num1, int num2)
	{
	{
    	int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    	int temp1 = num1;
  	  int temp2 = num2;

    	while (temp1 != 0)
    	{

        arr[temp1 % 10]++;
        temp1 = temp1 / 10;
    	}

    	while (temp2 != 0)
    	{

        arr[temp2 % 10]--;
        temp2 = temp2 / 10;
    	}

    	for (int i = 0; i < 10; i++)
    	{

        if (arr[i] != 0)
        {
            return 0;
        }
	   }
	    return 1;
	}
	}

	void main(){
	
	int n1, n2;
	printf("Enter Number 1:\n");
        scanf("%d",&n1);
        
	printf("Enter Number 2:\n");
    	scanf("%d",&n2);
	
	if(Anagrams_Num(n1,n2) == 1)
		printf("Number are anagram\n");
	else
		printf("Number are not anagram\n");

	}



