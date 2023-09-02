


	#include<stdio.h>
	void abundant(int start, int end){
	int flag = 0;

   	 for(int i = start; i <= end; i++){

	 	   int sum = 0;
	
    		for(int j = 1; j <= i/2; j++){
		
		    if(i % j == 0)
			    sum = sum + j;
    		}
	
	    if(sum > i){
			flag = 1;
		    printf("%d is an abundant number.\n", i);
		}
  	  }
		if(flag == 0){
		printf("No abundant number present between given range\n");
		}
	}
	 void main(){
   	 int start;
    	 int end;
   	 printf("Enter starting num:\n");
   	 scanf("%d",&start);
   	 printf("Enter ending num:\n");
   	 scanf("%d",&end);
   	 abundant(start,end);

	}



