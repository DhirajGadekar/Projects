


	//	Pattern38.					A
	//						b	a	
	//					C	E	G
	//				d	c	b	a
	//			E	G	I	K	M


	#include<stdio.h>


	int Pattern38(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>10){

			printf("Output will be improper please enter rows between 1-10\n");		
			return -1;
		}else{
		
			for(int row = 1; row<=rows; row++){
			
				for(int col = 1, temp = row; col <= rows; col++)		
					if(col<=rows-row)
						printf("\t");
					else{
						if(row%2==0)
							printf("%c\t", 96+temp--);
						else{
							printf("%c\t", 64+temp);
							temp+=2;
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

		Pattern38(rows);
	}



