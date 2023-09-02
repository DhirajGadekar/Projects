


	#include<stdio.h>

	void perfect(int start, int end){
	    int flag = 0;
	
	for(int j = start; j<= end; j++){
	    int sum = 0;

	    for(int i = 1; i <= j / 2; i++){
		
		    if(j % i == 0)
		    	sum = sum + i;
	    }

	    if(sum == j){
            flag = 1;
	        printf("%d is a perfect Number\n",j);
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
	    perfect(start,end);
	
	}
	
	
	
