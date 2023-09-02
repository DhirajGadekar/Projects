


	//	Pattern94.	
	//
	//					*			
	//			*	*	*	
	//	*	*	*	*	*
	//			*	*	*
	//					*


	#include<stdio.h>


	int Pattern94(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 0; row<=rows; row++){		

				if(row<=rows/2)
					temp = (rows/2+1-row)*2;
				else
					temp = (row-rows/2-1)*2;

				for(int col = 1; col <= rows; col++)
					if(row<=rows/2){
						if(col<=temp)
							printf("\t");
						else
							printf("*\t");
					}else{
						if(col<=temp)
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

		Pattern94(rows*2-1);
	}



