


      #include <stdio.h>

      void rotate(int arr[], int n)
      {
         int x = arr[n-1], i;
         for (i = n-1; i > 0; i--)
            arr[i] = arr[i-1];
         arr[0] = x;
      }

      int main(){

            printf("Enter size of an array : \n");
            int size;
            scanf("%d",&size);

            int arr[size];

            printf("Enter elements in array:\n");

            for(int i = 0; i<size; i++) {

                     scanf("%d",&arr[i]);

            }

         rotate(arr, size);

         printf("\nRotated array is\n");
         for (int i = 0; i < size; i++)
            printf("%d ", arr[i]);

         printf("\n"); 
         return 0;
      }



