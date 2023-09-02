int printf(const char *format,...);
#include<string.h>

int intToStr(char* str, int pos, int num){

	int count = 0, temp = num, power = 1;

	while(temp/=10)
		power*=10;

	while(power){
	
		count++;
		str[pos++] = 48+(num/power)%10;
		power/=10;
	}

	return count;
}

int Pattern1(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "NO OPTION DELECTED");
		return -1;
		
	}else{
		int i = 0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				*(str+(i++)) = '*';
				*(str+(i++)) = '\t';

			}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\n';
		}

				*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern2(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	
	}else{
		int i = 0;	
		for(int row = 1, temp = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++, 48+temp++){
				int ext = intToStr(str, i, temp);
				*(str+(i+=ext)) = '\t';
				i++;
			}

			*(str+(i++)) = '\n';
		}
		
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern3(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		

	}else{
		int i = 0; 	
		for(int row = 1, temp = 97; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++, temp++){
				*(str+(i++)) = temp;	
				*(str+(i++)) = '\t';
		}
			*(str+(i++)) = '\n';
		
		}
			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';
	}
		
		return 1;
	
}
int Pattern4(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				int ext = intToStr(str, i, row);
				*(str+(i+=ext)) = '\t';
				i++;
							
			}
				*(str+(i++)) = '\n';
		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern5(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				int ext = intToStr(str, i, rows+1-row);
				*(str+(i+=ext)) = '\t';
				i++;
			}
				
			*(str+(i++)) = '\n';
			
		}
			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';

	}

		return 1;
	
}
int Pattern6(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;	
		for(int row = 1, temp = rows*rows; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++, temp--){
				int ext = intToStr(str, i, temp);
				*(str+(i+=ext)) = '\t';
				i++;
				
		}

				*(str+(i++)) = '\n';
	
		}
				*(str+(i--)) = ' ';	
				*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern7(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				*(str+(i++)) = row+64;
				*(str+(i++)) = '\t';

			}
				
			*(str+(i++)) = '\n';

			
		}
			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern8(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++, temp+=2){
				int ext = intToStr(str, i, temp);
				*(str+(i+=ext)) = '\t';
				i++;
		}

			*(str+(i++)) = '\n';
			
		}
		
			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';
	}

		return 1;
	
}


int Pattern9(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, num = 1, ch = 97; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++)
				if(row%2==0){
					*(str+(i++)) = ch++;
					*(str+(i++)) = '\t';
				}else{
					int ext = intToStr(str, i, num++);
					*(str+(i+=ext)) = '\t';
					i++;
				}
				
				*(str+(i++)) = '\n';

			
		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
}


int Pattern10(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= row; col++){
				*(str+(i++)) = '*';
				*(str+(i++)) = '\t';

			}

				*(str+(i++)) = '\n';
			
		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern11(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 1; row<=rows; row++){
		
			for(int col = 1; col <= row; col++, temp++){
				int ext = intToStr(str, i, temp);
				*(str+(i+=ext)) = '\t';
				i++;

			}


				*(str+(i++)) = '\n';
		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern12(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= row; col++){
				
				int ext = intToStr(str, i, row);				
				*(str+(i+=ext)) = '\t';
				i++;
			
			}
				*(str+(i++)) = '\n';
		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern13(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= row; col++){
				int ext = intToStr(str, i, col);				
				*(str+(i+=ext)) = '\t';
				i++;
			}

				*(str+(i++)) = '\n';
		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';

	}

		return 1;
	
}


int Pattern14(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i = 0;
		for(int row = 1, ch = 97; row<=rows; row++){
		
			for(int col = 1; col <= row; col++, ch++){
				*(str+(i++)) = ch;
				*(str+(i++)) = '\t';
		}
				*(str+(i++)) = '\n';

		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
	
}


int Pattern15(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= row; col++){
				int ext = intToStr(str, i, rows+1-row);
				
				*(str+(i+=ext)) = '\t';
				i++;
				
			}

				*(str+(i++)) = '\n';
		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
}



int Pattern16(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i = 0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= row; col++){
				*(str+(i++)) = rows+97-row;
				*(str+(i++)) = '\t';
			}	

				*(str+(i++)) = '\n';
		}
				
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}
int Pattern17(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
	
		
	}else{
		int i =0; 
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = row; col <= row; col++, temp+=row){
				int ext = intToStr(str, i, temp);
				*(str+(i+=ext)) = '\t';
				i++;
				
				
			}
				
			*(str+(i++)) = '\n';
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;

}


int Pattern18(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
	

	}else{
		int i =0;
		for(int row = 1, temp = rows; row<=rows; row++){
		
			for(int col = 1; col <= row; col++, temp+=rows){
				int ext = intToStr(str, i, temp);
				*(str+(i+=ext)) = '\t';
				i++;
				

		}
				*(str+(i++)) = '\n';

		}
			
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}
int Pattern19(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
		
	}else{
		int i = 0;
		for(int row = 1, temp = (rows*(rows+1))/2; row<=rows; row++){
		
			for(int col = 1; col <= row; col++, temp--){
				if(row%2==0){
					*(str+(i++)) =64+temp;
					*(str+(i++)) = '\t';

				}else{
				int ext = intToStr(str, i, temp);
				*(str+(i+=ext)) = '\t';
				i++;
					
				}
			}

				*(str+(i++)) = '\n';
		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';

	}

		return 1;
}



int Pattern20(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	
	}else{
		int i =0;	
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+1-row; col++){
				*(str+(i++)) = '*';
				*(str+(i++)) = '\t';
			}
				*(str+(i++)) = '\n';
		}
			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';

	}

		return 1;
	
}
int Pattern21(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
		
	}else{
		int i =0 ;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+1-row; col++){
				int ext = intToStr(str, i, col);
				*(str+(i+=ext)) = '\t';
				i++;
				
			}
				*(str+(i++)) = '\n';
		}
				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
	
}


int Pattern22(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	
	}else{
		int i =0;
		for(int row = 1, temp = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+1-row; col++, temp++){
				int ext = intToStr(str, i, temp);
				*(str+(i+=ext)) = '\t';
				i++;
				

			}
				*(str+(i++)) = '\n';
		}
				*(str+(i--)) = ' '; 
				*(str+(i++)) = '\0';
	}

		return 1;
	
}


int Pattern23(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
	}else{
		int i =0;	
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+1-row; col++){
				int ext = intToStr(str, i, (rows+2)-col-row);
				*(str+(i+=ext)) = '\t';
				i++;
				
			}

				*(str+(i++)) = '\n';
		}
				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern24(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	
	}else{
		int i = 0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+1-row; col++){
				*(str+(i++)) = col+96;
				*(str+(i++)) = '\t';

			}

				*(str+(i++)) = '\n';
		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
	
}


