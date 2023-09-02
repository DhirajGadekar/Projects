


		#include<stdio.h>

		//  Perfect number, a positive integerthat is equal to the sum of its proper divisors. The smallest perfect number is 6, which is the sum of 1, 2, and 3.
		int isPerfect(int num){
			int sum=0;
			for(int i=1; i<=num/2; i++){
				if(num%i==0){
					sum+=i;
				}
			}
			if(sum==num){
				return 0;
			}else{
				return 1;
			}
		}

		//Grouping of Perfect Number
		int perfectArray(int *arr,int len){

			int count = 0;
			int *temp = arr;
			for(int i=0; i<len ; i++){
				if(isPerfect(arr[i]) == 0 ){

					*(temp+count) = *(arr+i);
					count++;
				}
			}
			return count;
		}

		// Driver Code
		void main(){

			int len;
			printf("Enter the Length of Array : \n");
			scanf("%d",&len);

			if(len>0){
			
				int arr[len];

				printf("Enter the Elements in Array : \n");
				for(int i=0; i<len; i++){
				
					scanf("%d",&arr[i]);
				}
				
				int size = sizeof(arr)/sizeof(int);
				int ans = perfectArray(arr,size);

				if(ans>0){
					printf("Printing the Output Array : \n");
					for(int i=0; i<ans; i++){
				
						printf("%d\t",arr[i]);
					}
					printf("\n");
				}else{
				
					printf("No Element Found in Array \n");
				}

			}else{
			
				printf("Enter the Valid Length of Array");
			}
		}



