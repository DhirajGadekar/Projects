


	//	Pattern6.
	//		
	//	9	8	7
	//	6	5	4	
	//	3	2	1


	#include<stdio.h>


	int Pattern6(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = rows*rows; row<=rows; row++){	
			
				for(int col = 1; col <= rows; col++, temp--)
					printf("%d\t", temp);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern6(rows);
	}



