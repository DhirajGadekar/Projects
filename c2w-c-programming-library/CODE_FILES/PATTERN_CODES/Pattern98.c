


	//	Pattern98.
	//
	//					1			
	//			3	2	1	
	//	5	4	3	2	1
	//			3	2	1
	//					1


	#include<stdio.h>


	int Pattern98(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 0; row<=rows; row++){		

				if(row<=rows/2)
					temp = (rows/2+1-row)*2;
				else
					temp = (row-rows/2-1)*2;

				for(int col = 1; col <= rows; col++)
					if(row<=rows/2){
						if(col<=temp)
							printf("\t");
						else
							printf("%d\t", rows+1-col);
					}else{
						if(col<=temp)
							printf("\t");
						else
							printf("%d\t", rows+1-col);
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

		Pattern98(rows*2-1);
	}



