


	//	Pattern39.				1
	//					A	b	
	//				1	2	3
	//			A	b	C	d


	#include<stdio.h>


	int Pattern39(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>26){

				printf("Output will be improper please enter rows between 1-26\n");		
				return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1, temp = 1; col <= rows; col++)
					if(col<=rows-row)
						printf("\t");
					else{
						if(row%2==0){
							if(col%2==0)
								printf("%c\t", 96+temp);
							else
								printf("%c\t", 64+temp);
						}else
							printf("%d\t", temp);

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

		Pattern39(rows);
	}



