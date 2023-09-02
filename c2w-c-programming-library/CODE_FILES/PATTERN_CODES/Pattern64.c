


	//	Pattern64.
	//
	//				1
	//			A	b	A
	//		1	2	3	2	1
	//	A	b	C	d	C	b	A


	#include<stdio.h>


	int Pattern64(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>26){

				printf("Output will be improper please enter rows between 1-26\n");		
				return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1, temp = 1; col <= rows+row-1; col++)
					if(col<=rows-row)
						printf("\t");
					else{
						if(row%2==0){
							if(col<rows)
								if(col%2==0)
									printf("%c\t", 96+temp++);
								else
									printf("%c\t", 64+temp++);
							else
								if(col%2==0)
									printf("%c\t", 96+temp--);
								else
									printf("%c\t", 64+temp--);
						}else{
							if(col<rows)
								printf("%d\t", temp++);
							else
								printf("%d\t", temp--);
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

		Pattern64(rows);
	}



