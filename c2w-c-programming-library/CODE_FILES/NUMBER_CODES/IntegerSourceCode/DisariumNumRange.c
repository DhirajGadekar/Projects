


	#include<stdio.h>
	int power(int num, int index)
	{

	    int pow = 1;
	
	    for (int i = 0; i < index; i++)
	        pow = pow * num;

	    return pow;
	}
	int intReverse(int num){

		int temp = num;
	    int rev = 0;

	    while(temp != 0){

	        rev = ((rev * 10) + (temp % 10));
	                temp = temp / 10;
	    }

		return rev;
	}

	void disariumRange(int start, int end)
	{
	    int flag = 0;
	    for(int i = start; i<=end ; i++){
	 
	        int rev = intReverse(i);
	
	        int temp = rev;
	        int num1 = 0;
	        int count = 1;

         	while (temp != 0){

         	   int pow = power((temp % 10), count);
	
         	   num1 = num1 + pow;
         	   count++;
         	   temp = temp / 10;
         	}

        	if (i == num1){
           	 	flag = 1;
           	 printf("%d is a Disarium Number\n",i);
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
    		 disariumRange(start,end);

	}
	
	
	
