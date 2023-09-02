


	//	Pattern88.
	//
	//	1	
	//	1	4		
	//	4	7	10	
	//	10	13	16	19
	//	19	22	25
	//	25	28
	//	28


	#include<stdio.h>


	int Pattern88(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 0, num = 1; row<=rows; row++, num-=rows/2){		

				if(row<=rows/2)
					temp = row;
				else
					temp = rows+1-row;
			
				for(int col = 1; col <= temp; col++, num+=rows/2)
					printf("%d\t", num);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern88(rows*2-1);
	}



