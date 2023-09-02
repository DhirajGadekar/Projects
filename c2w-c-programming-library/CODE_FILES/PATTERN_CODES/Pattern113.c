


	//	Pattern113.
	//
	//	*	
	//	*	*		
	//	*		*
	//	*			*
	//	*	*	*	*	*


	#include<stdio.h>


	int Pattern113(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= row; col++)
					if(col==1 || col==row || row==rows)		
						printf("*\t");
					else
						printf("\t");

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern113(rows);
	}



