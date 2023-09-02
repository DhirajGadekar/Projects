


	//	Pattern77.
	//
	//	1	3	5	7	9	7	5	3	1
	//		9	7	5	3	5	7	9
	//			3	5	7	5	3
	//				7	5	7
	//					5


	#include<stdio.h>


	int Pattern77(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1, temp1 = row, temp2 = rows*2+1-row; col <= (rows*2)-row; col++)		
					if(col<row)
						printf("\t");
					else{
						if(row%2==0){
							if(col<rows){
								printf("%d\t", temp2);
								temp2-=2;
							}else{
								printf("%d\t", temp2);
								temp2+=2;
							}
						}else{
							if(col<rows){
								printf("%d\t", temp1);
								temp1+=2;
							}else{
								printf("%d\t", temp1);
								temp1-=2;
							}
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

		Pattern77(rows);
	}



