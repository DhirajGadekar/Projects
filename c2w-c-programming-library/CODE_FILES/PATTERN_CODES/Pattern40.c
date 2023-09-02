


	//	Pattern40.
	//
	//				4
	//			3	6	
	//		2	4	6
	//	1	2	3	4


	#include<stdio.h>


	int Pattern40(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1, temp = rows+1-row; col <= rows; col++)		
					if(col<=rows-row)
						printf("\t");
					else{
						printf("%d\t", temp);
						temp+=(rows+1-row);
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

		Pattern40(rows);
	}



