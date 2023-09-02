


	//	Pattern95.
	//
	//					1			
	//			1	2	3	
	//	1	2	3	4	5
	//			1	2	3
	//					1


	#include<stdio.h>


	int Pattern95(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 0; row<=rows; row++){		

				if(row<=rows/2)
					temp = (rows/2+1-row)*2;
				else
					temp = (row-rows/2-1)*2;

				for(int col = 1, num = 1; col <= rows; col++)
					if(row<=rows/2){
						if(col<=temp)
							printf("\t");
						else
							printf("%d\t", num++);
					}else{
						if(col<=temp)
							printf("\t");
						else
							printf("%d\t", num++);
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

		Pattern95(rows*2-1);
	}



