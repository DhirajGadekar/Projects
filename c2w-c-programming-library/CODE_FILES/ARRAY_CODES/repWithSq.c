


		#include<stdio.h>
		void repEleWithSq(int *arr,int n){
			if(n<=0){	//test case for 0 or -ve size array
				printf("Array of given size cannot be initialised\n");
				return;		//terminate the flow if array is invalid
			}else{
				for(int i=0;i<n;i++)
					*(arr+i)=*(arr+i)*(*(arr+i));	//just as n=n*n 
			}
		}
		void main(){
			printf("Enter array size: ");
			int size;
			scanf("%d",&size);
			int arr[size];		
			printf("Enter array elements:\n");
			for(int i=0;i<size;i++)
				scanf("%d",(arr+i));
			for(int i=0;i<size;i++)
				printf("|%d|",*(arr+i));//printing input array
			printf("\n");
			repEleWithSq(arr,size);//calling function with address and size
			for(int i=0;i<size;i++)
				printf("|%d|",*(arr+i));//printing output array
			printf("\n");
		}



