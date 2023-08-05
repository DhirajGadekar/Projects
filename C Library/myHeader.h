void comNumber(int num){
        int count = 0;

        if(num > 0){

                for(int i = 1;i <= num;i++){

                        if(num % i == 0){
                                count++;
                        }
                }
                if(count > 2){

                        printf("%d is the Composite Number.\n",num);
                }else{

                        printf("%d is Not Composite Number.\n",num);
                }
        }else{

                printf("Invalid Input.\n");
        }

}

void palindrome(int num){

        int sum = 0,rem,temp;
        temp = num;
        while(num != 0){

                rem = num % 10;
                sum = (sum * 10) + rem;
                num = num / 10;

        }
        if(temp == sum){

                printf("%d is Palindrome Number\n",sum);
        }else{

                printf("%d is Not Palindrome Number.\n",sum);
        }

}

void primeNumber(int num){
        int count = 0;

        if(num > 0){

                for(int i = 1;i <= num;i++){

                        if(num % i == 0){
                                count++;
                        }
                }
                if(count == 2){

                        printf("%d is the Prime Number.\n",num);
                }else{

                        printf("%d is Not Prime Number.\n",num);
                }
        }else{

                printf("Invalid Input.\n");
        }

}

void Factorial(int num){
        int sum = 1;

        if(num > 0){

                for(int i = 1;i <= num;i++){

                        sum = sum * i;

                }
                printf("Factorial of %d is %d.\n",num,sum);
        }else{

                printf("Factorial of %d is %d.\n",num,num);
        }

}

void Fibonacci(int num){
        int n1 = 0,n2 = 1,next = 0;

        if(num > 0){

                printf("Fibonacci Series : %d, %d, ",n1,n2);
                next = n1 + n2;
                while(next <= num){

                        printf("%d, ",next);
                        n1 = n2;
                        n2 = next;
                        next = n1 + n2;

                }
                printf("\n");
        }else{

                printf("Invalid Number.\n");
        }

}