int Pattern25(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+1-row; col++){
				int ext = intToStr(str, i, col+row-1);
				*(str+(i+=ext)) = '\t';
				i++;

			}

				*(str+(i++)) = '\n';
		}
		
				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';

	}

		return 1;
	
}
int Pattern26(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+1-row; col++)
				if(row%2==0){
					*(str+(i++)) = 65+rows-row;
				
					*(str+(i++)) = '\t';
				}else{
					*(str+(i++)) = 97+rows-row;
				
					*(str+(i++)) = '\t';
				}
		
				*(str+(i++)) = '\n';
		}
	
				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern27(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0; 
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+1-row; col++){
				*(str+(i++))= (rows+2-row-col);
				*(str+(i++)) = '\t';
			}

				*(str+(i++)) = '\n';
		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern28(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+1-row; col++){
				if(row%2==0){
					int ext = intToStr(str, i, rows+2-row-col);
					*(str+(i+=ext)) = '\t';
					i++;
					

				}else{
					*(str+(i++)) = rows+66-row-col;
					*(str+(i++)) = '\t';
				}

			}

				*(str+(i++)) = '\n';
			
		}
		

			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';

		}

		return 1;
	
}


int Pattern29(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1, temp = 1; row<=rows; row++, temp--){
		
			for(int col = 1; col <= rows+1-row; col++, temp++){
					int ext = intToStr(str, i, temp);
					*(str+(i+=ext)) = '\t';
					i++;
			

			}
		
			*(str+(i++)) = '\n';
			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}


int Pattern30(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	

	}else{
		int i =0;	
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+1-row; col++){
					int ext = intToStr(str, i, rows+1-col);
					*(str+(i+=ext)) = '\t';
					i++;
				
			}

				*(str+(i++)) = '\n';
		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';

	}

		return 1;
	
}
int Pattern31(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
					
					
				}else{
					*(str+(i++)) = '*';
					*(str+(i++)) = '\t';
					
				}

			}
				*(str+(i++)) = '\n';

		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
		}

		return 1;
	
}


int Pattern32(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i = 0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = 1; col <= rows; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
					
				}else{
					int ext = intToStr(str, i, temp++);
					*(str+(i+=ext)) = '\t';
					i++;
	

				}

			}
				*(str+(i++)) = '\n';
		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
	
}


int Pattern33(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = rows; col <= rows; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
				
					
				}else{
					int ext = intToStr(str, i, temp--);
					*(str+(i+=ext)) = '\t';
					i++;
					
				}
			}
				*(str+(i++)) = '\n';
		}
			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';

	}

		return 1;
	
}
int Pattern34(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0; 
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
					
					
				}else{
					*(str+(i++)) = 97+rows-row;
					*(str+(i++)) = '\t';

				}

			}
			
				*(str+(i++)) = '\n';
		

		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern35(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1, temp = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<=rows-row)
					*(str+(i++)) = '\t';
				else{
					int ext = intToStr(str, i, temp);
					*(str+(i+=ext)) = '\t';
					temp+=rows;
					i++;
					
				}

			}

			*(str+(i++)) = '\n';
		}


		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern36(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int  i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
										
				}else{
					if(col%2==0){
						*(str+(i++)) = 64+col;
						*(str+(i++)) = '\t';
					}else{
						*(str+(i++)) = 96+col;
						*(str+(i++)) = '\t';
						
					}
				}

			}
				*(str+(i++)) = '\n';

		}

				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
	
}



int Pattern37(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int  i = 0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = rows; col <= rows; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
					
				
				}else{
					if(row%2==0){		
						int ext = intToStr(str, i, temp++);
						*(str+(i+=ext)) = '\t';
						i++;
					}else{
						int ext = intToStr(str, i, temp--);
						*(str+(i+=ext)) = '\t';
						i++;
						
					}
			
				}
			}

				*(str+(i++)) = '\n';
		}
			*(str+(i--))  = ' ';
			*(str+(i++)) = '\0';
	}

		return 1;
	
}


int Pattern38(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = row; col <= rows; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
					
				}else{
					if(row%2==0){
						*(str+(i++)) = 96+temp--;
						*(str+(i++)) = '\t';
					}else{
						*(str+(i++)) =64+temp;
						*(str+(i++)) = '\t';
						temp+=2;
					}
				}
			}

				*(str+(i++)) = '\n';
		}

			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern39(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = 1; col <= rows; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
				}else{
					if(row%2==0){
						if(col%2==0){
							*(str+(i++)) = 96+temp;
							*(str+(i++)) = '\t';
						}else{
							*(str+(i++)) =  64+temp;
							*(str+(i++)) = '\t';
						}
					}else{
						int ext = intToStr(str, i, temp);
						*(str+(i+=ext)) = '\t';
						i++;
					}

					temp++;
				}

			}

			
			*(str+(i++)) = '\n';
			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern40(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	
	}else{
		int i = 0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = rows+1-row; col <= rows; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
					
					
				}else{
					
					int ext = intToStr(str, i, temp);
					*(str+(i+=ext)) = '\t';
					i++;
					temp+=(rows+1-row);
				}

			}

				*(str+(i++)) = '\n';
		}
			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';
	}

		return 1;
	
}

int pwr(int num, int pow){

	for(int i = num; pow--; num*=i);

	return num;
}

int Pattern41(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	
	}else{
		int i =0;
		for(int row = 1, temp = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
					
				}else{
					int num = pwr(temp, row-1);
					temp++;
					int ext = intToStr(str, i, num);
					*(str+(i+=ext)) = '\t';
					i++;
				
				}

			}

				*(str+(i++)) = '\n';
		}
				*(str+(i--)) = ' ';
				*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern42(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<row){
					*(str+(i++)) = '\t';
		
					
				}else{
					*(str+(i++)) ='*';
					*(str+(i++)) = '\t';
				}

			}

			*(str+(i++)) = '\n';
		}
			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern43(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1, temp = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<row){
					*(str+(i++)) = '\t';
				

				}else{
					int ext = intToStr(str, i, temp++);
					*(str+(i+=ext)) = '\t';
					i++;
					
				}
			}
			*(str+(i++)) = '\n';
			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern44(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = 1; col <= rows; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
					
				}else{
					int ext = intToStr(str, i, temp++);
					*(str+(i+=ext)) = '\t';
					i++;
				
				}
			}
			*(str+(i++)) = '\n';
			
		}
			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';
	}

		return 1;

}

