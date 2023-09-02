


	//	Pattern19.
	//
	//	10
	//	I	H	
	//	7	6	5
	//	D	C	B	A


	#include<stdio.h>


	int Pattern19(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>6){
			
			printf("Output will be improper please enter rows between 1-6\n");		
			return -1;
		}else{
		
			for(int row = 1, temp = (rows*(rows+1))/2; row<=rows; row++){
			
				for(int col = 1; col <= row; col++, temp--){
					if(row%2==0)
						printf("%c\t", 64+temp);
					else
						printf("%d\t", temp);
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

		Pattern19(rows);
	}



