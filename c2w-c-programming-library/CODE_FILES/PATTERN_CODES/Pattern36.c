


	//	Pattern36.
	//
	//				D
	//			c	D	
	//		B	c	D
	//	a	B	c	D


	#include<stdio.h>


	int Pattern36(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>26){

			printf("Output will be improper please enter rows between 1-26\n");		
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows; col++)
					if(col<=rows-row)
						printf("\t");
					else{
						if(col%2==0)
							printf("%c\t", 64+col);
						else
							printf("%c\t", 96+col);
					}

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern36(rows);
	}



