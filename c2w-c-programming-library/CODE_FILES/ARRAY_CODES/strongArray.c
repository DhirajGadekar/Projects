


		#include<stdio.h>
		/* Strong number is a special number whose sum of the factorial of digits is equal to the original number.*/
		int isStrong(int num){

			int sum=0;
			int temp =num;
			while(num>0){
				int rem = num%10,fact=1;
				while(rem>0){
					fact*=rem;
					rem--;
				}
				sum+=fact;
				num/=10;
			}
			if(sum==temp){
				return 0;
			}else{
				return 1;
			}
		}
		//Grouping of Strong Number
		int strongArray(int *arr,int len){

			int count = 0;
			int *temp = arr;
			for(int i=0; i<len ; i++){
				if(isStrong(arr[i]) == 0 ){

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
				int ans = strongArray(arr,size);

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



