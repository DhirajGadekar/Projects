


	//	Pattern116.
	//
	//	*	*	*	*	*
	//		*			*	
	//			*		*	
	//				*	*	
	//					*
			

	#include<stdio.h>


	int Pattern116(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows; col++)
					if(col<row)
						printf("\t");
					else{
						if(row==1 || col==row || col==rows)		
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

		Pattern116(rows);
	}



