


	//	Pattern46.
	//
	//	a	B	c	D
	//		E	f	G		
	//			h	I
	//				J	


	#include<stdio.h>


	int Pattern46(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>6){

				printf("Output will be improper please enter rows between 1-6\n");		
				return -1;
		}else{
		
			for(int row = 1, temp = 1; row<=rows; row++){
			
				for(int col = 1; col <= rows; col++)
					if(col<row)
						printf("\t");
					else{
						if(col%2==0)
							printf("%c\t", 64+temp);
						else
							printf("%c\t", 96+temp);
					
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

		Pattern46(rows);
	}