int Pattern45(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
		
	}else{
		int i = 0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<row){
					*(str+(i++)) = '\t';
				
				}else{
					*(str+(i++)) = 97+rows-row;
					*(str+(i++)) = '\t';
			}

		}
			*(str+(i++)) = '\n';

		}
			*(str+(i--))  =' ';
			*(str+(i++)) = '\0';
	}

		return 1;

}
	

int Pattern46(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i = 0;
		for(int row = 1, temp = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<row){
					*(str+(i++)) = '\t';
			
				}else{
					if(col%2==0){
						*(str+(i++)) =64+temp;
						*(str+(i++)) = '\t';
					}else{
						*(str+(i++)) = 96+temp;
						*(str+(i++)) = '\t';
					}
					temp++;
				}

		}

			*(str+(i++)) = '\n';
		
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern47(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<row){
					*(str+(i++)) = '\t';
				
				}else{
					
					int ext = intToStr(str, i, col);
					*(str+(i+=ext)) = '\t';
					i++;
					

				}

			}

			*(str+(i++)) = '\n';
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern48(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i  = 0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
				}else{
					int ext = intToStr(str, i, rows+1-col);
					*(str+(i+=ext)) = '\t';
					i++;
				
				}

			}
				*(str+(i++)) = '\n';
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}



int Pattern49(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i = 0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
					
				}else{
					if(row%2==0){
						
						*(str+(i++)) =97+rows-row;
						*(str+(i++)) = '\t';
					}else{
						*(str+(i++)) =65+rows-row;
						*(str+(i++)) = '\t';
					}
				}

			}
			
			*(str+(i++)) = '\n';
				
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern50(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i = 0;
		for(int row = 1, temp = (rows*(rows+1))/2; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
					
				}else{
					if(temp%2==0){
						int ext = intToStr(str, i, temp*temp);
						*(str+(i+=ext)) = '\t';
						i++;
						
					}else{
						int ext = intToStr(str, i, temp);
						*(str+(i+=ext)) = '\t';
						i++;
						
					}

					temp--;
				}

			}
			*(str+(i++)) = '\n';
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern51(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1, temp = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
					
				}else{
					if(temp%2==0){
						*(str+(i++)) =  64+temp;
						*(str+(i++)) = '\t';
					}else{
						*(str+(i++)) =96+temp;
						*(str+(i++)) = '\t';
					}

					temp++;
				}

			}
			*(str+(i++)) = '\n';
			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern52(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i = 0;
		for(int row = 1, temp = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<row){
					*(str+(i++)) = '\t';
			
					
				}else{
					if(row%2==0){
						int ext = intToStr(str, i, temp);
						*(str+(i+=ext)) = '\t';
						if(col<rows)
							temp-=2;
						i++;

					}else{
						int ext = intToStr(str, i, temp);
						*(str+(i+=ext)) = '\t';
						if(col<rows)
							temp+=2;
						i++;
				
					}
				}

			}
			*(str+(i++)) = '\n';
		}
		*(str+(i--)) = ' ';	
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern53(char* str, int rows){

	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1, temp = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
					
				}else{
					if(col%2==0){
						*(str+(i++)) = 96+temp;
						*(str+(i++)) = '\t';
					}else{
						*(str+(i++)) = 64+temp;
						*(str+(i++)) = '\t';
					}

					temp+=row;

					
				}

			}

			*(str+(i++)) = '\n';
			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}
int Pattern54(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i = 0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+row-1; col++){
				
				if(col<=rows-row){
					*(str+(i++)) = '\t';
				
				}else{
					*(str+(i++)) = '*';
					*(str+(i++)) = '\t';
					
				}

			}
			*(str+(i++)) = '\n';
	
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern55(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+row-1; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
					
				}else{
					int ext = intToStr(str, i, rows+1-row); 		
					*(str+(i+=ext)) = '\t';
					i++;


				}

			}
			*(str+(i++)) = '\n';

			
		}
			
		*(str+(i++)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern56(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = 1; col <= rows+row-1; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
					
				}else{
					if(col<rows){
						int ext = intToStr(str, i, temp++); 		
						*(str+(i+=ext)) = '\t';
						i++;

					}else{
						int ext = intToStr(str, i, temp--); 		
						*(str+(i+=ext)) = '\t';
						i++;
						
					}
				}
			}
			*(str+(i++)) = '\n';

			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern57(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i=0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = rows; col <= rows+row-1; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
					
				}else{
					if(col<rows){
						int ext = intToStr(str, i, temp--); 		
						*(str+(i+=ext)) = '\t';
						i++;
						
					}else{
						int ext = intToStr(str, i, temp++); 		
						*(str+(i+=ext)) = '\t';
						i++;
						
					}
				}
			
		
			}
			*(str+(i++)) = '\n';

			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern58(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i  =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+row-1; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
					
				}else{
					*(str+(i++)) = 97+rows-row;
					*(str+(i++)) = '\t';
				}


			}
			*(str+(i++)) = '\n';

			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}


int Pattern59(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+row-1; col++){
				if(col<=rows-row)
					*(str+(i++)) = '\t';
				
				else{
					if(row%2==0){
						*(str+(i++)) = 65+rows-row;
						*(str+(i++)) = '\t';
					}else{
						*(str+(i++)) = 97+rows-row;
						*(str+(i++)) = '\t';
			
					
					}

				}

			}
			
			*(str+(i++)) = '\n';
			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}


int Pattern60(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = 1+(rows-1)*(row-1); col <= rows+row-1; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
					
				}else{
					if(col<rows){
						int ext = intToStr(str, i, temp); 		
						*(str+(i+=ext)) = '\t';
						i++;
		
						temp+=(rows-1);
					}else{
						int ext = intToStr(str, i, temp); 		
						*(str+(i+=ext)) = '\t';
						i++;
						
						temp-=(rows-1);
					}	

				}
				
			}

			*(str+(i++)) = '\n';
			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}
