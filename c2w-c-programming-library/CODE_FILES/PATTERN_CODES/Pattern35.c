


	//	Pattern35.
	//
	//			1
	//		4	7	
	//	10	13	16



	#include<stdio.h>


	int Pattern35(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 1; row<=rows; row++){		
			
				for(int col = 1; col <= rows; col++)
					if(col<=rows-row)
						printf("\t");
					else{
						printf("%d\t", temp);
						temp+=rows;
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

		Pattern35(rows);
	}



