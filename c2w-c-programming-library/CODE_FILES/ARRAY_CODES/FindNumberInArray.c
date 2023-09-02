


		#include<stdio.h>

		/*
			
		Prototype :
		
			int searchNumberInArray (int * arr , int lim , int snum);
		
		Parameters : 
			arr :  pointer to  array 
			lim :  limit of array
			snum : number to search in the array

		Return type:
			
			If a number present it will return the index of array where number got found
			If the in array number is not present it will return the  -1  value 

		*/

		int searchNumberInArray(int * arr , int lim , int snum ){
			// printf("searchNumberInArray\n");
			for(int i =0  ; i< lim ; i++ ){
				if(arr[i]==snum){
					return i;
				}
			}

			return -1;
		}


		void main(){
			int arr[] = {2, 3, 6, 5,9};
			int lim = sizeof(arr) / sizeof(arr[0]);
			int result = searchNumberInArray(arr , lim , 6 );

			if(result != -1){
				printf("Number is present at index %d\n",result );
			}else{
				printf("Number not is present in array \n");

			}
		}



		