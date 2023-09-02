


	//	Pattern72.
	//
	//	4	3	2	1	2	3	4
	//		3	2	1	2	3
	//			2	1	2
	//				1


	#include<stdio.h>


	int Pattern72(int rows){

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
							printf("%d\t", rows+1-col);
						else
							printf("%d\t", col+1-rows);
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

		Pattern72(rows);
	}



