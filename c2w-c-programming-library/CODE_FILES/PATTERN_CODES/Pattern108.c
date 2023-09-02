


	//	Pattern108.		
	//
	//				A	
	//			b	A	b	
	//		C	b	A	b	C
	//	d	C	b	A	b	C	d
	//		C	b	A	b	C
	//			b	A	b	
	//				A


	#include<stdio.h>


	int Pattern108(int rows){

		if(rows<=0){
		
			printf("Invalid input\n");
			return -1;
		}else if(rows>26){

				printf("Output will be improper please enter rows between 1-26\n");		
				return -1;
		}else{
		
			for(int row = 1, temp = 0; row<=rows; row++){

				if(row<=rows/2)
					temp = row;
				else
					temp = rows+1-row;

				for(int col = 1, ch = temp; col <= rows/2+temp; col++)
					if(row<=rows/2){
						if(col<=rows/2+1-row)
							printf("\t");
						else{
							if(col%2==0){
								if(col<rows/2+1)
									printf("%c\t", 64+ch--);
								else
									printf("%c\t", 64+ch++);
							}else{
								if(col<rows/2+1)
									printf("%c\t", 96+ch--);
								else
									printf("%c\t", 96+ch++);
							}
						}
					}else{
						if(col<=rows/2-(rows-row))
							printf("\t");
						else{
							if(col%2==0){
								if(col<rows/2+1)
									printf("%c\t", 64+ch--);
								else
									printf("%c\t", 64+ch++);
							}else{
								if(col<rows/2+1)
									printf("%c\t", 96+ch--);
								else
									printf("%c\t", 96+ch++);
							}
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

		Pattern108(rows*2-1);
	}



