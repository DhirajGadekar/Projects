
	
	
	#include<stdio.h>

	void deficient(int num){
	
		int sum = 0;

		for(int i = 1; i <= num/2; i++){
		
			if(num % i == 0){

				sum = sum + i;
			}
		}

		if(sum < num){

			printf("%d is a Deficient Number\n", num);
		}else{
		
			printf("%d is Not a Deficient Number\n",num);
		}
	}
	void main(){
    	int num;
  	printf("Enter a number:\n");
    	scanf("%d",&num);
   	 deficient(num);

	}
	
	
	
