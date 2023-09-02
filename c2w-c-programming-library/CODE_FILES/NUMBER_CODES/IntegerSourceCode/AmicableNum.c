


	#include<stdio.h>
	
	int main(){

	int FirstDivisorSum=0;
	int SecondDivisorSum=0;
        
	
	int firstnumber;
	printf("Enter the number1 :\n");
	scanf("%d",&firstnumber);

	
	if(firstnumber<0){

		printf("Invalid input\n");
		return 0;

	}

	int secondnumber;
	printf("Enter the number2 :\n");
	scanf("%d",&secondnumber);

	if(secondnumber<0){

		printf("Invalid input\n");
		return 0;
	}

	for(int i=1; i<firstnumber; i++){

		if(firstnumber%i==0){

			FirstDivisorSum=FirstDivisorSum+i;

		}
	}
	for(int j=1; j<secondnumber; j++){

		if(secondnumber%j==0){

			SecondDivisorSum=SecondDivisorSum+j;

		}

	}

	if((firstnumber==SecondDivisorSum) && (secondnumber==FirstDivisorSum)){

		printf("%d and %d are amicable number\n",firstnumber,secondnumber);

	}
	else{
		printf("%d and %d are not amicable number\n",firstnumber,secondnumber);

	}

	}




