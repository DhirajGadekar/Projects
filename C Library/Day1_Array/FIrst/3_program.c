#include<stdio.h>

int rev_range(int arr[],int size,int B,int C){
	int x = 0;
	while(B < C){
		x = arr[B];
		arr[B] = arr[C];
		arr[C] = x;
		B++;
		C--;
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
	int B,C;
	printf("Enter the Range B and C : ");
	scanf("%d%d",&B,&C);
        int retVal = rev_range(arr,size,B,C);
	
	for(int i  = 0;i < size;i++){
		printf("%d\n",arr[i]);
	}
}
