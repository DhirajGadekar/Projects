


	//	Pattern101.	
	//
	//				A	
	//			a	b		
	//		B	C	D	
	//	d	e	f	g
	//		G	H	I
	//			i	j
	//				J


	#include<stdio.h>


	int Pattern101(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>6){

				printf("Output will be improper please enter rows between 1-6\n");		
				return -1;
		}else{
		
			for(int row = 1, temp = 1; row<=rows; row++, temp--){

				for(int col = 1; col <= rows/2+1; col++)
					if(row<=rows/2){
						if(col<=rows/2+1-row)
							printf("\t");
						else{
							if(row%2==0)
								printf("%c\t", 96+temp++);
							else
								printf("%c\t", 64+temp++);
						}
					}else{
						if(col<=rows/2-(rows-row))
							printf("\t");
						else{
							if(row%2==0)
								printf("%c\t", 96+temp++);
							else
								printf("%c\t", 64+temp++);
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

		Pattern101(rows*2-1);
	}



