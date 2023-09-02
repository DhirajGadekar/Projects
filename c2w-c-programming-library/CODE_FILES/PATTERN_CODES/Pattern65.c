


	//	Pattern65.
	//
	//				4
	//			3	6	3
	//		2	4	6	4	2
	//	1	2	3	4	3	2	1


	#include<stdio.h>


	int Pattern65(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1, temp = rows+1-row; col <= rows+row-1; col++)		
					if(col<=rows-row)
						printf("\t");
					else{
						if(col<rows){
							printf("%d\t", temp);
							temp+=(rows+1-row);
						}else{
							printf("%d\t", temp);
							temp-=(rows+1-row);
						}
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

		Pattern65(rows);
	}



