


	//	Pattern62.
	//
	//					5
	//				5	6	5
	//			5	4	3	4	5
	//		5	6	7	8	7	6	5
	//	5	4	3	2	1	2	3	4	5


	#include<stdio.h>


	int Pattern62(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1, temp = rows; col <= rows+row-1; col++)		
					if(col<=rows-row)
						printf("\t");
					else{
						if(row%2==0)
							if(col<rows)
								printf("%d\t", temp++);
							else
								printf("%d\t", temp--);
						else
							if(col<rows)
								printf("%d\t", temp--);
							else
								printf("%d\t", temp++);
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

		Pattern62(rows);
	}



