


	#include<stdio.h>

	int power(int num, int index)
	{

	    int pow = 1;

	    for (int i = 0; i < index; i++)
	        pow = pow * num;
	
	    return pow;
	}
	void main(){
	    int num; 
	    int index;
	    printf("Enter a number:\n");
	    scanf("%d",&num);
	    printf("Enter a index:\n");
	    scanf("%d",&index);
	    printf("%d\n",power(num,index));

	}
	
	
	
