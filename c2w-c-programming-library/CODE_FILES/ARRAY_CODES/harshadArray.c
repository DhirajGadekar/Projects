


		#include<stdio.h>
		/* An integer number in base 10 which is divisible by the sum of its digits is said to be a Harshad Number.*/
		int isHarshad(int num){

			int sum = 0,temp=num, rem=0;
			while(temp>0){

				rem = temp%10;
				temp=temp/10;

				sum+=rem;
			}
			if(num%sum==0){
				return 0;
			}else{
				return 1;
			}
		}
		//Grouping of Harshad Number
		int harshadArray(int *arr,int len){

			int count = 0;
			int *temp = arr;
			for(int i=0; i<len ; i++){
				if(isHarshad(arr[i]) == 0 ){

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
				int ans = harshadArray(arr,size);

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



