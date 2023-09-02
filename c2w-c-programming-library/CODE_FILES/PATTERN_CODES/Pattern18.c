


	//	Pattern18.
	//
	//	4
	//	8	12	
	//	16	20	24	
	//	28	32	36	40


	#include<stdio.h>


	int Pattern18(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = rows; row<=rows; row++){
			
				for(int col = 1; col <= row; col++, temp+=rows)		
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

		Pattern18(rows);
	}



