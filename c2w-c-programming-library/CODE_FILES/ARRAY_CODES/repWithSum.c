


		#include<stdio.h>
		int retsum(int n){
			int sum=0;
			while(n>0){
				sum+=n%10; //reminder addition logic 
				n/=10;
			}
			return sum;//return sum holding sum of digits in no.
		}
		void repEleWithSum(int *arr,int n){
			if(n<=0){
				printf("Array of given size cannot be initialised\n");
				return;
			}else{
				for(int i=0;i<n;i++)
					*(arr+i)=retsum(*(arr+i));//calling function for each element.
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
			repEleWithSum(arr,size);	//repEleWithSum function call
			for(int i=0;i<size;i++)
				printf("|%d|",*(arr+i));//printing output array

		}


		
