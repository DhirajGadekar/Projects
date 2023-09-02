


	#include<stdio.h>

	void nivenRange(int start,int end){

	    int flag = 0;
	    for(int i = start; i<=end ; i++){
	        int temp = i;
	        int sum = 0;

	        while (temp != 0)
	        {

	            sum = sum + (temp % 10);
	            temp = temp / 10;
	        }
	        if ((i % sum) == 0){
		    flag = 1;
	            printf("%d is a Niven Number\n",i);
        	}
        
    	}
	    if(flag == 0){
		printf("No Niven number present between given range\n");
	    }
	}
	
	void main(){
	    int start;
	    int end;
	    printf("Enter starting num:\n");
	    scanf("%d",&start);
	    printf("Enter ending num:\n");
	    scanf("%d",&end);
	    nivenRange(start,end);
	
	}
	
	
	
