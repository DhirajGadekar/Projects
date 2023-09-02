


		#include<stdio.h>
		/* A Duck number is a positive number which has zeroes present in it, For example 3210, 8050896, 70709 are all Duck numbers.*/
		int isDuck(int num){

			int flag=0;
			int temp =num;
			while(num>0){
				if(num%10==0){
					flag=1;
					break;
				}
				num/=10;
			}

			if(flag==0){
				return 1;
			}else{
				return 0;
			}
		}
		//Grouping of Duck Number
		int duckArray(int *arr,int len){

			int count = 0;
			int *temp = arr;
			for(int i=0; i<len ; i++){
				if(isDuck(arr[i]) == 0 ){

					*(temp+count) = *(arr+i);
					count++;
				}
			}
			return count;
		}
		//Driver Code
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
				int ans = duckArray(arr,size);

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



