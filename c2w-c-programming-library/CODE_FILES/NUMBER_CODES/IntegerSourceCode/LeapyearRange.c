


	#include<stdio.h>

	int main(){

		int startYear;
		printf("Enter the year to start the leap years:\n");
		scanf("%d",&startYear);

		if(startYear<0){

			printf("Invalid input\n");
			return 0;
		}

		int endYear;
		printf("Enter the to end the leap year:\n");
		scanf("%d",&endYear);

		if(endYear<0){

		printf("Invalid inpit\n");
		return 0;

		}
		int flag = 0;

		printf("Leap Years between %d to %d are:\n",startYear,endYear);

		for(int i=startYear; i<=endYear; i++){
		if((i%4==0) && (i%100!=0) ||(i%400==0)){
			flag = 1;

			printf("%d\n",i);
		}
	
		}
		if(flag == 0)
		printf("No leap year present between given range\n");

	}
	
	
		
