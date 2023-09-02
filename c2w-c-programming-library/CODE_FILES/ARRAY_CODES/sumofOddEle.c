


		#include<stdio.h>

		int sumofOddEle(int *arr, int lim) {

				int sum = 0;

				for(int i = 0; i<=lim; i++){

						if(arr[i]%2!=0) {

								sum = sum + arr[i];

						}

				}

				return sum;

		}

		void main() {

				printf("Enter size: \n");
				int lim;
				scanf("%d",&lim);
				int arr[lim];

				for(int i = 0; i<lim; i++) {

						scanf("%d",&arr[i]);

				}

				int sum = sumofOddEle(arr,lim);
				printf("Sum of odd elements: %d\n",sum);

		}



