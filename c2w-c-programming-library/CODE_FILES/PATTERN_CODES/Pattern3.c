


	//	Pattern3.	
	//	
	//	a	b	c
	//	d	e	f	
	//	g	h	i



	#include<stdio.h>


	int Pattern3(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, temp = 97; row<=rows; row++){
			
				for(int col = 1; col <= rows; col++, temp++){	
				
					if(temp>122)
						temp = 97;
					printf("%c\t", temp);
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

		Pattern3(rows);
	}