int Pattern61(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+row-1; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
	
				}else{
					if(col%2==0){
						if(col<=rows){
							*(str+(i++)) =64+col;
							*(str+(i++)) = '\t';
						}else{
							*(str+(i++)) = 64+rows-(col-rows);
							*(str+(i++)) = '\t';

						}
					}else{
						if(col<=rows){
							*(str+(i++)) = 96+col;
							*(str+(i++)) = '\t';
						}else{
							*(str+(i++)) = 96+rows-(col-rows);
							*(str+(i++)) = '\t';
						}

					}
				}

			}

			*(str+(i++)) = '\n';
			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern62(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i = 0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = rows; col <= rows+row-1; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';
					
				}else{
					if(row%2==0){
						if(col<rows){
							int ext = intToStr(str, i, temp++); 		
							*(str+(i+=ext)) = '\t';
							i++;
						
						}else{
							int ext = intToStr(str, i, temp--); 		
							*(str+(i+=ext)) = '\t';
							i++;
						
						}
					}else{
						if(col<rows){
							int ext = intToStr(str, i, temp--); 		
							*(str+(i+=ext)) = '\t';
							i++;
							
						}else{
							int ext = intToStr(str, i, temp++); 		
							*(str+(i+=ext)) = '\t';
							i++;
							
						}

					}
				}

			}
			*(str+(i++)) = '\n';

		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern63(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = row; col <= rows+row-1; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';	
					
				}else{
					if(row%2==0){
						if(col<rows){
							*(str+(i++)) =96+temp--;
							*(str+(i++)) = '\t';	
						}else{
							*(str+(i++)) =96+temp++;
							*(str+(i++)) = '\t';	
						}
					}else{
						if(col<rows){
							*(str+(i++)) = 64+temp;
							*(str+(i++)) = '\t';	
							temp+=2;
						}else{
							*(str+(i++)) = 64+temp;
							*(str+(i++)) = '\t';	
							temp-=2;
						}
					}

				}	


			}
			*(str+(i++)) = '\n';
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';	

	}

		return 1;
	
}



int Pattern64(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = 1; col <= rows+row-1; col++){
				if(col<=rows-row)
					*(str+(i++)) = '\t';
				
				else{
					if(row%2==0){
						if(col<rows){
							if(col%2==0){
								*(str+(i++)) =96+temp++;
								*(str+(i++)) = '\t';	
							}else{
								*(str+(i++)) =64+temp++;
								*(str+(i++)) = '\t';	

							}
						}else{
							if(col%2==0){
								*(str+(i++)) =96+temp--;
								*(str+(i++)) = '\t';	
							}else{
								*(str+(i++)) = 64+temp--;
								*(str+(i++)) = '\t';	
							}
						}
					}else{
						if(col<rows){
							int ext = intToStr(str, i, temp++); 		
							*(str+(i+=ext)) = '\t';
							i++;
								
						}else{
							int ext = intToStr(str, i, temp--); 		
							*(str+(i+=ext)) = '\t';
							i++;
							

						}
					}

				}

				
			}

			*(str+(i++)) = '\n';	

		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';	

	}

		return 1;
	
}

int Pattern65(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = rows+1-row; col <= rows+row-1; col++){
				if(col<=rows-row){
					*(str+(i++)) = '\t';	
				}else{
					if(col<rows){		
						int ext = intToStr(str, i, temp); 		
						*(str+(i+=ext)) = '\t';
						i++;
						temp+=(rows+1-row);
					}else{
						int ext = intToStr(str, i, temp); 		
						*(str+(i+=ext)) = '\t';
						i++;	
						temp-=(rows+1-row);
					}
				}


			}

			*(str+(i++)) = '\n';
			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern66(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= (rows*2)-row; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
				}else{
					*(str+(i++)) ='*';
					*(str+(i++)) = '\t';
				}


		}
			*(str+(i++)) = '\n';

	
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern67(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i = 0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = 1; col <= (rows*2)-row; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
				}else{
					int ext = intToStr(str, i, temp++); 		
					*(str+(i+=ext)) = '\t';
					i++;
					

				}


			}

			*(str+(i++)) = '\n';
	
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern68(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i=0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = 1; col <= (rows*2)-row; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
				}else{
					int ext = intToStr(str, i, temp++); 		
					*(str+(i+=ext)) = '\t';
					i++;
				

				}


			}

			*(str+(i++)) = '\n';
			
		}

		*(str+(i--))= ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern69(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i = 0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= (rows*2)-row; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
				}else{
					if(col<rows){
						int ext = intToStr(str, i, col); 		
						*(str+(i+=ext)) = '\t';
						i++;
						
					}else{
						int ext = intToStr(str, i, rows-(col-rows)); 		
						*(str+(i+=ext)) = '\t';
						i++;
						

					}
				}


			}	

			*(str+(i++)) = '\n';
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}


int Pattern70(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int  i= 0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= (rows*2)-row; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
				}else{
					*(str+(i++)) = 97+rows-row;
					*(str+(i++)) = '\t';

				}

			}

			*(str+(i++)) = '\n';
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern71(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = 1; col <= (rows*2)-row; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
				}else{
					if(col<rows){
						int ext = intToStr(str, i, temp++); 		
						*(str+(i+=ext)) = '\t';
						i++;
						
					}else{
						int ext = intToStr(str, i, temp--); 		
						*(str+(i+=ext)) = '\t';
						i++;

					}
				}


			}

			*(str+(i++)) = '\n';
			
		}

			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';
	}


		return 1;
	
}
int Pattern72(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= (rows*2)-row; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
				}else{
					if(col<rows){
						int ext = intToStr(str, i, rows+1-rows); 		
						*(str+(i+=ext)) = '\t';
						i++;
					
					}else{
						int ext = intToStr(str, i, col+1-rows); 		
						*(str+(i+=ext)) = '\t';
						i++;
						

					}
				}


			}

			*(str+(i++)) = '\n';
			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern73(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= (rows*2)-row; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
				}else{
					if(row%2==0){
						if(col<rows){
							*(str+(i++)) = 97+rows-col;
							*(str+(i++)) = '\t';
						}else{
							*(str+(i++)) = 97+col-rows;
							*(str+(i++)) = '\t';
						}
					}else{
						if(col<rows){
							*(str+(i++)) =65+rows-col;
							*(str+(i++)) = '\t';
						}else{
							*(str+(i++)) =  65+col-rows;
							*(str+(i++)) = '\t';

						}

					}
				}

			}
		
			*(str+(i++)) = '\n';
			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;

}
int Pattern74(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int  i =0; 
		for(int row = 1, ch = 65; row<=rows; row++){
		
			for(int col = 1, num = 2*(row-1); col <= (rows*2)-row; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
				}else{
					*(str+(i++)) = ch++;
					int ext1 = intToStr(str, i, num++);		
					*(str+(i+=ext1)) = '\t';
					i++;

				}


			}

			*(str+(i++)) = '\n';
			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern75(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= (rows*2)-row; col++){
				if(col<row){
					*(str+(i++)) = '\t';
					
				}else{
					if(col==rows){
						*(str+(i++)) = '#';
						*(str+(i++)) = '\t';
					}else{
						*(str+(i++)) = '*';
						*(str+(i++)) = '\t';
					}
				}


			}
			*(str+(i++)) = '\n';

		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern76(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = (rows*2)-row; col <= (rows*2)-row; col++, temp--){
				if(col<row){
					*(str+(i++)) = '\t';
					
				}else{
					int ext = intToStr(str, i, temp); 		
					*(str+(i+=ext)) = '\t';
					i++;
			

				}

			}

			*(str+(i++)) = '\n';
			
		}
	*(str+(i--)) = ' ';
	*(str+(i++)) = '\0';

	}

		return 1;
	
}


