


	//	Pattern85.
	//
	//	D	
	//	C	D		
	//	B	C	D	
	//	A	B	C	D
	//	B	C	D
	//	C	D
	//	D


	#include<stdio.h>


	int Pattern85(int rows){

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
			
				for(int col = 1, ch = 66+(rows/2)-temp; col <= temp; col++, ch++)
					printf("%c\t", ch);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern85(rows*2-1);
	}



