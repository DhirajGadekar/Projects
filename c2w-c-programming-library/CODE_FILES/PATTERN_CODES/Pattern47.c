


	//	Pattern47.
	//
	//	1	2	3	4
	//		2	3	4		
	//			3	4
	//				4	


	#include<stdio.h>


	int Pattern47(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows; col++)		
					if(col<row)
						printf("\t");
					else
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

		Pattern47(rows);
	}



