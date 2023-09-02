


	//	Pattern110.	
	//
	//				1	
	//			4	2	4	
	//		9	6	3	6	9
	//	16	12	8	4	8	12	16
	//		9	6	3	6	9
	//			4	2	4
	//				1


	#include<stdio.h>


	int Pattern110(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 0; row<=rows; row++){

				if(row<=rows/2)
					temp = row;
				else
					temp = rows+1-row;

				for(int col = 1, num = temp*temp; col <= rows/2+temp; col++)		
					if(row<=rows/2){
						if(col<=rows/2+1-row)
							printf("\t");
						else{
							if(col<rows/2+1){
								printf("%d\t", num);
								num -= temp;
							}else{
								printf("%d\t", num);
								num += temp;
							}
						}
					}else{
						if(col<=rows/2-(rows-row))
							printf("\t");
						else{
							if(col<rows/2+1){
								printf("%d\t", num);
								num -= temp;
							}else{
								printf("%d\t", num);
								num += temp;
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

		Pattern110(rows*2-1);
	}



