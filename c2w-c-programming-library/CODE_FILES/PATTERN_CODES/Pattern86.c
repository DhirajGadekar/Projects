


	//	Pattern86.
	//
	//	1			
	//	3	2	1	
	//	5	4	3	2	1
	//	3	2	1
	//	1


	#include<stdio.h>


	int Pattern86(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 0; row<=rows; row++){

				if(row<=rows/2)
					temp = row;
				else
					temp = rows+1-row;
			
				for(int col = 1, num = temp*2-1; col <= temp*2-1; col++, num--)			
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

		Pattern86(rows*2-1);
	}



