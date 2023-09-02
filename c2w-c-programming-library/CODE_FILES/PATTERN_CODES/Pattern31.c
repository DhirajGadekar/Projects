


	//	Pattern31.
	//	
	//				*
	//			*	*	
	//		*	*	*
	//	*	*	*	*


	#include<stdio.h>


	int Pattern31(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows; col++)		
					if(col<=rows-row)
						printf("\t");
					else
						printf("*\t");

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern31(rows);
	}



