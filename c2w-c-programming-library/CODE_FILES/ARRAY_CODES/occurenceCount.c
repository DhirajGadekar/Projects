


		#include<stdio.h>

		int countOccurrences(int *arr, int lim, int target)
		{
		int res = 0;
		for (int i=0; i<lim; i++)
				if (target == arr[i])
				res++;
		return res;
		}

		void main() {

				printf("Enter size of an array : \n");
				int size;
				scanf("%d",&size);

				int arr[size];

				printf("Enter elements in array:\n");

				for(int i = 0; i<size; i++) {

						scanf("%d",&arr[i]);

				}

				printf("Enter target element you want to search:\n");
				int target;
				scanf("%d",&target);

				int res = countOccurrences(arr,size,target);

				printf("Count of target element is: %d\n",res);

		}



