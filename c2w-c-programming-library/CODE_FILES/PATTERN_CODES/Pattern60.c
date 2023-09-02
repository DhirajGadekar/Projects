


	//	Pattern60.
	//
	//				1
	//			4	7	4
	//		7	10	13	10	7
	//	10	13	16	19	16	13	10


	#include<stdio.h>


	int Pattern60(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1, temp = 1+(rows-1)*(row-1); col <= rows+row-1; col++)		
					if(col<=rows-row)
						printf("\t");
					else
						if(col<rows){
							printf("%d\t", temp);
							temp+=(rows-1);
						}else{
							printf("%d\t", temp);
							temp-=(rows-1);
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

		Pattern60(rows);
	}



