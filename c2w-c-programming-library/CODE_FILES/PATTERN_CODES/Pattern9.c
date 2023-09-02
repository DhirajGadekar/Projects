


	//	Pattern9.
	//
	//	1	2	3	4
	//	a	b	c	d	
	//	5	6	7	8
	//	e	f	g	h


	#include<stdio.h>


	int Pattern9(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, num = 1, ch = 97; row<=rows; row++){	
			
				for(int col = 1; col <= rows; col++){
					if(ch>122)
						ch = 97;
					if(row%2==0)
						printf("%c\t", ch++);
					else
						printf("%d\t", num++);
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

		Pattern9(rows);
	}



