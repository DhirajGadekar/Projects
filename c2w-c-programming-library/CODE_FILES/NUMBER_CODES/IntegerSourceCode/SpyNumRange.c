


	#include<stdio.h>

	int main(){
	
	int range1,range2,i;
    	printf("Enter a range:");
    	scanf("%d %d",&range1,&range2);
    	
	printf("Spy numbers between %d and %d are:\n",range1,range2);
    	for(i=range1;i<=range2;i++){
		
		int num=i;
   		int sum=0,mult=1,rem;
    		
		while(num!=0){
        		
			rem=num%10;
        		sum+=rem;
        		mult*=rem;
       	 		num/=10;
    		}

   		if(sum==mult)
    			printf("%d\n",i);
		}
	}
	
	
	
