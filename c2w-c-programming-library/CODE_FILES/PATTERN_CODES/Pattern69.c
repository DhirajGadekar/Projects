


	//	Pattern69.
	//
	//	1	2	3	4	3	2	1
	//		2	3	4	3	2
	//			3	4	3
	//				4


	#include<stdio.h>


	int Pattern69(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= (rows*2)-row; col++)		
					if(col<row)
						printf("\t");
					else{
						if(col<rows)
							printf("%d\t", col);
						else
							printf("%d\t", rows-(col-rows));
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

		Pattern69(rows);
	}



