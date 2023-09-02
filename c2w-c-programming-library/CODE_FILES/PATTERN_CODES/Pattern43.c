


	//	Pattern43.
	//
	//	1	2	3	4
	//		5	6	7		
	//			8	9
	//				10	


	#include<stdio.h>


	int Pattern43(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 1; row<=rows; row++){		
			
				for(int col = 1; col <= rows; col++)
					if(col<row)
						printf("\t");
					else
						printf("%d\t", temp++);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern43(rows);
	}



