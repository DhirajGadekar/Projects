#include<stdio.h>

int reverse(int arr[],int size){
	
	int i = 0,j = size-1;
	while(i < j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}

}
void main(){
	
	int size;
        printf("Enter the size of Array : ");
        scanf("%d",&size);

        int arr[size];
        printf("Enter the element of Array : \n");
        for(int i = 0;i < size;i++){
                scanf("%d",&arr[i]);
        }
        int retVal = reverse(arr,size);
	for(int i = 0;i < size;i++){
		printf("%d\n",arr[i]);
	}

}
