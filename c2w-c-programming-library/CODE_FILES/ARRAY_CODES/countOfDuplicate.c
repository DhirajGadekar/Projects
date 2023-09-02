


        #include <stdio.h>  
        
        int main() {  
            int inputArray[100];  
            int i, j, elementCount, count = 0;  
        
            printf("Enter Number of Elements in Array\n");
            scanf("%d", &elementCount);
            printf("Enter %d numbers\n", elementCount);
            
            for(i = 0; i < elementCount; i++){
                scanf("%d", &inputArray[i]);
            }
        
        
            for(i = 0; i < elementCount ; i++) {  
                for(j = i+1; j < elementCount; j++) {    
                    if(inputArray[i]==inputArray[j]) {
                        count++;  
                        break;  
                    }  
                }  
            }  
        
            printf("Duplicate Element Count : %d\n", count);  
        
            return 0;  
        }



