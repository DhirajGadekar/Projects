


	#include<stdio.h> 

	int prodOfDigits(int num){

		int rem,prod=1;

		while(num){
	
			rem=num%10;
			prod=prod*rem;
			num/=10;
		}
		printf("product is = %d\n",prod);
	}

	void main(){

		int num;
	    printf("Enter a number: ");
	    scanf("%d", &num);
	    prodOfDigits(num);
	}
	
	
	
