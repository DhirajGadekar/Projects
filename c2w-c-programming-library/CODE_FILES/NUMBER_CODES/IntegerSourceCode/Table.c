


	#include <stdio.h>  

	void main(){

		int num, i; 	
	   	printf (" Enter a number to generate the table : ");  
	    	scanf (" %d", &num);	 
      
    	
		printf ("\n Table of %d", num);    
    	
		for ( i = 1; i <= 10; i++){
	
			printf ("\n %d * %d = %d", num, i, (num*i));  
	    }  
	    	
	}  	
	
	
	
