


	//	Pattern48.
	//
	//	4	3	2	1
	//		3	2	1		
	//			2	1
	//				1	


	#include<stdio.h>


	int Pattern48(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows; col++)		
					if(col<row)
						printf("\t");
					else
						printf("%d\t", rows+1-col);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern48(rows);
	}



