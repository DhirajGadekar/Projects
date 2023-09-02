


	//	Pattern106.	
	//
	//				4	
	//			3	3	3	
	//		2	2	2	2	2
	//	1	1	1	1	1	1	1
	//		2	2	2	2	2	
	//			3	3	3	
	//				4


	#include<stdio.h>


	int Pattern106(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 0; row<=rows; row++){

				if(row<=rows/2)
					temp = row;
				else
					temp = rows+1-row;

				for(int col = 1, num = rows/2+2-temp; col <= rows/2+temp; col++)		
					if(row<=rows/2){
						if(col<=rows/2+1-row)
							printf("\t");
						else
							printf("%d\t", num);
					}else{
						if(col<=rows/2-(rows-row))
							printf("\t");
						else
							printf("%d\t", num);
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

		Pattern106(rows*2-1);
	}



