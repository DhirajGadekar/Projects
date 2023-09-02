


		#include<stdio.h>
		int arrayProduct(int *arr,int n){
			if(n<=0){	//test case for 0 or -ve size array
				printf("Array of given size cannot be initialised\n");
				return -1;		//terminate the flow if array is invalid
			}else{
				int prod=1;
				for(int i=0;i<n;i++)	
					prod *= *(arr+i);	//just as prod=prod*i
				return prod;	//return product of the elements
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
			printf("Sum of elements having odd index is : %d\n",arrayProduct(arr,size));//calling function with address and size
		}



