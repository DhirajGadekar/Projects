


	//	Pattern25.
	//
	//	1	2	3	4	
	//	2	3	4	
	//	3	4
	//	4


	#include<stdio.h>


	int Pattern25(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows+1-row; col++)		
					printf("%d\t", col+row-1);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern25(rows);
	}



