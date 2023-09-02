


	//	Pattern37.
	//
	//					5
	//				5	6
	//			5	4	3
	//		5	6	7	8
	//	5	4	3	2	1


	#include<stdio.h>


	int Pattern37(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1, temp = rows; col <= rows; col++)		
					if(col<=rows-row)
						printf("\t");
					else{
						if(row%2==0)	
							printf("%d\t", temp++);
						else
							printf("%d\t", temp--);
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

		Pattern37(rows);
	}