char* mystrcpy(char *dest,char *src){

        while(*src != '\0'){

                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';

}

void square_1(int row){

        for(int i = 1;i <= row;i++){
                for(int j = 1;j <= row;j++){

                        printf("*  ");

                }
                printf("\n");
        }


}

void square_2(int row){
        int x = 1;
        for(int i = 1;i <= row;i++){

                for(int j = 1;j <= row;j++){

                        printf("%d\t",x);
                        x++;
                }
                printf("\n");
        }

}
void square_3(int row){
        char ch = 'A';
        for(int i = 1;i <= row;i++){

                for(int j = 1;j <= row;j++){

                        if(i % 2 != 0){

                                printf("%c\t",ch);
                                ch++;

                        }else{
                                printf("%c\t",ch + 32);
                                ch++;
                        }
                }
                printf("\n");
        }

}

void square_4(int row){
        int x = 1;
        for(int i = 1;i <= row;i++){

                for(int j = 1;j <= row;j++){

                        printf("%d\t",x);
                }
                x++;
                printf("\n");
        }

}
void hpyramid_1(int row){
        int x = 1;
        for(int i = 1;i <= row;i++){

                for(int j = 1;j <= i;j++){

                        printf("%d\t",x);
                        x++;
                }

                printf("\n");
        }

}

void hpyramid_2(int row){
        int x = 1;
        for(int i = 1;i <= row;i++){

                for(int j = 1;j <= i;j++){

                        printf("%d\t",x);

                }
                x++;
                printf("\n");
        }

}
void hpyramid_3(int row){
        int x;
        for(int i = 1;i <= row;i++){
                x = 1;
                for(int j = 1;j <= i;j++){

                        printf("%d\t",x * i);
                        x++;
                }

                printf("\n");
        }

}
void hpyramid_4(int row){
        char x = 'a';
        for(int i = 1;i <= row;i++){

                for(int j = 1;j <= i;j++){

                        printf("%c\t",x);
                        x++;
                }

                printf("\n");
        }

}
void Ihpyramid_1(int row){

        for(int i = 1;i <= row;i++){

                for(int j = row;j >= i;j--){

                        printf("*\t");

                }

                printf("\n");
        }

}
void Ihpyramid_2(int row){
        int x;
        for(int i = 1;i <= row;i++){
                x = 1;
                for(int j = row;j >= i;j--){

                        printf("%d\t",x);
                        x++;

                }

                printf("\n");
        }

}
void Ihpyramid_3(int row){
        char ch;
        for(int i = 1;i <= row;i++){
                ch = 'a';
                for(int j = row;j >= i;j--){

                        printf("%c\t",ch);
                        ch++;

                }

                printf("\n");
        }

}
void Ihpyramid_4(int row){
        char ch;
        for(int i = 1;i <= row;i++){
                ch = 'A';
                for(int j = row;j >= i;j--){

                        printf("%c\t",ch + j - 1);

                }

                printf("\n");
        }

}
void Rhpyramid_1(int row){
        int x;
        for(int i = 1;i <= row;i++){
                x = 1;
                for(int k = row;k > i;k--){

                        printf(" \t");
                }
                for(int j = 1;j <= i;j++){

                        printf("%d\t",x);
                        x++;
                }

                printf("\n");
        }

}
void Rhpyramid_2(int row){
        int x = row;
        for(int i = 1;i <= row;i++){

                for(int k = row;k > i;k--){

                        printf(" \t");
                }
                for(int j = 1;j <= i;j++){

                        printf("%d\t",x * j);

                }
                x--;
                printf("\n");
        }

}
void Rhpyramid_3(int row){
        char ch = 96 + row;
        for(int i = 1;i <= row;i++){

                for(int k = row;k > i;k--){

                        printf(" \t");
                }
                for(int j = 1;j <= i;j++){

                        printf("%c\t",ch);

                }
                ch--;
                printf("\n");
        }

}
void IRhpyramid_1(int row){
        int x;
        for(int i = 1;i <= row;i++){
                x = row + 1 - i;
                for(int k = 1;k < i ;k++){

                        printf(" \t");
                }
                for(int j = row;j >= i;j--){

                        printf("%d\t",x);
                        x--;
                }

                printf("\n");
        }

}
void IRhpyramid_2(int row){
        int x;
        for(int i = 1;i <= row;i++){
                x = 1;
                for(int k = 1;k < i ;k++){

                        printf(" \t");
                }
                for(int j = row;j >= i;j--){

                        printf("%d\t",x);
                        x++;
                }

                printf("\n");
        }

}
void IRhpyramid_3(int row){
        char ch = 64 + row;
        for(int i = 1;i <= row;i++){

                for(int k = 1;k < i ;k++){

                        printf(" \t");
                }
                for(int j = row;j >= i;j--){

                        printf("%c\t",ch);

                }
                ch--;
                printf("\n");
        }

}
void FPyramid_1(int row){

        for(int i = 1;i <= row;i++){

                for(int sp = row;sp>i;sp--){

                        printf ("   ");
                }

                for(int j = 1;j <= 2 * i - 1;j++){

                        printf ("*  ");
                }

                printf ("\n");
        }
}
void FPyramid_2(int row){
        int x;
        for(int i = 1;i <= row;i++){
                x = row;
                for(int sp = row;sp>i;sp--){

                        printf ("   ");
                }

                for(int j = 1;j <= 2 * i - 1;j++){

                        if(j < i){
                                printf("%d  ",x);
                                x--;
                        }else{
                                printf("%d  ",x);
                                x++;
                        }
                }

                printf ("\n");
        }
}
void FPyramid_3(int row){
        char ch = 64 + row;
        for(int i = 1;i <= row;i++){

                for(int sp = row;sp>i;sp--){

                        printf ("   ");
                }

                for(int j = 1;j <= 2 * i - 1;j++){

                        if(i % 2 == 0){
                                printf("%c  ",ch);

                        }else{
                                printf("%c  ",ch + 32);

                        }
                }
                ch--;
                printf ("\n");
        }
}

