


		#include<stdio.h>

		int min(int num1, int num2) {

			return (num1 > num2) ? num2 : num1;

		}

		int findMin(int *arr, int lim) {

			int res = arr[0];
			for (int i = 1; i < lim; i++)
				res = min(res, arr[i]);
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

			int minimum = findMin(arr,size);

			printf("Minimum ele from array is %d\n",minimum);

		}



