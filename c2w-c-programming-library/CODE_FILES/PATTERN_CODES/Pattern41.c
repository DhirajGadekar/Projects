


	//	Pattern41.
	//
	//				1
	//			4	9	
	//		64	125	216
	//	2401	4096	6561	10000


	#include<stdio.h>


	int power(int num, int pow){

		for(int i = num; pow--; num*=i);
			
		return num;
	}

	int Pattern41(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows; col++)
					if(col<=rows-row)
						printf("\t");
					else{
						printf("%d\t", power(temp, row-1));		
						temp++;
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

		Pattern41(rows);
	}



