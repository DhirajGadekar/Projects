


	#include<stdio.h>

	void factorial(int num){
	
		long fact = 1;

		for(int i = 1; i <= num; i++){
		
			fact = fact * i;
		}

		printf("Factorial of %d is %ld\n",num,fact);
	}
	void main(){
	    int num;
	    printf("Enter a number:\n");
	    scanf("%d",&num);
	    factorial(num);

	}
	
	
	
