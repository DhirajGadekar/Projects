


	#include<stdio.h>

	void isPrime(int num){

	    if (num < 2){
	        printf("%d is not a Prime number\n",num);
			
		}

	    for (int i = 2; i <= num / 2; i++)
	    {
	        if (num % i == 0){
	            printf("%d is not a Prime number\n",num);
	            
		}

    	}

    	printf("%d is a Prime number\n",num);
	}
	void main(){
	    int num;
	    printf("Enter a number:\n");
	    scanf("%d",&num);
	    isPrime(num);

	}
	
	
	
