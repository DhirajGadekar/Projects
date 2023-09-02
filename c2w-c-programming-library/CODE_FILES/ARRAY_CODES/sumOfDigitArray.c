


		#include<stdio.h>

		// to calculate sum of respective number
		int sumDigits(int num){
			int sum=0;
			while(num>0){
				sum+=(num%10);
				num/=10;
			}
			return sum;
		}

		// Replacing elements with theis sum of digits . 
		int sumOfDigitArray(int *arr,int len){

			for(int i=0; i<len ; i++){
				*(arr+i) = sumDigits(*(arr+i));
			}
			return len;
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
				int ans = sumOfDigitArray(arr,size);

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



