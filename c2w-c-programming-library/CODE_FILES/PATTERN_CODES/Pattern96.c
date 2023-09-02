


	//	Pattern96.
	//
	//				D	
	//			C	D		
	//		B	C	D	
	//	A	B	C	D
	//		B	C	D
	//			C	D
	//				D


	#include<stdio.h>


	int Pattern96(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>26){

				printf("Output will be improper please enter rows between 1-26\n");		
				return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){

				for(int col = 1; col <= rows/2+1; col++)
					if(row<=rows/2){
						if(col<=rows/2+1-row)
							printf("\t");
						else
							printf("%c\t", col+64);
					}else{
						if(col<=rows/2-(rows-row))
							printf("\t");
						else
							printf("%c\t", col+64);
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

		Pattern96(rows*2-1);
	}



