


	//	Pattern97.	
	//
	//				1	
	//			2	4		
	//		3	6	9	
	//	4	8	12	16
	//		3	6	9
	//			2	4
	//				1


	#include<stdio.h>


	int Pattern97(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 0; row<=rows; row++){		

				if(row<=rows/2)
					temp = row;
				else
					temp = rows+1-row;

				for(int col = 1; col <= rows/2+1; col++)
					if(row<=rows/2){
						if(col<=rows/2+1-row){
							printf("\t");
						}else{
							printf("%d\t", temp);
							temp+=row;
						}
					}else{
						if(col<=rows/2-(rows-row)){
							printf("\t");
						}else{
							printf("%d\t", temp);
							temp+=rows+1-row;
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

		Pattern97(rows*2-1);
	}



