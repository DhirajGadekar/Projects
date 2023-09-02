


	#include<stdio.h>

	int evenRange(int start,int end){

		for(int i=start;i<=end;i++){
	
				if(i%2==0){
			
					printf("%d ",i);
				}
		}
		printf("\n");
	}

	void main(){

		int start,end;

		printf("Enter Starting number: ");
		scanf("%d",&start);
	
		printf("Enter Ending number: ");
		scanf("%d",&end);

		evenRange(start,end);
	}
	
	
	
