


		#include<stdio.h>

		int maxSubArray(int *arr, int lim) {

		int max_sum = 0;
		int current_sum = 0;

		for(int i=0; i<lim; i++) {
		current_sum = current_sum + arr[i];

		if (current_sum < 0)
			current_sum = 0;

		if(max_sum < current_sum)
			max_sum = current_sum;
		}

		return max_sum;

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

			int sum = maxSubArray(arr,size);

			printf("Sum of max sub array : %d\n",sum);

		}




