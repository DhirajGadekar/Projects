//Matrix Transpose :

#include<stdio.h>

int Matrix_Transpose(int row,int arr[][row]){
        int temp;
        for(int i = 0;i < row;i++){

                for(int j = 0;j < (row/2) ;j++){
			int temp = arr[j][i];
			arr[j][i] = arr[i][j];
			arr[i][j] = temp;
				
                }
        
	}
	
        return 0;

}

void main(){
	
        int row;
        printf("Enter the row  :\n");
        scanf("%d",&row);

        int arr[row][row];

        printf("\nEnter the Element in Array : ");
        for(int i = 0;i < row;i++){
                for(int j = 0;j < row;j++){
                        scanf("%d",&arr[i][j]);

                }
        }

        int ret = Matrix_Transpose(row,arr);

        for(int i = 0;i < row;i++){
		printf("[");
                for(int j = 0;j < row;j++){
                        printf("%d ",arr[i][j]);

                }
		printf("]\n");
        }
        
}
