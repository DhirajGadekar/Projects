


	//	Pattern91.	
	//
	//				1	
	//			2	1		
	//		3	2	1	
	//	4	3	2	1
	//		3	2	1
	//			2	1
	//				1


	#include<stdio.h>


	int Pattern91(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){

				for(int col = 1, temp = rows/2+1; col <= rows/2+1; col++, temp--)		
					if(row<=rows/2){
						if(col<=rows/2+1-row)
							printf("\t");
						else
							printf("%d\t", temp);
					}else{
						if(col<=rows/2-(rows-row))
							printf("\t");
						else
							printf("%d\t", temp);
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

		Pattern91(rows*2-1);
	}



