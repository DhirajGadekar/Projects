


	//	Pattern103.	
	//
	//				1	
	//			2	2	2	
	//		3	3	3	3	3
	//	4	4	4	4	4	4	4	
	//		3	3	3	3	3
	//			2	2	2	
	//				1


	#include<stdio.h>


	int Pattern103(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 0; row<=rows; row++){

				if(row<=rows/2)
					temp = row;
				else
					temp = rows+1-row;

				for(int col = 1; col <= rows/2+temp; col++)		
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

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern103(rows*2-1);
	}



