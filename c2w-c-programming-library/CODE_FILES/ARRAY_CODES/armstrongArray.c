


		#include<stdio.h>
		/*Armstrong number is a number that is equal to the sum of cubes of its digits. 
		For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.*/
		int isArmstrong(int num){

			int count=0,temp;
			temp =num;
			while(num>0){

				num/=10;
				count++;
			}
			num=temp;
			int sum =0;
			while(num>0){
				int rem = num%10,mul=1;
				for(int i = 1; i<=count; i++){
					mul*=rem;
				}
				sum+=mul;
				num/=10;
			}
			if(sum==temp){
				return 0;
			}else{
				return 1;
			}	
		}
		//Grouping of Armstrong Number
		int armstrongArray(int *arr,int len){

			int count = 0;
			int *temp = arr;
			for(int i=0; i<len ; i++){
				if(isArmstrong(arr[i]) == 0 ){

					*(temp+count) = *(arr+i);
					count++;
				}
			}
			return count;
		}
		//Driver Code
		void main(){
			
			int len;
			//taking array size
			printf("Enter the Length of Array : \n");
			scanf("%d",&len);

			if(len>0){
			
				int arr[len];

				printf("Enter the Elements in Array : \n");
				for(int i=0; i<len; i++){
				
					scanf("%d",&arr[i]);
				}
				
				int size = sizeof(arr)/sizeof(int);
				int ans = armstrongArray(arr,size);

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


		
