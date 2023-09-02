


	#include<stdio.h>

	void digitCount(int num){
    	int count=0;
    	int temp = num;
   
   	while(temp != 0){

        	count++;
        	temp= temp/10;
    	}
    	printf("Digit count of %d is %d\n",num,count);
	}
	void main(){
    		int num;
    		printf("Enter a number:\n");
    		scanf("%d",&num);
  		digitCount(num);

	}
	
	
	
