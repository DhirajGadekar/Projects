


	//	Pattern12.
	//	
	//	1
	//	2	2	
	//	3	3	3	
	//	4	4	4	4


	#include<stdio.h>


	int Pattern12(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= row; col++)		
					printf("%d\t", row);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern12(rows);
	}



