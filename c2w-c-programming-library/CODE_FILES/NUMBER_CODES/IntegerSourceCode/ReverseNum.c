


	#include<stdio.h>
	void intReverse(int num){

		int temp = num;
	    int rev = 0;

	    while(temp != 0){

	        rev = ((rev * 10) + (temp % 10));
	        temp = temp / 10;
	    }

		printf("Reverse of %d is %d\n",num, rev);
	}
	void main(){
	    int num;
	    printf("Enter a number:\n");
	    scanf("%d",&num);
	    intReverse(num);

	}
	
	
	
