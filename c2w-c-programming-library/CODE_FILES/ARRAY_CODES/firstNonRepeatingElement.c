


		#include<stdio.h>

		/*

		Prototype :

			arr : Pointer to an local array 
			n : 
		Parameters : 
			
			int * arr  :  pointer to an array
			int lim    :  limit of the array 

		Return type : 
			return the index of first non-reapeting character 
			from the array 
			if the no elements unique the it will return the -1 index 
			
		*/

		int firstNonRepeating(int *arr ,int n){
			// Loop for checking each element
			for (int i = 0; i < n; i++) {
				int j;
				// Checking if ith element is present in array
				for (j = 0; j < n; j++)
					if (i != j && arr[i] == arr[j])
						break;
				// if ith element is not present in array
				// except at ith index then return element
				if (j == n)
					return i;
			}
			return -1;
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

			int p = firstNonRepeating(arr , lim );
			if(p==-1){
			printf("\n No unique element present in the array \n");
			}else{

			printf("\n%d is the peak element in the array  \n",arr[p]);
			}

		}


		