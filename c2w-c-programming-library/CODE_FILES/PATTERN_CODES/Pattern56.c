


	//	Pattern56.	
	//
	//				1
	//			1	2	1
	//		1	2	3	2	1
	//	1	2	3	4	3	2	1


	#include<stdio.h>


	int Pattern56(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1, temp = 1; col <= rows+row-1; col++)		
					if(col<=rows-row)
						printf("\t");
					else{
						if(col<rows)
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

		Pattern56(rows);
	}



