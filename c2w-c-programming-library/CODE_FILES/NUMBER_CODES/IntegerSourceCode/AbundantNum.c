


	#include<stdio.h>
	void abundant(int num){

	int sum = 0;
	
	for(int i = 1; i <= num/2; i++){
		
		if(num % i == 0)
			sum = sum + i;
	}
	
	if(sum > num)
		printf("%d is an abundant number.\n", num);
	else
		printf("%d is not an abundunt number.\n", num);
	}
	void main(){
   	int num;
  	printf("Enter a number:\n");
    	scanf("%d",&num);
    	abundant(num);

	}



