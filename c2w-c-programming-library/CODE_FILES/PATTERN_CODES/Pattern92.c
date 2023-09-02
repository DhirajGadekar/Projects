


	//	Pattern92.	
	//
	//				4	
	//			3	3		
	//		2	2	2	
	//	1	1	1	1
	//		2	2	2
	//			3	3
	//				4


	#include<stdio.h>


	int Pattern92(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = rows/2+1; row<=rows; row++){		

				for(int col = 1; col <= rows/2+1; col++)
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

				if(row<=rows/2)
					temp--;
				else
					temp++;

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern92(rows*2-1);
	}



