


	
	#include<stdio.h>

	int main(){

	int num1;
	printf("Enter the first number :\n");
	scanf("%d",&num1);
	if(num1<0){

		printf("Invalid input\n");
		return 0;
	}

	int num2;
	printf("Enter the second number :\n");
	scanf("%d",&num2);

	if(num2<0){

		printf("invalid input\n");
		return 0;
	}

	int hcf=1;

	for(int i=1; i<=num1 || i<=num2; i++){

		if(num1%i==0 && num2%i==0){

			hcf=i;

		}
	}
	printf("The HCF :%d\n",hcf);

	}
	
	
	
