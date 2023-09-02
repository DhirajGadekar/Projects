


	//	Pattern119.
	//
	//	*	
	//	*	*		
	//	*		*	
	//	*			*
	//	*		*
	//	*	*
	//	*


	#include<stdio.h>


	int Pattern119(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 0; row<=rows; row++){			

				if(row<=rows/2)
					temp = row;
				else
					temp = rows+1-row;
			
				for(int col = 1; col <= temp; col++)
					if(col==1 || col==temp)
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

		Pattern119(rows*2-1);
	}



