


	#include<stdio.h>

	int intReverse(int num){

		int temp = num;
	    int rev = 0;

	    while(temp != 0){

	        rev = ((rev * 10) + (temp % 10));
	        temp = temp / 10;
	    }

		return rev;
	}
	void palindrome(int num){

		int rev = intReverse(num);
		if(num == rev){
		
			printf("%d is a Palindrome Number\n",num);
		}else{

			printf("%d is not a Palindrome Number\n",num);
		}
	}
	void main(){
	    int num;
	    printf("Enter a number:\n");
	    scanf("%d",&num);
	    palindrome(num);
	}
	
	
	
