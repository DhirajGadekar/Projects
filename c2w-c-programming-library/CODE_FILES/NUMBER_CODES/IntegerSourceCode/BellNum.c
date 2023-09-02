


	#include<stdio.h>
	#include<string.h>

	char str1[500];
	char str2[500];
	void concat(char* str1,char* str2){

    	while(*str1 != '\0'){
        	str1++;
    	}
    	while(*str2 != '\0'){
        	*str1 = *str2;
       		 str1++;
       		 str2++;
    	}
    	*str1 = '\0';
    	//return str1;

	}
	char* bellNumber(int row){

	int arr[row][row];
        int bellSer[row];
        bellSer[0] = 1;
        for(int i=1;i<=row;i++){

                for(int j=1;j<=i;j++){

                        if(j==1){

                                if(i==1){
                                        arr[i][j]=1;
                                }
                                else{

                                        arr[i][j]=arr[i-1][i-1];
                                }
                        }
                        else{

                                arr[i][j]=arr[i][j-1]+arr[i-1][j-1];
                        }
                        bellSer[i] = arr[i][j];
             
                }
               
        }

        for(int i=0 ; i<row ; i++){
                //printf("%d\t",bellSer[i] );
                sprintf(str1,"%d ",bellSer[i]);
                concat(str2,str1);
	}
	return str2;
	
	}
	void main(){

	int row;
	printf("Enter Number:\n");
	scanf("%d",&row);
	printf("%s",bellNumber(row));
	
	}
	
	
	