int Pattern77(char* str, int rows){

	if(rows<=0){
		strcpy(str, "ROW COUNT 0");
		return -1;
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp1 = row, temp2 = rows*2+1-row; col <= (rows*2)-row; col++)
				if(col<row){
					*(str+(i++)) = '\t';
				
				}else{
					if(row%2==0){
						if(col<rows){
							int ext1 = intToStr(str, i, temp2); 		
							*(str+(i+=ext1)) = '\t';
							i++;
							temp2-=2;
						}else{
							int ext2 = intToStr(str, i, temp2); 		
							*(str+(i+=ext2)) = '\t';
							i++;
							temp2+=2;
						}
					}else{
						if(col<rows){
							int ext3 = intToStr(str, i, temp1); 		
							*(str+(i+=ext3)) = '\t';
							i++;
							temp1+=2;
						}else{
							int ext4 = intToStr(str, i, temp1); 		
							*(str+(i+=ext4)) = '\t';
							i++;
							temp1-=2;
						}
					}
				}
				*(str+(i++)) = '\n';

			
		}

			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern78(char* str, int rows){
	rows=(2*rows)-1;
	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2){
				temp = row;
				
	
			}else{
				temp = rows+1-row;

			}
		
			for(int col = 1; col <= temp; col++){
				*(str+(i++))='*';
				*(str+(i++))='\t';

			}

			*(str+(i++))='\n';
			
		}
		*(str+(i--)) = ' ';
		*(str+(i++))='\0';
	}

		return 1;
	
}

int Pattern79(char* str, int rows){
	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2){
				temp = row;
			}else{
				temp = rows+1-row;
			}
		
			for(int col = 1; col <= temp; col++){
				int ext = intToStr(str, i, col);
				*(str+(i+=ext)) = '\t';
				i++;
			}

		
			*(str+(i++)) = '\n';

		}
			
		
		*(str+(i--)) = ' ';
		*(str+(i--)) = '\0';
	}

		return 1;
	
}

int Pattern80(char* str, int rows){
	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i = 0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;
		
			for(int col = 1, num = temp; col <= temp; col++, num--){
				int ext = intToStr(str, i, num);
				*(str+(i+=ext)) = '\t';
				i++;
			}
			*(str+(i++)) = '\n';
		}

		*(str+(i++)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}


int Pattern81(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;
		
			for(int col = 1, num = rows/2+1-(temp-1); col <= temp; col++){
				int ext = intToStr(str, i, num);
				*(str+(i+=ext)) = '\t';
				i++;
				

			}
		
			*(str+(i++)) = '\n';
	
			}
		*(str+(i--))= ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern82(char* str,int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;
		
			for(int col = 1, num = rows/2-(temp-1); col <= temp; col++, num++){
				int ext = intToStr(str, i, num);
				*(str+(i+=ext)) = '\t';
				i++;

			}
			*(str+(i++)) = '\n';
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern83(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;
		
			for(int col = 1; col <= temp*2-1; col++){
				*(str+(i++)) = '*';
				*(str+(i++)) = '\t';
			}
			*(str+(i++)) = '\n';
			
		}
		*(str+(i--))=' ';
		*(str+(i++))='\0';

	}

		return 1;
	
}

int Pattern84(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;	
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;
		
			for(int col = 1; col <= temp*2-1; col++){
				int ext = intToStr(str, i, col);
				*(str+(i+=ext)) = '\t';
				i++;
			}
			
			*(str+(i++)) = '\n';
		
		}

		*(str+(i--))=' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern85(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;
		
			for(int col = 1, ch = 66+(rows/2)-temp; col <= temp; col++, ch++){
				int ext = intToStr(str, i, ch);
				*(str+(i+=ext)) = '\t';
				i++;
				

		}

			*(str+(i++)) = '\t';
	
		}

		*(str+(i--))=' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern86(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;
		
			for(int col = 1, num = temp*2-1; col <= temp*2-1; col++, num--){
				int ext = intToStr(str, i, num);
				*(str+(i+=ext)) = '\t';
				i++;
				
			}
			*(str+(i++)) = '\n';		
		}
		
		*(str+(i--))=' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern87(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;
		
			for(int col = 1, num = temp; col <= temp; col++, num+=temp){
				int ext = intToStr(str, i, num);
				*(str+(i+=ext)) = '\t';
				i++;
				
			
			}

			*(str+(i++)) = '\n';
		}

		*(str+(i--))=' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern88(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 0, num = 1; row<=rows; row++, num-=rows/2){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;
		
			for(int col = 1; col <= temp; col++, num+=rows/2){
				int ext = intToStr(str, i, num);
				*(str+(i+=ext)) = '\t';
				i++;

			}

			*(str+(i++)) = '\n';
			
		}
		
		*(str+(i--))=' ';
		*(str+(i++)) = '\0';
		
		}

		return 1;
	
}

int Pattern89(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){

			for(int col = 1; col <= rows/2+1; col++)
				if(row<=rows/2){
					if(col<=rows/2+1-row){
						*(str+(i++)) = '\t';
				
					}else{
						*(str+(i++)) = '*';
						*(str+(i++)) = '\t';
						
					}
				}else{
					if(col<=rows/2-(rows-row)){
						*(str+(i++)) = '\t';
		
					}else{
						
						*(str+(i++)) = '*';
						*(str+(i++)) = '\t';
					}
				}

			*(str+(i++)) = '\n';
			
		}

		*(str+(i--))=' ';
		*(str+(i++)) = '\0';

	}
		return 1;
	
}

