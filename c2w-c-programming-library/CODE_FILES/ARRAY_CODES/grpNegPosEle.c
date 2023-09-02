


        #include<stdio.h>

        void swap(int *x, int *y)
        {
            int temp;
            temp = *x;
            *x = *y;
            *y = temp;
        }

        void grpNegPosEle(int *arr, int lim)
        {
            int i, j, min_in;
            for(i = 0; i < lim - 1; i++)
            {
                min_in = i;
                for(j = i + 1; j < lim; j++)
                {
                    if(arr[j] < arr[min_in])
                    {
                        min_in = j;
                    }
                }
                swap(&arr[min_in], &arr[i]);
            }
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

            grpNegPosEle(arr,size);

            printf("After grouping all negative elements : \n");

            for(int i = 0; i<size; i++) {
            
                printf("%d\n",arr[i]);
            
            }

        }



