

	
	#include<stdio.h>
	int power(int num, int index)
	{

   	int pow = 1;

    	for (int i = 0; i < index; i++)
        	pow = pow * num;

	    return pow;
	}
	void automorphicRange(int start, int end){
   	int flag = 0;
  	for(int i = start ; i<=end; i++){
        	int pow = power(i, 2);

        int tempPow = pow;
        int tempNum = i;
        int rev = 0;
        int mult = 1;

        while (tempNum != 0){
            rev = (rev + (mult * (tempPow % 10)));
            tempNum = tempNum / 10;
            tempPow = tempPow / 10;
            mult = mult * 10;
        }

        if (rev == i){
            flag = 1;
            printf("%d is a Automorphic Number\n",i);
	 }
	 }
    	if(flag == 0){
		printf("No abundant number present between given range\n");
	}

	}
	void main(){
    	int start;
    	int end;
    	printf("Enter starting num:\n");
  	scanf("%d",&start);
    	printf("Enter ending num:\n");
    	scanf("%d",&end);
    	automorphicRange(start,end);

	}
	
	
	
