


	#include<stdio.h>
	void isArmstrong(int start , int end){
	    int flag = 0;

    	for(int j = start ; j<= end ; j++){
	
		int temp = j;
		int temp1 = j;
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
		if(j == sum){
                        flag = 1;
			printf("%d is a Armstrong Number\n",j);
			
		}

	    }
 	   if(flag == 0)
        	printf("No Armstrong number present between given range\n");
	}
	void main(){
    	int start;
    	int end;
   	printf("Enter starting num:\n");
  	scanf("%d",&start);
        printf("Enter ending num:\n");
        scanf("%d",&end);
        isArmstrong(start,end);

	}
	
	
	
