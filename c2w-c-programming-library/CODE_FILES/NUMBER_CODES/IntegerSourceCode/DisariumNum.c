


	#include<stdio.h>
	int power(int num, int index)
	{

	    int pow = 1;

	    for (int i = 0; i < index; i++)
	        pow = pow * num;

	    return pow;
	}
	int intReverse(int num){

		int temp = num;
    	int rev = 0;

   	 while(temp != 0){

        	rev = ((rev * 10) + (temp % 10));
        	        temp = temp / 10;
    	}

		return rev;
	}

	void isDisarium(int num)
	{
	    int rev = intReverse(num);
	    int temp = rev;
	    int num1 = 0;
	    int count = 1;

	    while (temp != 0)
	    {

	        int pow = power((temp % 10), count);

	        num1 = num1 + pow;
	        count++;
	       temp = temp / 10;
	    }

	    if (num == num1)
	        printf("%d is a Disarium Number\n",num);

	    else{
	        printf("%d is not a Disarium Number\n",num);
	    }

	}
	void main(){
   	int num;
    	printf("Enter a number:\n");
    	scanf("%d",&num);
   	isDisarium(num);

	}
	
	
	
