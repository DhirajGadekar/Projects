


	#include<stdio.h>
	void main(){

		int num;
		printf("Enter a num : ");
		scanf("%d", &num);

		int n1 = 0, n2 = 1;
		int nextNum = 0;

		for(int i = 3; i<=num ; i++){
			printf("%d ",nextNum);
			n1 = n2;
			n2 = nextNum;
			nextNum= n1 + n2;
			if(nextNum > num){
				break;
			}
	
		}
		printf("\n");
	}
	
	

