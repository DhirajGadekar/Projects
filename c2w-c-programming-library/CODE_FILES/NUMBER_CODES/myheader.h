// Max Digit

int maxDigit(num){

	int max=0;
	while(num){
	
		if(max<num%10){
		
			max=num%10;
		}
		num/=10;
	}

	return max;
}

// Even Number

int even(int num){

	if(num%2==0){
	
		return 1;
	
	}else{
		
		return 0;	
	}
}

// Digit Search

int digitSearch(int num){

	int search;
	printf("Enter number to search: ");
	scanf("%d",&search);
	int flag=0;

	while(num){

		int rem=num%10;
		if(search==rem){
			
			flag=1;	
			break;
		
		}else{
		
			flag=0;
		}
		num/=10;
	}

	if(flag==1){
	
			return 1;

	}else{
			return 0;
	}
}

// product of Digit 

int prodofDigits(int num){

	int rem,prod=1;

	while(num){
	
		rem=num%10;
		prod=prod*rem;
		num/=10;
	}
	return prod;
}

// even range

char* evenRange(int start,int end){

        strcpy(str2,"The even Numbers are: ");

        for(int i=start;i<=end;i++){

                int ret=even(i);

                if(ret==1){

                        flag=1;
                        sprintf(str1,"%d ",i);
                        concat(str2,str1);

                }

        }

        if(flag==0){

                sprintf(str2,"Not present even number in given range");
        }
}

// LCM

int lcm(int num1,int num2){

        int lcm,x=1,y;

        if(num1>num2){

                lcm=num1;
        }else{

                lcm=num2;
        }

        y=lcm;

        while(1){

                if(y%num1==0 && y%num2==0){

                        x=y;
                        break;
                }

        y+=lcm;

        }
        return x;

}

// even digit sum

int evenDigit(int num){

        int sum=0;

        while(num){

                int rem =num%10;

                if(rem%2==0){

                        sum+=rem;
                }
                num/=10;
        }

        return sum;
}

// odd digit sum

int oddDigit(int num){

        int sum=0;

        while(num){

                int rem =num%10;

                if(rem%2!=0){

                        sum+=rem;
                }
                num/=10;
        }

        return sum;
}


