


	//	Pattern111.	
	//
	//	*	*	*	*	*	*	*
	//	*	*	*		*	*	*	
	//	*	*				*	*	
	//	*						*
	//	*	*				*	*
	//	*	*	*		*	*	*
	//	*	*	*	*	*	*	*



	#include<stdio.h>


	int Pattern111(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){

				for(int col = 1; col <= rows; col++)
					if(row<=rows/2){
						if(col>rows/2+2-row && col<rows/2+row)
							printf("\t");
						else
							printf("*\t");
					}else{
						if(col>row-rows/2 && col<rows+1-(row-rows/2))		
							printf("\t");
						else
							printf("*\t");
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

		Pattern111(rows*2-1);
	}



