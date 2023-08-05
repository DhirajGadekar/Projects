#include<stdio.h>

int good_pair(int arr[],int size,int B){
	
	for(int i = 0 ;i < size;i++){
		for(int j = i+1; j < size;j++){
			if( arr[i] + arr[j] == B){
				return 1;
			}
		}
	}
	return 0;
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
	int B;
	printf("Enter the B elemet : ");
	scanf("%d",&B);

        int retVal = good_pair(arr,size,B);
	if(retVal == 1){
		printf("Good Pair\n");
	}else{
		printf("Not Good Pair\n");
	}
}
