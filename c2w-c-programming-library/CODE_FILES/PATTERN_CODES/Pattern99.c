


	//	Pattern99.
	//
	//				1	
	//			1	4		
	//		4	7	10	
	//	10	13	16	19
	//		19	22	25
	//			25	28
	//				28


	#include<stdio.h>


	int Pattern99(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 1; row<=rows; row++, temp-=rows/2){		

				for(int col = 1; col <= rows/2+1; col++)
					if(row<=rows/2){
						if(col<=rows/2+1-row)
							printf("\t");
						else{
							printf("%d\t", temp);
							temp += rows/2;
						}
					}else{
						if(col<=rows/2-(rows-row))
							printf("\t");
						else{
							printf("%d\t", temp);
							temp += rows/2 ;
						}
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

		Pattern99(rows*2-1);
	}



