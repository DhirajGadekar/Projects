


		#include<stdio.h>

		int avgOfEle(int *arr, int lim){

			int sum = 0;
			
			for(int i = 0; i<lim; i++) {
			
				sum = sum + arr[i];
			
			}

			float avg = sum/lim;

			return avg;

		}

		void main() {

			int size = 5;

			int arr[5] = {1,2,3,4,5};

			float avg = avgOfEle(arr,size);

			printf("%f",avg);

		}



