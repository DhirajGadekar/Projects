


	//	Pattern100.
	//
	//				1	
	//			1	2		
	//		2	3	4	
	//	4	5	6	7
	//		7	8	9
	//			9	10
	//				10


	#include<stdio.h>


	int Pattern100(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 1; row<=rows; row++, temp--){		

				for(int col = 1; col <= rows/2+1; col++)
					if(row<=rows/2){
						if(col<=rows/2+1-row)
							printf("\t");
						else
							printf("%d\t", temp++);
					}else{
						if(col<=rows/2-(rows-row))
							printf("\t");
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

		Pattern100(rows*2-1);
	}



