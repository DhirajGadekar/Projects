


        #include <stdio.h>
        
        int getPairsCount(int arr[], int n, int sum)
        {
            int count = 0; 

            for (int i = 0; i < n; i++)
                for (int j = i + 1; j < n; j++)
                    if (arr[i] + arr[j] == sum)
                        count++;
        
            return count;
        }
        
        int main()
        {
                printf("Enter size of an array : \n");
                int size;
                scanf("%d",&size);

                int arr[size];

                printf("Enter elements in array:\n");

                for(int i = 0; i<size; i++) {

                        scanf("%d",&arr[i]);

                }

            printf("Enter target sum:\n");
                int sum;
            scanf("%d",&sum);

            printf("Count of pairs is %d\n",getPairsCount(arr, size, sum));
                return 0;
        }



