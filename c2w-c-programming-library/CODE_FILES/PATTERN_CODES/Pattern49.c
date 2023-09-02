


	//	Pattern49.
	//
	//	D	D	D	D
	//		c	c	c		
	//			B	B
	//				a	


	#include<stdio.h>


	int Pattern49(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>26){

				printf("Output will be improper please enter rows between 1-26\n");		
				return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows; col++)
					if(col<row)
						printf("\t");
					else{
						if(row%2==0)
							printf("%c\t", 97+rows-row);
						else
							printf("%c\t", 65+rows-row);
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

		Pattern49(rows);
	}



