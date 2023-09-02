


		#include<stdio.h>

		// A palindrome number is a number that remains the same when digits are reversed. For example, the number 12321 is a palindrome number.
		int isPalindrome(int num){
				int temp = num;
			int rev=0;
			while(num>0){
				rev=(rev*10) + (num%10);
				num/=10;
			}
			if(rev==temp){
				return 0;
			}else{
				return 1;
			}
		}

		// Grouping of Palindrome Number
		int palindromeArray(int *arr,int len){

			int count = 0;
			int *temp = arr;
			for(int i=0; i<len ; i++){
				if(isPalindrome(arr[i]) == 0 ){

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
				int ans = palindromeArray(arr,size);

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


