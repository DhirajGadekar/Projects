


		#include<stdio.h>

		// Reversing a number means that the digit at the first position should be swapped with the last digit, the second digit will be swapped with the second last digit, and so on till the middle element.
		int revNumber(int num){
			int rev=0;
			while(num>0){
				rev=(rev*10)+(num%10);
				num/=10;
			}
			return rev;
		}

		// Replacing elements with theis reverse number .
		int revNumberArray(int *arr,int len){

			for(int i=0; i<len ; i++){

				*(arr+i) = revNumber(*(arr+i));
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
				int ans = revNumberArray(arr,size);

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



