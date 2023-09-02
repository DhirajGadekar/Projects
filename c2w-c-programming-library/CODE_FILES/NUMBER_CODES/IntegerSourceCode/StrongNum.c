


	#include<stdio.h>

	long factorial(int num){
		
	long fact = 1;
	
	for(int i = 1; i <= num; i++){
		
		fact = fact * i;
	}

	return fact;
	}

	void isStrong(int num){

		int temp = num;
		long sum = 0;
	
		while(temp != 0){
		
			sum = sum + factorial(temp % 10);
			temp = temp / 10;
		}

		if(sum == num){
		
			printf("%d is a Strong Number\n",num);
		}else{
	
			printf("%d is not a Strong Number\n",num);
		}
	}
	void main(){
	    int num;
	    printf("Enter a number:\n");
	    scanf("%d",&num);
	    isStrong(num);
	}
	
	
	
		
