


	#include<stdio.h>

	int isPrime(int num){
   		 if (num < 2)
        return 0;

    	for (int i = 2; i <= num / 2; i++)
    	{
        	if (num % i == 0)
        	    return 0;
    	}

   	 return 1;
	}

	void isComposite(int num)
	{

    	if(isPrime(num) == 1){
        	printf("%d is a not Composite Number\n",num);
    	}
   	 else{
        	printf("%d is a Composite Number\n",num);
    	}
	}
	void main(){
   	int num;
    	printf("Enter a number:\n");
   	scanf("%d",&num);
   	isComposite(num);

	}
	
	
	
