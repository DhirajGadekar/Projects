


	//	Pattern29.
	//
	//	1	2	3	4
	//	4	5	6		
	//	6	7	
	//	7


	#include<stdio.h>


	int Pattern29(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 1; row<=rows; row++, temp--){
			
				for(int col = 1; col <= rows+1-row; col++, temp++)		
					printf("%d\t", temp);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern29(rows);
	}



