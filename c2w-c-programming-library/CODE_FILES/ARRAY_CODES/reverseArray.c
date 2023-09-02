


		#include <stdio.h>

		/*
		Prototype :

			void reverseArray(int * arr , int lim );
			
			This function takes array address and array limit as input
			and revers the array  

		Parameters: 
			
			int * arr : pointer to array 
			int lim : limit of array
		
		Return type : 

			Returns nothing 

		*/

		void reverseArray(int * arr , int lim ){
			// printf("reverseArray\n");

			for(int i=0 ; i<=lim/2 ; i++){
			int t = arr[i];
			arr[i]=arr[lim-i-1];
			arr[lim-i-1]=t;
			}

		}
		void main(){

			int lim ; 
			printf("Arrray Size : \n");
			scanf("%d",&lim);

			int arr[lim];
			for(int i=0 ; i<lim ; i++ ){
			printf("Enter Data At Index %d : ",i );
			scanf("%d",&arr[i]);
			}

			printf("INPUT ARRAY :\n");
			for(int i=0 ; i< lim ; i++ ){
			printf(" %d ",arr[i]);
			}

			reverseArray(arr , lim);
			printf("\n\nOUTPUT ARRAY :\n");

			for(int i=0 ; i< lim ; i++ ){
			printf(" %d ",arr[i]);
			}

		}


		