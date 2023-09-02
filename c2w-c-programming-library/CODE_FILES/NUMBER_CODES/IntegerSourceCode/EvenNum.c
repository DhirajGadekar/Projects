


	#include<stdio.h>

	int even(int num){

		if(num%2==0){
	
			printf("%d is a even number\n",num);
		}else{
	
			printf("%d is not a even number\n",num);
		}
	}

	void main(){

		int num;
		printf("Enter number to find Even number: ");
		scanf("%d",&num);
		even(num);
	}
	
	
	
