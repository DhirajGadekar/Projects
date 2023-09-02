


	#include<stdio.h>
	void isDuck(int num)
	{
	    int flag =0;
	    int temp = num;

	    while (temp != 0)
	    {

	        if ((temp % 10) == 0){
	            flag = 1;
	            printf("%d is a Duck Number\n",num);
	        }
	        temp = temp / 10;
	    }
	    if(flag == 0){
	         printf("%d is not a Duck Number\n",num);
	    }
	}
	void main(){
	    int num;
	    printf("Enter a number:\n");
	    scanf("%d",&num);
	    isDuck(num);

	}
	
	
	
