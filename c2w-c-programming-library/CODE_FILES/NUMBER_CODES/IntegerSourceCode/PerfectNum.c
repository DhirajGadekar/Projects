


	#include<stdio.h>

	void perfect(int num){
	
	int sum = 0;

	for(int i = 1; i <= num / 2; i++){
		
		if(num % i == 0)
			sum = sum + i;
	}

	if(sum == num){
		
	    printf("%d is a perfect Number\n",num);
	}else{
		
		printf("%d is not a perfect Number\n",num);
	}
	}
	void main(){
	    int num;
	    printf("Enter a number:\n");
	    scanf("%d",&num);
	    perfect(num);

	}
	
	
	
