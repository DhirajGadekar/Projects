


	#include<stdio.h>

	int isPrime(int num){
   	if (num < 2)
   		return 0;

  	  for (int i = 2; i <= num / 2; i++)
    	{
        	if (num % i == 0)
        	    return 0;
    	}
	
    	return 1;
	}

	void compositeRange(int start, int end){
    	int flag = 0;

   	for(int i = start; i<= end ; i++){
        	if(isPrime(i) == 1){
       		     flag = 1;
       		     printf("%d is a not Composite Number\n",i);
       		 }
    	}
  	if(flag == 0){
	
		printf("No Composite number present between given range\n");
	}
    
	}
	void main(){
   	int start;
    	int end;
    	printf("Enter starting num:\n");
    	scanf("%d",&start);
    	printf("Enter ending num:\n");
    	scanf("%d",&end);
    	compositeRange(start,end);
    	
	}
	
	
	
