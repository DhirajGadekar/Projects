


	#include<stdio.h>

	int evenDigit(int num){

		int sum=0;
	
		while(num){
			int rem =num%10;

			if(rem%2==0){
		
				sum+=rem;
			}
			num/=10;
		}
		
		printf("even digit sum is = %d\n",sum);
	}

	void main(){

		int num;
		printf("Enter number: ");
		scanf("%d",&num);
		evenDigit(num);
	}
	
	
	
