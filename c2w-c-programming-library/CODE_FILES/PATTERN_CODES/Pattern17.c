


	//	Pattern17.
	//
	//	1
	//	2	4	
	//	3	6	9
	//	4	8	12	16


	#include<stdio.h>


	int Pattern17(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1, temp = row; col <= row; col++, temp+=row)		
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

		Pattern17(rows);
	}



