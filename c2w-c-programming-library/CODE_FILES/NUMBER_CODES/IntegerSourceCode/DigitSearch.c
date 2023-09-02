


	#include<stdio.h>

	int digitSearch(int num){

		int search;
		printf("Enter number to search: ");
		scanf("%d",&search);
		int flag=0;

	while(num){

		int rem=num%10;
		if(search==rem){
			
			flag=1;	
			break;
		
		}else{
		
			flag=0;
		}
		num/=10;
	}

	if(flag==1){
	
			printf("%d digit is present\n",search);

	}else{
			printf("%d digit is not present\n",search);
	
	}
	}
	void main(){

		int num;
		printf("Enter number : ");
		scanf("%d",&num);
		digitSearch(num);
	}
	
	
	
