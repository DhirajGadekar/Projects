


	#include<stdio.h>

	void isNiven(int num)
	{

	    int temp = num;
	    int sum = 0;

	    while (temp != 0)
	    {

	        sum = sum + (temp % 10);
	        temp = temp / 10;
	    }
	    if ((num % sum) == 0)
	        printf("%d is a Niven Number\n",num);
	    else
	        printf("%d is not a Niven Number\n",num);
	}
	void main(){
	    int num;
	    printf("Enter a number:\n");
	    scanf("%d",&num);
	    isNiven(num);
	}
	
	
	
