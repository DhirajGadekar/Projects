#include<stdio.h>
#include "myHeader.h"

void main(){
	
	char ch2;
	do{

	int choice,row,num;
	char ch1;
	printf("************************ MENU **************************\n");
	printf("1.NUMBER\n2.PATTERN\n3.STRING\n");
	
	printf("Enter Your Choice : ");
	scanf("%d",&choice);

	if(choice == 1){
		
		printf("1.Palindrome Number.\n2.Prime Number.\n3.Composite Number.\n4.Fibonacci Series\n5.Factorial\n");
		printf("Enter Your Choice : ");
		scanf("%d",&choice);

		switch(choice){
			
			case 1:
				printf("Enter the Number you want check : ");
				scanf("%d",&num);
				palindrome(num);
				getchar();

				printf("If you want see the code the type [Y/y] then type [N/n] : ");
				scanf("%c",&ch1);

				if(ch1 == 'Y' || ch1 == 'y'){
					
					FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Number/Palindrome.txt","r");
					
					while((ch2 = getc(fp)) != -1){
						
						printf("%c",ch2);
					}

				}else{
					
					printf("Thank For Visit.\n");
				}
				break;

			case 2:
				printf("Enter the Number you want check : ");
				scanf("%d",&num);
				primeNumber(num);
				getchar();

				printf("If you want see the code the type [Y/y] then type [N/n] : ");
				scanf("%c",&ch1);

				if(ch1 == 'Y' || ch1 == 'y'){
					
					FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Number/PrimeNum.txt","r");
					
					while((ch2 = getc(fp)) != -1){
						
						printf("%c",ch2);
					}

				}else{
					
					printf("Thank For Visit.\n");
				}
				break;
			case 3:
				printf("Enter the Number you want check : ");
				scanf("%d",&num);
				comNumber(num);
				getchar();

				printf("If you want see the code the type [Y/y] then type [N/n] : ");
				scanf("%c",&ch1);

				if(ch1 == 'Y' || ch1 == 'y'){
					
					FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Number/Composite.txt","r");
					
					while((ch2 = getc(fp)) != -1){
						
						printf("%c",ch2);
					}

				}else{
					
					printf("Thank For Visit.\n");
				}
				break;
			case 4:
				printf("Enter the Number you want check : ");
				scanf("%d",&num);
				Fibonacci(num);
				getchar();

				printf("If you want see the code the type [Y/y] then type [N/n] : ");
				scanf("%c",&ch1);

				if(ch1 == 'Y' || ch1 == 'y'){
					
					FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Number/Fibonacci.txt","r");
					
					while((ch2 = getc(fp)) != -1){
						
						printf("%c",ch2);
					}

				}else{
					
					printf("Thank For Visit.\n");
				}
				break;

			case 5:
				printf("Enter the Number you want check : ");
				scanf("%d",&num);
				Factorial(num);
				getchar();

				printf("If you want see the code the type [Y/y] then type [N/n] : ");
				scanf("%c",&ch1);

				if(ch1 == 'Y' || ch1 == 'y'){
					
					FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Number/Factorial.txt","r");
					
					while((ch2 = getc(fp)) != -1){
						
						printf("%c",ch2);
					}

				}else{
					
					printf("Thank For Visit.\n");
				}
				break;

			default : 

				printf("Invalid Choice ,Please Check Again\n");
		}
	}else if(choice == 2){
		
		printf("1.Square Pattern\n2.Half Pyramid Pattern\n3.Inverted half Pyramid Pattern\n4.Right Half Pyramid Pattern\n5.Right Inverted Half Pyramid Pattern\n6.Full Pyramid Pattern\n7.Inverted Pyramid Pattern\n8.Left Half Diamond Pattern\n9.Right Half Diamond Pattern\n10.Full Diamond Pattern\n");
	
			printf("Enter Your Choice : ");
			scanf("%d",&choice);

			switch(choice){
			
				case 1:
					printf("1.\n*  *  *  *\n*  *  *  *\n*  *  *  *\n*  *  *  *\n");
					printf("2.\n1  2  3  4\n5  6  7  8\n9 10 11 12\n13 14 15 16\n");
					printf("3.\nA  B  C  D\ne  f  g  h\nI  J  K  L\nm  n  o  p\n");
					printf("4.\n1  1  1  1\n2  2  2  2\n3  3  3  3\n4  4  4  4\n");

					printf("Enter the your Choice : ");
					scanf("%d",&choice);
					if(choice == 1){
						
					        printf("Enter the no rows : ");
        					scanf("%d",&row);

        					square_1(row);
						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Square_1.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					


					}else if(choice == 2){
						
					        printf("Enter the no of rows : ");
        					scanf("%d",&row);
        					square_2(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Square_2.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
						
					
					}else if(choice == 3){
						
					        printf("Enter the no of rows : ");
        					scanf("%d",&row);
        					square_3(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Square_3.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
						
					
					}else if(choice == 4){
						
					        printf("Enter the no of rows : ");
        					scanf("%d",&row);
        					square_4(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Square_4.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
						
					}else{
						
						printf("Invalid Choice.\n");
					}
					break;
					
				case 2:
					printf("\n1.\n1\n2  3\n4  5  6\n7  8  9  10\n");
					printf("\n2.\n1\n2  2\n3  3  3\n4  4  4  4\n");
					printf("\n3.1\n2  4\n3  6  9\n4  8  12  16\n");
					printf("\n4.\na\nb  c\nd  e  f\ng  h  i  j\n");

					printf("Enter the your Choice : ");
					scanf("%d",&choice);

					if(choice == 1){
						printf("Enter the no of rows : ");
					        scanf("%d",&row);
						hpyramid_1(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/hpyramid_1.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}

					}else if(choice == 2){

						printf("Enter the no of rows : ");
						scanf("%d",&row);
						hpyramid_2(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/hpyramid_2.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}

					}else if(choice == 3){
						printf("Enter the no of rows : ");
						scanf("%d",&row);
						hpyramid_3(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/hpyramid_3.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else if(choice == 4){
						printf("Enter the no of rows : ");
						scanf("%d",&row);
						hpyramid_4(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/hpyramid_4.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else{

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Square_4.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}
					break;

				case 3:
					printf("\n1.\n*  *  *  *\n*  *  *\n*  *\n*\n");
					printf("\n2.\n1  2  3  4\n1  2  3\n1  2\n1\n");
					printf("\n3.\na  b  c  d\na  b  c\na  b\na\n");
					printf("\n4.\nD  C  B  A\nC  B  A\nB  A\nA\n");
					
					printf("Enter the your Choice : ");
					scanf("%d",&choice);
					
					if(choice == 1){
						
						printf("Enter the no of rows : ");
						scanf("%d",&row);
						Ihpyramid_1(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Ihpyramid_1.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else if(choice == 2){
						
						printf("Enter the no of rows : ");
						scanf("%d",&row);
						Ihpyramid_2(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Ihpyramid_2.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else if(choice == 3){
						
						printf("Enter the no of rows : ");
						scanf("%d",&row);
						Ihpyramid_3(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Ihpyramid_3.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else if(choice == 4){

						printf("Enter the no of rows : ");
						scanf("%d",&row);
						Ihpyramid_4(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Ihpyramid_4.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else{

					}
					break;
				case 4:
					printf("\n1.\n         1\n      1  2\n   1  2  3\n1  2  3  4\n");
					printf("\n2.\n         4\n      3  6\n   2  4  6\n1  2  3  4\n");
					printf("\n3.\n         d\n      c  c\n   b  b  b\na  a  a  a\n");
					
					printf("Enter the your Choice : ");
					scanf("%d",&choice);
					
					if(choice == 1){
						printf("Enter the no of rows : ");
        						scanf("%d",&row);
							Rhpyramid_1(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Rhpyramid_1.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else if(choice == 2){
						printf("Enter the no of rows : ");
						        scanf("%d",&row);
							Rhpyramid_2(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Rhpyramid_2.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else if(choice == 3){
						printf("Enter the no of rows : ");
        					scanf("%d",&row);
						Rhpyramid_3(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Rhpyramid_3.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
				
					}else{
						
						printf("Invalid Choice.\n");
					}
					break;
				case 5:
					printf("\n1.\n4  3  2  1\n   3  2  1\n      2  1\n         1\n");
					printf("\n2.\n1  2  3  4\n   1  2  3\n      1  2\n         1\n");
					printf("\n3.\nD  D  D  D\n   C  C  C\n      B  B\n         A\n");
					
					printf("Enter the your Choice : ");
					scanf("%d",&choice);
					
					if(choice == 1){
    						printf("Enter the no of rows : ");
       						scanf("%d",&row);
        					IRhpyramid_1(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/IRhpyramid_1.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else if(choice == 2){
						printf("Enter the no of rows : ");
                                                scanf("%d",&row);
                                                IRhpyramid_2(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/IRhpyramid_2.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else if(choice == 3){
						printf("Enter the no of rows : ");
                                                scanf("%d",&row);
                                                IRhpyramid_3(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/IRhpyramid_3.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					
					}else{
						printf("Invalid Choice.\n");
					}
					break;
				case 6:
					printf("\n1.\n         *        \n      *  *  *     \n   *  *  *  *  *   \n*  *  *  *  *  *  *\n");
					printf("\n2.\n         4        \n      4  3  4     \n   4  3  2  3  4   \n4  3  2  1  2  3  4\n");
					printf("\n3.\n         d        \n      C  C  C     \n   b  b  b  b  b   \nA  A  A  A  A  A  A\n");
					
					printf("Enter the your Choice : ");
					scanf("%d",&choice);
					
					if(choice == 1){
						printf("Enter the no of rows : ");
        					scanf("%d",&row);
        					FPyramid_1(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/FPyramid_1.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else if(choice == 2){
						printf("Enter the no of rows : ");
                                                scanf("%d",&row);
                                                FPyramid_2(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/FPyramid_2.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else if(choice == 3){
						printf("Enter the no of rows : ");
                                                scanf("%d",&row);
                                                FPyramid_3(row);

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/FPyramid_3.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}

					}else{

					}

					break;
				case 7:
					printf("\n1.\n*  *  *  *  *  *  *\n  *  *  *  *  *  \n      *  *  *      \n         *         \n");
					printf("\n2.\n1  2  3  4  3  2  1\n  2  3  4  3  2  \n      3  4  3      \n         4         \n");
					printf("\n3.\nd  d  d  d  d  d  d\n  c  c  c  c  c  \n      b  b  b      \n         a         \n");
					
					printf("Enter the your Choice : ");
					scanf("%d",&choice);
					
					if(choice == 1){

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Square_4.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else if(choice == 2){

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Square_4.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else if(choice == 3){

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Square_4.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else{

					}
					break;
				case 8:
					printf("\n1.\n*\n*  *\n*  *  *\n*  *  *  *\n*  *  *\n*  *\n*\n");
					printf("\n2.\n1\n1  2  3\n1  2  3  4  5\n1  2  3\n1\n");
					printf("\n3.\nD\nC  D\nB  C  D\nA  B  C  D\nB  C  D\nC  D\nD\n");
					
					printf("Enter the your Choice : ");
					scanf("%d",&choice);
					
					if(choice == 1){

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Square_4.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else if(choice == 2){

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Square_4.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					}else if(choice == 3){

						printf("If you want see the code the type [Y/y] then type [N/n] : ");
						scanf(" %c",&ch1);

						if(ch1 == 'Y' || ch1 == 'y'){
					
							FILE *fp = fopen("/home/dhiraj/C_Project/Codes/Pattern/Square_4.txt","r");
					
							while((ch2 = getc(fp)) != -1){
						
								printf("%c",ch2);
							}

						}else{
					
							printf("Thank For Visit.\n");
						}
					
					}else{

					}
					break;
				
				default :


			}
		

	}else if(choice == 3){
		
		printf("1.String Copy\n2.String Concate\n3.String Length\n4.String Reverese\n5.String Upper\n6.String Lower");
		printf("Enter your Choice : ");
		scanf("%d",&choice);

		switch(choice){
			
			case 1:
				char str1[20];
        			printf("Enter the String  : ");
        			scanf("%[^\n]",str1);
				getchar();
				char str2[20];

        			mystrcpy(str2,str1);
				
        			puts(str2);
				
				printf("If you want see the code the type [Y/y] then type [N/n] : ");
				scanf("%c",&ch1);
			
				if(ch1 == 'Y' || ch1 == 'y'){
					
					FILE *fp = fopen("/home/dhiraj/C_Project/Codes/String/Strcpy.txt","r");
					
					while((ch2 = getc(fp)) != -1){
						
						printf("%c",ch2);
					}

				}else{
					
					printf("Thank For Visit.\n");
				}
				break;


		}

	}
	printf("If you still want to check the code then type [Y/y] otherwise [N/n] :  \n");
	scanf(" %c",&ch2);
	}
	while(ch2 == 'y' || ch2 == 'Y');

	printf("Thank you for cheaking the Code,\nVisit Again\n");
}
