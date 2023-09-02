


	//	Pattern8.
	//		
	//	1	3	5	7
	//	9	11	13	15	
	//	17	19	21	23
	//	25	27	29	31


	#include<stdio.h>


	int Pattern8(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows; col++, temp+=2)	
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

		Pattern8(rows);
	}



