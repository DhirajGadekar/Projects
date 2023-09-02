


	#include<stdio.h>

	int oddDigit(int num){

		int sum=0;
	
		while(num){
			int rem =num%10;

			if(rem%2!=0){
		
				sum+=rem;
			}
			num/=10;
		}
	
		printf("odd digit sum is = %d\n",sum);
	}

	void main(){

		int num;
		printf("Enter number: ");
		scanf("%d",&num);
		oddDigit(num);	
		
	}
	
	
	
