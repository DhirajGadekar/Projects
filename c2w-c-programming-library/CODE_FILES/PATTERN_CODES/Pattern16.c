


	//	Pattern16.
	//
	//	d
	//	c	c	
	//	b	b	b
	//	a	a	a	a


	#include<stdio.h>


	int Pattern16(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>26){

			printf("Output will be improper please enter row between 1-26\n");		
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= row; col++)		
					printf("%c\t", rows+97-row);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern16(rows);
	}



