


	#include<stdio.h>
	
	void sumOfFactors(int num)
	{
	    int sum = 0;

	    for (int i = 1; i <= num / 2; i++)
	    {
	
	        if (num % i == 0)
	            sum = sum + i;
	    }

	    printf("sum of factors of %d is %d\n",num,sum);
	}
	void main(){
	    int num;
	    printf("Enter a number:\n");
	    scanf("%d",&num);
	    sumOfFactors(num);

	}
	
	
	
