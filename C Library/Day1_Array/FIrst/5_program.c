#include<stdio.h>

int rotate_arr(int arr[],int size,int rot){
	
	while(rot){
		int x = arr[size-1];
		for(int i = size  - 1;i > 0;i--){
			arr[i] = arr[i - 1];
		}
		arr[0] = x;
		rot--;
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
	int rot;
	printf("Enter the rotation : ");
	scanf("%d",&rot);
        int retVal = rotate_arr(arr,size,rot);
	
	for(int i = 0;i < size;i++){
		printf("%d\n",arr[i]);
	}
}
