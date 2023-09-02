


		#include<stdio.h>
		/* A number is called Disarium if sum of its digits powered with their respective positions is equal to the number itself*/
		int isDisarium(int num){

			int count=0,sum=0;
			int temp=num;
			while(num>0){
				count++;
				num/=10;
			}
			num =temp;
			
			while(num>0){
				int rem = num%10,mul=1;
				for(int i=1; i<=count; i++){
					mul*=rem;
				}
				sum+=mul;
				count--;
				num/=10;
			}
			if(sum == temp){
				return 0;
			}else{
				return 1;
			}
		}
		//Grouping of Disarium Number
		int disariumArray(int *arr,int len){

			int count = 0;
			int *temp = arr;
			for(int i=0; i<len ; i++){
				if(isDisarium(arr[i]) == 0 ){

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
				int ans = disariumArray(arr,size);

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



