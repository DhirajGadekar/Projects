


		#include <stdio.h>
		/*

		Prototype :

			void deleteNumberFromArray(int * arr , int lim , int dnum );

			this function delete first occurrence of the number from the array 

		Parameters : 
			
			int * arr  :  pointer to an array
			int lim    :  limit of the array
			int dnum   :  delete first occurrence from the array  

		Return type : 

			return the new limit of the array after deleting the given number


		*/
		int deleteNumberFromArray(int * arr , int lim , int dnum ){
			// printf("deleteNumberFromArray\n");

			int i=0;
			int flag=0;

			for( i = 0 ;  i < lim ; i++ ){
			if(arr[i]==dnum){
				flag=1;
				break;

			}
			}

			for(;i<lim ; i++ ){
			arr[i]=arr[i+1];
			}

			if(flag==1){

			return --lim;
			}
			return lim;
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

			int t;
			printf("\nEnter Number to delete : ");
			scanf("%d",&t);

			lim = deleteNumberFromArray(arr , lim , t );
			printf("\n\nOUTPUT ARRAY :\n");

			for(int i=0 ; i< lim ; i++ ){
			printf(" %d ",arr[i]);
			}

		}


		