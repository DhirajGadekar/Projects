


	//	Pattern15.
	//
	//	4
	//	3	3	
	//	2	2	2
	//	1	1	1	1


	#include<stdio.h>


	int Pattern15(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= row; col++)		
					printf("%d\t", rows+1-row);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern15(rows);
	}




