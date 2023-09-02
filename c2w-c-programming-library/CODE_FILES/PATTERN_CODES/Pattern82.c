


	//	Pattern82.
	//
	//	3	
	//	2	3		
	//	1	2	3	
	//	0	1	2	3
	//	1	2	3
	//	2	3
	//	3


	#include<stdio.h>


	int Pattern82(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 0; row<=rows; row++){

				if(row<=rows/2)
					temp = row;
				else
					temp = rows+1-row;
			
				for(int col = 1, num = rows/2-(temp-1); col <= temp; col++, num++)		
					printf("%d\t", num);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern82(rows*2-1);
	}