int Pattern90(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){

			for(int col = 1, temp = 1; col <= rows/2+1; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row){
						*(str+(i++)) = '\t';
						
					}else{
						int ext = intToStr(str, i, temp++);
						*(str+(i++)) = '\t';
						i++;
						
					}
				}else{
					if(col<=rows/2-(rows-row)){
					
						*(str+(i++)) = '\t';
						
						
					}else{
						int ext = intToStr(str, i, temp++);
						*(str+(i+=ext)) = '\t';
						i++;
					
					}
				}

			}

			*(str+(i++)) = '\n';
		}

		*(str+(i--))=' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern91(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){

			for(int col = 1, temp = rows/2+1; col <= rows/2+1; col++, temp--)
				if(row<=rows/2){
					if(col<=rows/2+1-row){
						*(str+(i++)) = '\t';
						
					}else{
						int ext = intToStr(str, i, temp);
						*(str+(i+=ext)) = '\t';
						i++;
					}
				}else{
					if(col<=rows/2-(rows-row)){
						*(str+(i++)) = '\t';
						
					
					}else{
						int ext = intToStr(str, i, temp);
						*(str+(i+=ext)) = '\t';
						i++;
						
					}
				}

			*(str+(i++)) = '\n';
			
		}

		*(str+(i--))=' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern92(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = rows/2+1; row<=rows; row++){

			for(int col = 1; col <= rows/2+1; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row){
						*(str+(i++)) = '\t';
						
					}else{
						
						int ext = intToStr(str, i, temp);
						*(str+(i+=ext)) = '\t';
						i++;
						
					}
				}else{
					if(col<=rows/2-(rows-row)){
						*(str+(i++)) = '\t';
						
					}else{
						int ext = intToStr(str, i, temp);
						*(str+(i+=ext)) = '\t';
						i++;
						
					}
				}

			}

			if(row<=rows/2)
				temp--;
			else
				temp++;
			
			*(str+(i++)) = '\n';
		}
		
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern93(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){

			for(int col = 1; col <= rows/2+1; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row){
						*(str+(i++)) = '\t';
		
					}else{
						int ext = intToStr(str, i, col-1);
						*(str+(i+=ext)) = '\t';
						i++;
						
					}
				}else{
					if(col<=rows/2-(rows-row)){
						*(str+(i++)) = '\t';
						
					}else{
						int ext = intToStr(str, i, col-1);
						*(str+(i+=ext)) = '\t';
						i++;
						
					}
				}

			}

			*(str+(i++)) = '\n';
		}

		*(str+(i--))=' ';
		*(str+(i++)) = '\0';
		

	}

		return 1;
	
}

int Pattern94(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = (rows/2+1-row)*2;
			else
				temp = (row-rows/2-1)*2;

			for(int col = 1; col <= rows; col++){
				if(row<=rows/2){
					if(col<=temp)
						*(str+(i++))= '\t';
					else{
						*(str+(i++))= '*';
						*(str+(i++))= '\t';
						
					}
				}else{
					if(col<=temp)
						*(str+(i++))= '\t';
					
					else{
						*(str+(i++))= '*';
						*(str+(i++))= '\t';
						
					}
				}
			}	

			*(str+(i++))= '\n';
			
		}
		*(str+(i--)) =' ';
		*(str+(i++))= '\0';
	}

		return 1;
	
}

int Pattern95(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = (rows/2+1-row)*2;
			else
				temp = (row-rows/2-1)*2;

			for(int col = 1, num = 1; col <= rows; col++)
				if(row<=rows/2){
					
					if(col<=temp){
						*(str+(i++))= '\t';
					}else{
						int ext = intToStr(str, i, num++);
						*(str+(i+=ext)) = '\t';
						i++;
					}
				}else{
					if(col<=temp)
						*(str+(i++))= '\t';
						
					else{
						int ext = intToStr(str, i, num++);
						*(str+(i+=ext)) = '\t';
						i++;
						
					}
				}
			*(str+(i++)) = '\n';
			
		}
		*(str+(i--))  = ' ';
		*(str+(i++)) = '\0';


	}

		return 1;
	
}

int Pattern96(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){

			for(int col = 1; col <= rows/2+1; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row){	
						*(str+(i++)) = '\t';
						
					
					}else{
						*(str+(i++))  = col+64;
						*(str+(i++)) = '\t';
					}
				}else{
					if(col<=rows/2-(rows-row)){
						*(str+(i++)) = '\t';
						
					}else{
						*(str+(i++)) =col+64;
						*(str+(i++)) = '\t';
					}	

				}
			}
		

			*(str+(i++)) = '\n';
		
		}


		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern97(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;

			for(int col = 1; col <= rows/2+1; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row){
						*(str+(i++)) = '\t';
						
					}else{
						int ext = intToStr(str, i, temp);
						*(str+(i+=ext)) = '\t';
						i++;
						temp+=row;
					}
				}else{
					if(col<=rows/2-(rows-row)){
						*(str+(i++)) = '\t';
						
					}else{
						int ext = intToStr(str, i, temp);
						*(str+(i+=ext)) = '\t';
						i++;		
						temp+=rows+1-row;
					}
				}

			}
			*(str+(i++)) = '\n';
			
		}
		
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

	return 1;
}

int Pattern98(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = (rows/2+1-row)*2;
			else
				temp = (row-rows/2-1)*2;

			for(int col = 1; col <= rows; col++){
				if(row<=rows/2){
					if(col<=temp)
						*(str+(i++)) = '\t';
						
					else{
						int ext = intToStr(str, i, rows+1-col);
						*(str+(i+=ext)) = '\t';
						i++;		
						
					}
				}else{
					if(col<=temp)
						*(str+(i++)) = '\t';
		
					else{
						int ext = intToStr(str, i, rows+1-col);
						*(str+(i+=ext)) = '\t';
						i++;		
						
					}
				}
			}
			*(str+(i++)) = '\n';
		
		}
			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';

	}

		return 1;
	
}


int Pattern99(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 1; row<=rows; row++, temp-=rows/2){

			for(int col = 1; col <= rows/2+1; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						*(str+(i++)) = '\t';		
						
					else{
						int ext = intToStr(str, i, temp);
						*(str+(i+=ext)) = '\t';
						i++;		
						temp += rows/2;
					}
				}else{
					if(col<=rows/2-(rows-row))
						*(str+(i++)) = '\t';
						
					else{
						int ext = intToStr(str, i, temp);
						*(str+(i+=ext)) = '\t';
						i++;		
						temp += rows/2 ;
					}
				}

			}
			
			*(str+(i++)) = '\n';
			
		}
		
			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';
	
	}

		return 1;
	
}

