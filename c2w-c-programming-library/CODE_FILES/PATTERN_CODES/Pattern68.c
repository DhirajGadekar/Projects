


	//	Pattern68.
	//
	//	1	2	3	4	5	6	7
	//		1	2	3	4	5	
	//			1	2	3
	//				1


	#include<stdio.h>


	int Pattern68(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1, temp = 1; col <= (rows*2)-row; col++)		
					if(col<row)
						printf("\t");
					else
						printf("%d\t", temp++);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern68(rows);
	}



