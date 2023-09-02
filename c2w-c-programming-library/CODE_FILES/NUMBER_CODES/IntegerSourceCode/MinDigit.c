


	#include<stdio.h>

	void main(){

		int num;
		printf("Enter the number1:\n");
		scanf("%d",&num);
	
		if(num<0){

			printf("Invalid Input\n");

		}
		else{
		int minDigit = num%10;
		while(num > 0){
	
			int rem = num % 10;
			if(rem < minDigit){
				minDigit = rem;
			}
			num = num/10;
		}

		printf("Minimun digit is : %d\n",minDigit);

		}
	}
	
	
	

