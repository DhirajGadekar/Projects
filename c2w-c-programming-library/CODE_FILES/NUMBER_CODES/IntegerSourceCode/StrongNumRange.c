


	#include<stdio.h>

	long factorial(int num){
	
		long fact = 1;

		for(int i = 1; i <= num; i++){
		
			fact = fact * i;
		}

		return fact;
	}

	void strongRange(int start, int end){
	    int flag = 0;
	    for(int i = start; i<= end; i++){

		    int temp = i;
		    long sum = 0;
	
		    while(temp != 0){
		
			    sum = sum + factorial(temp % 10);
			    temp = temp / 10;
		    }
	
		    if(sum == i){
	            flag = 1;
		    printf("%d is a Strong Number\n",i);
		    }
	    }
	    if(flag == 0){
	    	printf("No Strong number present between given range\n");
	    }
	    
	   	
	}
	void main(){
    		int start;
    		int end;
    		printf("Enter starting num:\n");
    		scanf("%d",&start);
    		printf("Enter ending num:\n");
    		scanf("%d",&end);
    		strongRange(start,end);

	}
	
	
	
