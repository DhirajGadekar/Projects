


		#include<stdio.h>
		/* A number is called Automorphic number if and only if its square ends in the same digits as the number itself.*/
		int isAutomorphic(int num){

			int count=0,temp=num;
				while(num>0){
						count++;
						num/=10;
				}
				num=temp;
				int sq = num*num,num2=0;
				while(count>0){
						num2=(num2*10)+(sq%10);
						sq/=10;
						count--;
				}
				int rev = 0;
				while(num2>0){
						rev=(rev*10)+(num2%10);
						num2/=10;
				}
				if(rev==num){
						return 0;
				}else{
						return 1;
				}
		}
		//Grouping of Automorphic Number
		int automorphicArray(int *arr,int len){

			int count = 0;
			int *temp = arr;
			for(int i=0; i<len ; i++){
				if(isAutomorphic(arr[i]) == 0 ){

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
				int ans = automorphicArray(arr,size);

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



