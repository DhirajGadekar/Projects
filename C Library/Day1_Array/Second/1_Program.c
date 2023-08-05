//Column Sum in 2D Array :

#include<stdio.h>

int col_Sum(int col,int arr[][col],int row,int *arr1){

	for(int i = 0;i < row;i++){
	
		for(int j = 0;j < col;j++){
			
			arr1[j] = arr[i][j] + arr1[j];
		}
	}
	
}

void main(){

	int row;
	int col;
	printf("Enter the row and Col : ");
	scanf("%d%d",&row,&col);
	
	int arr[row][col];
	int arr1[col];
	printf("Enter the Element in Array : ");
	for(int i = 0;i < row;i++){
		for(int j = 0;j < col;j++){
			scanf("%d",&arr[i][j]);
			arr1[j] = 0;
		}
	}
	
	int ret = col_Sum(col,arr,row,arr1);
	printf("Addition of Column in 2D array : {");
	for(int i = 0;i < col;i++){
		printf("%d, ",arr1[i]);
	}
	printf("}\n");
}
