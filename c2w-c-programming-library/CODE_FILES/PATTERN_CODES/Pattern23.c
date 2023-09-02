


	//	Pattern23.
	//
	//	4	3	2	1
	//	3	2	1	
	//	2	1
	//	1


	#include<stdio.h>


	int Pattern23(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows+1-row; col++)		
					printf("%d\t", rows+2-col-row);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern23(rows);
	}



