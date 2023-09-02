


	#include<stdio.h>
	int power(int num, int index)
	{
	
    	int pow = 1;

    	for (int i = 0; i < index; i++)
        	pow = pow * num;

    	return pow;
	}
	void isAutomorphic(int num){

    	int pow = power(num, 2);

    	int tempPow = pow;
    	int tempNum = num;
    	int rev = 0;
    	int mult = 1;

   	 while (tempNum != 0)
    	{
        	rev = (rev + (mult * (tempPow % 10)));
       		tempNum = tempNum / 10;
        	tempPow = tempPow / 10;
        	mult = mult * 10;
    	}

    	if (rev == num){
        	printf("%d is a Automorphic Number\n",num);
    	}
   	else{
        	printf("%d is not a Automorphic Number\n",num);
    	}
	}
	void main(){
    	int num;
   	printf("Enter a number:\n");
   	scanf("%d",&num);
    	isAutomorphic(num);

	}
	
	
	
