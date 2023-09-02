


	//	Pattern61.
	//
	//				D
	//			c	D	c
	//		B	c	D	c	B
	//	a	B	c	D	c	B	a


	#include<stdio.h>


	int Pattern61(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>26){

				printf("Output will be improper please enter rows between 1-26\n");		
				return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows+row-1; col++)
					if(col<=rows-row)
						printf("\t");
					else{
						if(col%2==0)
							if(col<=rows)
								printf("%c\t", 64+col);
							else
								printf("%c\t", 64+rows-(col-rows));
						else
							if(col<=rows)
								printf("%c\t", 96+col);
							else
								printf("%c\t", 96+rows-(col-rows));
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

		Pattern61(rows);
	}



