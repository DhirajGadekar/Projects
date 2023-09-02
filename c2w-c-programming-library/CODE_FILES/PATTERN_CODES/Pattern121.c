


	//	Pattern121.
	//
	//					*		
	//				*		*
	//			*				*
	//		*						*
	//	*								*
	//		*						*
	//			*				*
	//				*		*
	//					*
						




	#include<stdio.h>


	int Pattern121(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 0; row<=rows; row++){

				if(row<=rows/2)
					temp = row;
				else
					temp = rows+1-row;

				for(int col = 1; col <= rows/2+temp; col++)
					if(row<=rows/2){
						if(col<=rows/2+1-row)
							printf("\t");
						else{
							if(col==rows/2+2-row || col==rows/2+temp)
								printf("*\t");
							else
								printf("\t");
						}
					}else{
						if(col<=rows/2-(rows-row))
							printf("\t");
						else{
							if(col==rows/2+1-(rows-row) || col==rows/2+temp)		
								printf("*\t");
							else
								printf("\t");
						}
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

		Pattern121(rows*2-1);
	}



