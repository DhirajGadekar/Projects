


	#include<stdio.h>

	void squareRootRange(int start, int end){
	    for(int i = start; i<= end ; i++){
	        float sqr = i / 2;
	        float temp = 0.0;

	        while (temp != sqr){

	            temp = sqr;
	            sqr = ((i / temp) + temp) / 2;
	        }

	         printf("Square root of %d is %f\n",i,sqr);
	    }
	}
	void main(){
	    int start;
	    int end;
	    printf("Enter starting num:\n");
	    scanf("%d",&start);
	    printf("Enter ending num:\n");
	    scanf("%d",&end);
	    squareRootRange(start,end);
	
	}
	
	
	
