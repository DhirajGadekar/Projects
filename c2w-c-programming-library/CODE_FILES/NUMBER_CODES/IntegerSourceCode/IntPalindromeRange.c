


	#include<stdio.h>

	int intReverse(int num){
	    int flag = 0;

		int temp = num;
	        int rev = 0;

    	while(temp != 0){

        	rev = ((rev * 10) + (temp % 10));
        	temp = temp / 10;
    	}

		return rev;
	}
	void palindrome(int start, int end){
    		int flag = 0;

    	for(int i = start; i<= end; i++){

		    int rev = intReverse(i);
		    if(i == rev){
        	    flag = 1;
		    printf("%d is a Palindrome Number\n",i);
		    }
    	}
    	if(flag == 0)
        printf("No Palindrome number present between given range\n");
	}
	void main(){
   	
   	 int start;
   	 int end;
   	 printf("Enter starting num:\n");
    	scanf("%d",&start);
    	printf("Enter ending num:\n");
    	scanf("%d",&end);
   	 palindrome(start,end);

	}
	
	
	
