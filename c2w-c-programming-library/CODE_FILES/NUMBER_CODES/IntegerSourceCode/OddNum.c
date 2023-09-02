


	#include<stdio.h>
	
	void main(){

	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);

	if(num<0){

		printf("invalid input\n");

	}
	else{

		if(num %2 !=0){

			printf("%d is a odd number\n", num);

		}
		else{
			printf("%d is not a odd number\n", num);

		}

	}

	}
	
	
	

