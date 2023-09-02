


	#include<stdio.h>

	void primeRange(int start, int end){
	    int flag = 0;
    
	     while (start < end){
		
			flag = 0;
		
			for(int i = 2; i <= start/2; ++i){
			
				if(start % i == 0){
					flag = 1;
					break;
				}
			}
		
			if (flag == 0)
				printf("%d ", start);
				
			++start;
		
		}
	    printf("\n");
	}
	void main(){
	    int start;
	    int end;
	    printf("Enter starting num:\n");
	    scanf("%d",&start);
	    printf("Enter ending num:\n");
	    scanf("%d",&end);
	    primeRange(start,end);
	
	}	
	
	
	
