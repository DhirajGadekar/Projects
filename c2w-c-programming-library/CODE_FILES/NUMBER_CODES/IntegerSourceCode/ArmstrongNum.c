


	#include<stdio.h>
	void isArmstrong(int num){
	
		int temp = num;
		int temp1 = num;
		int count = 0;
		int power = 1;
		int sum = 0;

		while(temp1 != 0){
		
			temp1 = temp1 / 10;
			count++;
		}

		while(temp != 0){
		
			for(int i = 0; i < count; i++){
			
				power = power * (temp % 10);
			}

			sum = sum + power;
			temp = temp / 10;
			power = 1;
		}

		if(num == sum){
		
			printf("%d is a Armstrong Number\n",num);
		}else{
		
			printf("%d is not a Armstrong Number\n",num);
		}
	}
	void main(){
    	int num;
    	printf("Enter a number:\n");
    	scanf("%d",&num);
    	isArmstrong(num);

	}
	
	
	