int Pattern100(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 1; row<=rows; row++, temp--){

			for(int col = 1; col <= rows/2+1; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						*(str+(i++)) = '\t';
						
					else{
						int ext = intToStr(str, i, temp++);
						*(str+(i+=ext)) = '\t';
						i++;		
						
					}
				}else{
					if(col<=rows/2-(rows-row))
						*(str+(i++)) = '\t';
						
					else{
						int ext = intToStr(str, i, temp++);
						*(str+(i+=ext)) = '\t';
						i++;		
						
					}
				}

			}

			*(str+(i++)) = '\n';
			
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern101(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 1; row<=rows; row++, temp--){

			for(int col = 1; col <= rows/2+1; col++) {
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						*(str+(i++)) = '\t';
						
					else{
						if(row%2==0){
							*(str+(i++)) = 96+temp++;
							*(str+(i++)) = '\t';
						}else{
							*(str+(i++)) =  64+temp++;
							*(str+(i++)) = '\t';
						}
					}
				}else{
					if(col<=rows/2-(rows-row))
						*(str+(i++)) = '\t';
						
					else{
						if(row%2==0){
							*(str+(i++)) = 96+temp++;
							*(str+(i++)) = '\t';
						}else{
							*(str+(i++)) = 64+temp++;
							*(str+(i++)) = '\t';
						}
					}
				}

			}

			
			*(str+(i++)) = '\n';
		}
		
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern102(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;

			for(int col = 1; col <= rows/2+temp; col++)
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						*(str+(i++)) = '\t';
						
					else{
						*(str+(i++)) = '*';
						*(str+(i++)) = '\t';
						
					}
				}else{
					if(col<=rows/2-(rows-row))
						*(str+(i++)) = '\t';
						
					else{
						*(str+(i++)) = '*';
						*(str+(i++)) = '\t';
					
					}
				}

			*(str+(i++)) = '\n';
			
		}
		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}
int Pattern103(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;

			for(int col = 1; col <= rows/2+temp; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						*(str+(i++)) = '\t';
						
					else{
						int ext = intToStr(str, i, temp);
						*(str+(i+=ext)) = '\t';
						i++;
					
					}
				}else{
					if(col<=rows/2-(rows-row))
						*(str+(i++)) = '\t';
					else{
						int ext = intToStr(str, i, temp);
						*(str+(i+=ext)) = '\t';
						i++;
						

					}
				
				}
			}

			*(str+(i++)) = '\n';
						
			
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\t';

	}

		return 1;
	
}

int Pattern104(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;

			for(int col = 1, num = 1; col <= rows/2+temp; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						*(str+(i++)) = '\t';
						
					else{
						if(col<rows/2+1){
							int ext = intToStr(str, i, num++);
							*(str+(i+=ext)) = '\t';
							i++;
							
						}else{
							int ext = intToStr(str, i, num--);
							*(str+(i+=ext)) = '\t';
							i++;
							
						}
					}
				}else{
					if(col<=rows/2-(rows-row))
						*(str+(i++)) = '\t';
						
					else{
						if(col<rows/2+1){
							int ext = intToStr(str, i, num++);
							*(str+(i+=ext)) = '\t';
							i++;
							
						}else{
							int ext = intToStr(str, i, num--);
							*(str+(i+=ext)) = '\t';
							i++;
							
						}
					}
				}

		}

			*(str+(i++)) = '\n';
		}

			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern105(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
				
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;

			for(int col = 1, num = temp; col <= rows/2+temp; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						*(str+(i++)) = '\t';
						
					else{
						if(col<rows/2+1){
							int ext = intToStr(str, i, num--);
							*(str+(i+=ext)) = '\t';
							i++;
						
						}else{
							int ext = intToStr(str, i, num++);
							*(str+(i+=ext)) = '\t';
							i++;
							
						}
					}
				}else{
					if(col<=rows/2-(rows-row))
						*(str+(i++)) = '\t';
						
					else{
						if(col<rows/2+1){
							int ext = intToStr(str, i, num--);
							*(str+(i+=ext)) = '\t';
							i++;
							
						}else{
							int ext = intToStr(str, i, num++);
							*(str+(i+=ext)) = '\t';
							i++;
							
						}
					}
				}

		}

			*(str+(i++)) = '\n';
		
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern106(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;

			for(int col = 1, num = rows/2+2-temp; col <= rows/2+temp; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						*(str+(i++)) = '\t';
						
					else{
						int ext = intToStr(str, i, num);
						*(str+(i+=ext)) = '\t';
						i++;
						
					}
				}else{
					if(col<=rows/2-(rows-row))
						*(str+(i++)) = '\t';
						
					else{
						int ext = intToStr(str, i, num);
						*(str+(i+=ext)) = '\t';
						i++;
						
					}
				}

			}

			
			*(str+(i++)) = '\n';
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern107(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i = 0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;

			for(int col = 1; col <= rows/2+temp; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						*(str+(i++)) = '\t';
						
					else{
						if(row%2==0){
							*(str+(i++)) = 96+temp;
							*(str+(i++)) = '\t';
						}else{
							*(str+(i++)) = 64+temp;
							*(str+(i++)) = '\t';
						}
					}
				}else{
					if(col<=rows/2-(rows-row))
						*(str+(i++)) = '\t';
						
					else{
						if(row%2==0){
							*(str+(i++)) =  96+temp;
							*(str+(i++)) = '\t';
						}else{
							*(str+(i++)) =  64+temp;
							*(str+(i++)) = '\t';
						}
					}
				}
				
			}

			*(str+(i++)) = '\n';
			
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern108(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;	
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;

			for(int col = 1, ch = temp; col <= rows/2+temp; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						*(str+(i++)) = '\t';
						
					else{
						if(col%2==0){
							if(col<rows/2+1){
								*(str+(i++)) = 64+ch--;
								*(str+(i++)) = '\t';
							}else{
								*(str+(i++)) = 64+ch++;
								*(str+(i++)) = '\t';
							}
						}else{
							if(col<rows/2+1){
								*(str+(i++)) = 96+ch--;
								*(str+(i++)) = '\t';
							}else{
								*(str+(i++)) = 96+ch++;
								*(str+(i++)) = '\t';

							}
						}
					}
				}else{
					if(col<=rows/2-(rows-row))
						*(str+(i++)) = '\t';
						
					else{
						if(col%2==0){
							if(col<rows/2+1){
								*(str+(i++)) = 64+ch--;
								*(str+(i++)) = '\t';
							}else{
								*(str+(i++)) = 64+ch++;
								*(str+(i++)) = '\t';
							}
						}else{
							if(col<rows/2+1){
								*(str+(i++)) = 96+ch--;
								*(str+(i++)) = '\t';
							}else{
								*(str+(i++)) = 96+ch++;
								*(str+(i++)) = '\t';
							}
						}
					}
				}

			}
				
				*(str+(i++)) = '\n';
				
		}


		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern109(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;

			for(int col = 1, ch = 65+rows/2; col <= rows/2+temp; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						*(str+(i++)) = '\t';
						
					else{
						if(col<rows/2+1){
							*(str+(i++)) =  ch--;
							*(str+(i++)) = '\t';
						}else{
							*(str+(i++)) = ch++;
							*(str+(i++)) = '\t';
							

						}
					}
				}else{
					if(col<=rows/2-(rows-row))
						*(str+(i++)) = '\t';
						
					else{
						if(col<rows/2+1){
							*(str+(i++)) = ch--;
							*(str+(i++)) = '\t';
						}else{
							*(str+(i++)) = ch++;
							*(str+(i++)) = '\t';

						}
					}
				}

		}

			*(str+(i++)) = '\n';
			
		}
		
			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern110(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;

	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;

			for(int col = 1, num = temp*temp; col <= rows/2+temp; col++)
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						*(str+(i++)) = '\t';
	
					else{
						if(col<rows/2+1){
							int ext = intToStr(str, i, num);
							*(str+(i+=ext)) = '\t';
							i++;
							num -= temp;
						}else{
							int ext = intToStr(str, i, num);
							*(str+(i+=ext)) = '\t';
							i++;
							num += temp;
						}
					}
				}else{
					if(col<=rows/2-(rows-row))
						*(str+(i++)) = '\t';
						
					else{
						if(col<rows/2+1){
							int ext = intToStr(str, i, num);
							*(str+(i+=ext)) = '\t';
							i++;
							num -= temp;
						}else{
							int ext = intToStr(str, i, num);
							*(str+(i+=ext)) = '\t';
							i++;
							num += temp;
						}	
					}
				}
			*(str+(i++)) = '\n';
			
		}

			*(str+(i--)) = ' ';
			*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern111(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
		
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){

			for(int col = 1; col <= rows; col++){
				if(row<=rows/2){
					 if(col>rows/2+2-row && col<rows/2+row)
						*(str+(i++)) = '\t';
						
					 else{
						
						*(str+(i++)) = '*';
						*(str+(i++)) = '\t';

					 }
				}else{
					if(col>row-rows/2 && col<rows+1-(row-rows/2))
						*(str+(i++)) = '\t';
						
					else{
						*(str+(i++)) = '*';
						*(str+(i++)) = '\t';
					

					}
				}


		}

			*(str+(i++)) = '\n';
		
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern112(char* str, int rows){

	if(rows<=0){
	
		printf("Invalid input\n");
		return 0;
	}else{
		int i =0;	
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col==1 || col==rows || row==rows || row==1){
					*(str+(i++)) = '*';
					*(str+(i++)) = '\t';
					
				}else
					*(str+(i++)) = '\t';

			}

		
					

			*(str+(i++)) = '\n';

		}
		



		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}


