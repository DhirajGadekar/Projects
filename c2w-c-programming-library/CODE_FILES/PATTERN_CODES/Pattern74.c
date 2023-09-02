


	//	Pattern74.
	//
	//	A0	B1	C2	D3	E4	F5	G6
	//		H2	I3	J4	K5	L6
	//			M4	N5	O6
	//				P6


	#include<stdio.h>


	int Pattern74(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>5){

				printf("Output will be improper please enter rows between 1-5\n");		
				return -1;
		}else{
		
			for(int row = 1, ch = 65; row<=rows; row++){
			
				for(int col = 1, num = 2*(row-1); col <= (rows*2)-row; col++)
					if(col<row)
						printf("\t");
					else
						printf("%c%d\t", ch++, num++);

				printf("\n");
			}

			return 0;
		}
	}

	void main(){

		int rows = 0;

		printf("Enter no. of rows : ");
		scanf("%d", &rows);

		Pattern74(rows);
	}



