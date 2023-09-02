


	//	Pattern13.
	//
	//	1
	//	1	2	
	//	1	2	3
	//	1	2	3	4


	#include<stdio.h>


	int Pattern13(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= row; col++)		
					printf("%d\t", col);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern13(rows);
	}



