


	//	Pattern76.
	//
	//	7	6	5	4	3	2	1
	//		5	4	3	2	1
	//			3	2	1
	//				1


	#include<stdio.h>


	int Pattern76(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1, temp = (rows*2)-row; col <= (rows*2)-row; col++, temp--)		
					if(col<row)
						printf("\t");
					else
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

		Pattern76(rows);
	}



