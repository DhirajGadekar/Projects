


	//	Pattern14.
	//	
	//	a
	//	b	c	
	//	d	e	f
	//	g	h	i	j


	#include<stdio.h>


	int Pattern14(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else{
		
			for(int row = 1, ch = 97; row<=rows; row++){
			
				for(int col = 1; col <= row; col++, ch++){		
				
					if(ch>122)
						ch=97;
					printf("%c\t", ch);
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

		Pattern14(rows);
	}



