


		#include<stdio.h>
		/*A number is said to be a Spy number if the sum of all the digits is equal to the product of all digits.Examples1412.*/
		int isSpy(int num){
			
			int s=0,p=1,d;

			for(;num>0;){

				d=num%10;
					s=s+d;
					p=p*d;
					num=num/10;
				}


				if(s==p)
					return 0;
				else
					return 1;
			
		}
		//Grouping Spy of Number
		int spyArray(int *arr,int len){

			int count = 0;
			int *temp = arr;
			for(int i=0; i<len ; i++){
				if(isSpy(arr[i]) == 0 ){

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
				int ans = spyArray(arr,size);

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



