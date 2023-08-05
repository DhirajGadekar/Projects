//Rows Sum in 2D Array :

#include<stdio.h>

int row_Sum(int col,int arr[][col],int row,int *arr1){

        for(int i = 0;i < row;i++){

                for(int j = 0;j < col;j++){

                        arr1[i] = arr[i][j] + arr1[i];
                }
        }

}

void main(){

        int row;
        int col;
        printf("Enter the row and Col :\n ");
        scanf("%d%d",&row,&col);

        int arr[row][col];
        int arr1[col];
        printf("\nEnter the Element in Array : ");
        for(int i = 0;i < row;i++){
                for(int j = 0;j < col;j++){
                        scanf("%d",&arr[i][j]);
                        arr1[j] = 0;
                }
        }

        int ret = row_Sum(col,arr,row,arr1);
        printf("Addition of row in 2D array : {");
        for(int i = 0;i < col;i++){
                printf("%d, ",arr1[i]);
        }
        printf("}\n");
}

