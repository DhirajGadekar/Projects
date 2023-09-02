


	//	Pattern52.
	//
	//	1	3	5	7	9
	//		9	7	5	3	
	//			3	5	7
	//				7	5
	//					5


	#include<stdio.h>


	int Pattern52(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 1; row<=rows; row++){		
			
				for(int col = 1; col <= rows; col++)
					if(col<row)
						printf("\t");
					else{
						if(row%2==0){
						
							printf("%d\t", temp);
							if(col<rows)
								temp-=2;
						}else{
							
							printf("%d\t", temp);
							if(col<rows)
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

		Pattern52(rows);
	}



