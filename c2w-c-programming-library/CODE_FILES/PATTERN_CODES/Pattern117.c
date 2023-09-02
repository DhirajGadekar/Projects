


	//	Pattern117.
	//
	//				*
	//			*		*
	//		*				*
	//	*	*	*	*	*	*	*


	#include<stdio.h>


	int Pattern117(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows+row-1; col++)
					if(col<=rows-row)
						printf("\t");
					else{
						if(col==rows+1-row || col==rows+row-1 || row==rows)		
							printf("*\t");
						else
							printf("\t");
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

		Pattern117(rows);
	}



