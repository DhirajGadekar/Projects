//Main Diagonal sum in 2D Array : 

#include<stdio.h>

int main_Dia_Sum(int row,int arr[][row]){
	int sum = 0;
        for(int i = 0;i < row;i++){

                for(int j = 0;j < row;j++){

			if(i == j){
				sum = arr[i][j] + sum;
			}
                }
        }
	return sum;

}

void main(){

        int row;
        printf("Enter the row:\n");
        scanf("%d",&row);

        int arr[row][row];
        
        printf("\nEnter the Element in Array : ");
        for(int i = 0;i < row;i++){
                for(int j = 0;j < row;j++){
                        scanf("%d",&arr[i][j]);
                        
                }
        }

        int ret = main_Dia_Sum(row,arr);
        
	printf("Sum of the Main Diagonal in 2D array : %d\n",ret);
}

