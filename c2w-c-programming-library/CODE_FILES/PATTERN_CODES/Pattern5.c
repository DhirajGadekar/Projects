


	//	Pattern5.	
	//	
	//	4	4	4	4
	//	3	3	3	3	
	//	2	2	2	2
	//	1	1	1	1


	#include<stdio.h>


	int Pattern5(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows; col++)	
					printf("%d\t", rows+1-row);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern5(rows);
	}



