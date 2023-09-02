


	//	Pattern7.
	//	
	//	A	A	A	A
	//	B	B	B	B	
	//	C	C	C	C
	//	D	D	D	D


	#include<stdio.h>


	int Pattern7(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>26){

			printf("Output will not be proper please enter between 1-26 rows\n");	
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows; col++)	
					printf("%c\t", 64+row);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern7(rows);
	}



