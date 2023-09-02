


		#include<stdio.h>
		
		void palindromic(int *arr,int n){
			if(n<=0){	//test case for 0 or -ve size array
				printf("Array of given size cannot be initialised\n");
				return;		//terminate the flow if array is invalid
			}else{
				int flag=0;
				int* t1=arr;	//one pointer at start of array
				int* t2=arr+n-1;//one pointer at the last element of array
				for(int i=0;i<n/2;i++) //logic just as reverse
					if(*(t1+i)!=*(t2-i)){//element checking
						flag=1;
						break;
					}
				if(flag==0)
					printf("Array is palindromic\n");
				else
					printf("Array is not palindromic\n");
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
			palindromic(arr,size);
		}



