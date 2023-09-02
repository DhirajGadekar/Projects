


	//	Pattern50.
	//
	//	100	9	64	7
	//		36	5	16		
	//			3	4
	//				1	


	#include<stdio.h>


	int Pattern50(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = (rows*(rows+1))/2; row<=rows; row++){		
			
				for(int col = 1; col <= rows; col++)
					if(col<row)
						printf("\t");
					else{
						if(temp%2==0)
							printf("%d\t", temp*temp);
						else
							printf("%d\t", temp);

						temp--;
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

		Pattern50(rows);
	}



