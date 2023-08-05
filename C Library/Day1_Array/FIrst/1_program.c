#include<stdio.h>

int count_element(int arr[],int size){
	
	int flag,count = -1;

	for(int i = 0;i < size ;i++){
		flag = 0;
		for(int j = 0;j < size;j++){
			if(arr[i] < arr[j]){
				flag  = 1;
			}
		}
		
		if(flag == 1){
			count++;
		}
	}
	return count + 1;
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
	int retVal = count_element(arr,size);
	if(retVal == -1){
		printf("Element Not Found\n");
	}else{
		printf("count == %d\n",retVal);
	}

}
