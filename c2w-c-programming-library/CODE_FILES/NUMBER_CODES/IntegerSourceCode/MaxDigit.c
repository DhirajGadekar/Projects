


	#include<stdio.h>

	int maxdigit(int num){
	
		int max=0;
		while(num){
	
			if(max<num%10){
		
				max=num%10;
			}
			num/=10;
		}
		printf("max digit is = %d\n",max);
	}
	void main(){
	
		int num;
		printf("Enter num to find max digit: ");
		scanf("%d",&num);
	
		maxdigit(num);
	
	}
	
	
	