int Pattern113(char* str, int rows){

	if(rows<=0){
	
		printf("Invalid input\n");
		return 0;
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= row; col++){
				if(col==1 || col==row || row==rows){
					*(str+(i++)) = '*';
					*(str+(i++)) = '\t';
					
				}else{
					*(str+(i++)) = '\t';
					
				}

			}

			*(str+(i++)) = '\n';
			
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	
	
	}

		return 1;
	
}


int Pattern114(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+1-row; col++){
				if(col==1 || row==1 || col==rows+1-row){
					*(str+(i++)) = '*';
					*(str+(i++)) = '\t';
				}else
					*(str+(i++)) = '\t';
			}	

			
			*(str+(i++)) = '\n';
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}


int Pattern115(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<=rows-row)
					*(str+(i++))  = '\t';
				else{
					if(col==rows || row==rows || col==rows+1-row){
						*(str+(i++))  = '*';
						*(str+(i++))  = '\t';
					}else{
						*(str+(i++))  = '\t';
					
					}
				}

			}

		

		*(str+(i++))  = '\n';

		}
			

		*(str+(i--))  = ' ';
		*(str+(i++))  = '\0';
	}

		return 1;
	
}

int Pattern116(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++){
				if(col<row)
					*(str+(i++)) = '\t';
					
				else{
					if(row==1 || col==row || col==rows){
						*(str+(i++)) = '*';
						*(str+(i++)) = '\t';
						
					}else
						*(str+(i++)) = '\t';
						
				}
			}

			*(str+(i++)) = '\n';
			
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern117(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+row-1; col++)
				if(col<=rows-row)
					*(str+(i++)) = '\t';
					
				else{
					if(col==rows+1-row || col==rows+row-1 || row==rows){
						*(str+(i++)) = '*';
						*(str+(i++)) = '\t';
						
					}else
						*(str+(i++)) = '\t';
						
				}

			*(str+(i++)) = '\n';
			
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

int Pattern118(char* str, int rows){

	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= (rows*2)-row; col++){
				if(col<row)
					*(str+(i++)) = '\t';
					
				else{
					if(col==row || col==(rows*2)-row || row==1){
						*(str+(i++)) = '*';
						*(str+(i++)) = '\t';
					}else
						*(str+(i++)) = '\t';
						
				}

			}

			*(str+(i++)) = '\n';
			
		}


		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}

int Pattern119(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;
		
			for(int col = 1; col <= temp; col++){
				if(col==1 || col==temp){
					*(str+(i++)) = '*';
					*(str+(i++)) = '\t';
					
				}else
					*(str+(i++)) = '\t';
					
			}
			*(str+(i++)) = '\n';
			
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';

	}

		return 1;
	
}


int Pattern120(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1; row<=rows; row++){

			for(int col = 1; col <= rows/2+1; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						*(str+(i++)) = '\t';
					else{
						if(col==rows/2+1 || col==rows/2+2-row){
							
							*(str+(i++)) = '*';
							*(str+(i++)) = '\t';
						}else
							*(str+(i++)) = '\t';
							
					}
				}else{
					if(col<=rows/2-(rows-row))
						*(str+(i++)) = '\t';
						
					else{
						if(col==rows/2+1 || col==rows/2+1-(rows-row)){
							*(str+(i++)) = '*';
							*(str+(i++)) = '\t';
							
						}else
							*(str+(i++)) = '\t';
					}
				}
			}

			*(str+(i++)) = '\n';
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}
int Pattern121(char* str, int rows){

	rows=(2*rows)-1;
	if(rows<=0){
	
		strcpy(str, "ROW COUNT 0");
		return -1;
		
	}else{
		int i =0;
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;

			for(int col = 1; col <= rows/2+temp; col++){
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						*(str+(i++)) = '\t';
						
					else{
						if(col==rows/2+2-row || col==rows/2+temp){
							*(str+(i++)) = '*';
							*(str+(i++)) = '\t';
						}else
							*(str+(i++)) = '\t';
					}
				}else{
					if(col<=rows/2-(rows-row))
						*(str+(i++)) = '\t';
						
					else{
						if(col==rows/2+1-(rows-row) || col==rows/2+temp){
							*(str+(i++)) = '*';
							*(str+(i++)) = '\t';
							
						}else
							*(str+(i++)) = '\t';
							
					}
				}

			}	

			*(str+(i++)) = '\n';
			
		}

		*(str+(i--)) = ' ';
		*(str+(i++)) = '\0';
	}

		return 1;
	
}

