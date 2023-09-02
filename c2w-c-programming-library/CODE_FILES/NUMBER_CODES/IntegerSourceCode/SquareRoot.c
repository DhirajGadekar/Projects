


	#include<stdio.h>
	void squareRoot(int num)
	{

	    float sqr = num / 2;
	    float temp = 0.0;

	    while (temp != sqr)
	    {
	
	        temp = sqr;
	        sqr = ((num / temp) + temp) / 2;
	    }

	    printf("Square root of %d is %f\n",num,sqr);
	}
	void main(){
	    int num;
	    printf("Enter a number:\n");
	    scanf("%d",&num);
	    squareRoot(num);
	
	}
	
	

