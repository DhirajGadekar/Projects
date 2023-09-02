


	//	Pattern107.
	//
	//				A	
	//			b	b	b	
	//		C	C	C	C	C
	//	d	d	d	d	d	d	d
	//		C	C	C	C	C
	//			b	b	b
	//				A


	#include<stdio.h>


	int Pattern107(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>26){

				printf("Output will be improper please enter rows between 1-26\n");		
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
						else{
							if(row%2==0)
								printf("%c\t", 96+temp);
							else
								printf("%c\t", 64+temp);
						}
					}else{
						if(col<=rows/2-(rows-row))
							printf("\t");
						else{
							if(row%2==0)
								printf("%c\t", 96+temp);
							else
								printf("%c\t", 64+temp);
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

		Pattern107(rows*2-1);
	}



