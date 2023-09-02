


	#include <stdio.h>

	int main()
	{
	    	// declare the variables
    
		int n1, n2, i, GCD;
    	
		printf ( "Enter any two numbers: \n ");
	    	scanf ( "%d %d", &n1, &n2);

	   	// use for loop
	
		for( i = 1; i <= n1 && i <= n2; ++i){
        	
			if (n1 % i ==0 && n2 % i == 0)
	            		GCD = i; 
	
	    	}
	    	printf (" GCD of two numbers %d and %d is %d.\n", n1, n2, GCD);
	    	
		return 0;
	}
	
	
	
