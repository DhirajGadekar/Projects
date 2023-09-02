
char str1[50000];
char str2[50000];
int flag = 0;
int slashn = 0;

// String concat

void rmComma(char *str1, char *str2)
{
    while (*str1 != '\0')
        str1++;
    str1 -= 2;
    *str1 = '.';
    slashn = 0;
}

void concat(char *str1, char *str2)
{

    slashn++;
    while (*str1 != '\0')
    {
        str1++;
    }
    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    if (slashn == 8)
    {
        *str1 = '\n';
        str1++;
        slashn = 0;
    }
    *str1 = '\0';
    // return str1;
}

// Abundant
int abundant(int num)
{

    int sum = 0;

    for (int i = 1; i <= num / 2; i++)
    {

        if (num % i == 0)
        {

            sum = sum + i;
        }
    }

    if (sum > num)
    {

        return 1;
    }
    else
    {

        return 0;
    }
}
char *abundantRange(int start, int end)
{
    // strcpy(str2, "The Abundant Numbers are:");
    str2[0] = '\0';
    for (int i = start; i <= end; i++)
    {

        int ret = abundant(i);
        if (ret == 1)
        {
            flag = 1;
            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {
        sprintf(str2, "-1");
    }
    flag = 0;
    return str2;
}

// power
int power(int num, int index)
{

    int pow = 1;

    for (int i = 0; i < index; i++)
        pow = pow * num;

    return pow;
}

// Armstrong
int isArmstrong(int num)
{

    int temp = num;
    int temp1 = num;
    int count = 0;
    int power = 1;
    int sum = 0;

    while (temp1 != 0)
    {

        temp1 = temp1 / 10;
        count++;
    }

    while (temp != 0)
    {

        for (int i = 0; i < count; i++)
        {

            power = power * (temp % 10);
        }

        sum = sum + power;
        temp = temp / 10;
        power = 1;
    }

    if (num == sum)
    {

        return 1;
    }
    else
    {

        return 0;
    }
}

char *armstrongRange(int start, int end)
{
    // strcpy(str2, "The Armstrong Numbers are:");

    str2[0] = '\0';
    for (int i = start; i <= end; i++)
    {

        int ret = isArmstrong(i);
        if (ret == 1)
        {
            flag = 1;
            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {
        sprintf(str2, "-1");
    }
    flag = 0;
    return str2;
}

// Deficient
int deficient(int num)
{

    int sum = 0;

    for (int i = 1; i <= num / 2; i++)
    {

        if (num % i == 0)
        {

            sum = sum + i;
        }
    }

    if (sum < num)
    {

        return 1;
    }
    else
    {

        return 0;
    }
}
char *deficientRange(int start, int end)
{
    // strcpy(str2, "The Deficient Numbers are:");
    str2[0] = '\0';

    for (int i = start; i <= end; i++)
    {

        int ret = deficient(i);
        if (ret == 1)
        {
            flag = 1;
            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {
        sprintf(str2, "-1");
    }
    flag = 0;
    return str2;
}

// Digit count

int digitCount(int num)
{
    int count = 0;
    while (num != 0)
    {

        count++;
        num = num / 10;
    }
    return count;
}

// factorial
long factorial(int num)
{

    long fact = 1;

    for (int i = 1; i <= num; i++)
    {

        fact = fact * i;
    }

    return fact;
}

// integer Reverse
int intReverse(int num)
{

    int temp = num;
    int rev = 0;

    while (temp != 0)
    {

        rev = ((rev * 10) + (temp % 10));
        temp = temp / 10;
    }

    return rev;
}

// Palindrome
int palindrome(int num)
{

    int rev = intReverse(num);
    if (num == rev)
    {

        return 1;
    }
    else
    {

        return 0;
    }
}

char *palindromeRange(int start, int end)
{
    // strcpy(str2, "The Palindrome Numbers are:");
    str2[0] = '\0';

    for (int i = start; i <= end; i++)
    {

        int ret = palindrome(i);
        if (ret == 1)
        {
            flag = 1;
            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {
        sprintf(str2, "-1");
    }
    flag = 0;
    return str2;
}

// Perfect Number
int perfect(int num)
{

    int sum = 0;

    for (int i = 1; i <= num / 2; i++)
    {

        if (num % i == 0)
            sum = sum + i;
    }

    if (sum == num)
    {

        return 1;
    }
    else
    {

        return 0;
    }
}

char *perfectRange(int start, int end)
{

    // strcpy(str2, "The Perfect Numbers are:");
    str2[0] = '\0';

    for (int i = start; i <= end; i++)
    {

        int ret = perfect(i);
        if (ret == 1)
        {
            flag = 1;
            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {
        sprintf(str2, "-1");
    }
    flag = 0;
    return str2;
}

// Prime Number
int isPrime(int num)
{

    if (num < 2)
        return 0;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}
char *primeRange(int start, int end)
{

    // strcpy(str2, "The Prime Numbers are:");
    str2[0] = '\0';

    for (int i = start; i <= end; i++)
    {

        int ret = isPrime(i);
        if (ret == 1)
        {
            flag = 1;

            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {
        sprintf(str2, "-1");
    }
    flag = 0;
    return str2;
}

// Strong Number
int isStrong(int num)
{

    int temp = num;
    long sum = 0;

    while (temp != 0)
    {

        sum = sum + factorial(temp % 10);
        temp = temp / 10;
    }

    if (sum == num)
    {

        return 1;
    }
    else
    {

        return 0;
    }
}

char *strongRange(int start, int end)
{
    // strcpy(str2, "The Strong Numbers are:");
    str2[0] = '\0';

    for (int i = start; i <= end; i++)
    {

        int ret = isStrong(i);
        if (ret == 1)
        {
            flag = 1;
            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {
        sprintf(str2, "-1");
    }
    flag = 0;
    return str2;
}

// SqureRoot
float squareRoot(int num)
{

    float sqr = num / 2;
    float temp = 0.0;

    while (temp != sqr)
    {

        temp = sqr;
        sqr = ((num / temp) + temp) / 2;
    }

    return sqr;
}
char *squareRootRange(int start, int end)
{
    // strcpy(str2, "The Square Roots are Numbers are:");
    str2[0] = '\0';
    float ret;
    int i = start;

    while (i <= end)
    {
        ret = squareRoot(i);
        sprintf(str1, "%.2f, ", ret);
        concat(str2, str1);
        i++;
    }
    rmComma(str2, ".");
    return str2;
}

// Niven Number

int isNiven(int num)
{

    int temp = num;
    int sum = 0;

    while (temp != 0)
    {

        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    if ((num % sum) == 0)
        return 1;

    return 0;
}

char *nivenRange(int start, int end)
{
    // strcpy(str2, "The Niven Numbers are: ");
    str2[0] = '\0';

    for (int i = start; i <= end; i++)
    {

        int ret = isNiven(i);
        if (ret == 1)
        {
            flag = 1;
            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {
        sprintf(str2, "-1");
    }
    flag = 0;
    return str2;
}

// Duck Number

int isDuck(int num)
{

    int temp = num;

    while (temp != 0)
    {

        if ((temp % 10) == 0)
            return 1;

        temp = temp / 10;
    }

    return 0;
}

// Disarium Number
int isDisarium(int num)
{
    int rev = intReverse(num);
    int temp = rev;
    int num1 = 0;
    int count = 1;

    printf("%d\n", num);
    printf("%d\n", rev);

    while (temp != 0)
    {

        int pow = power((temp % 10), count);

        num1 = num1 + pow;
        count++;
        temp = temp / 10;
    }

    if (num == num1)
        return 1;

    return 0;
}
char *disariumRange(int start, int end)
{
    // strcpy(str2, "The Disarium Numbers are: ");
    str2[0] = '\0';

    for (int i = start; i <= end; i++)
    {

        int ret = isDisarium(i);
        if (ret == 1)
        {
            flag = 1;
            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {
        sprintf(str2, "-1");
    }
    flag = 0;
    return str2;
}

// Automorphic Number

int isAutomorphic(int num)
{

    int pow = power(num, 2);

    int tempPow = pow;
    int tempNum = num;
    int rev = 0;
    int mult = 1;

    while (tempNum != 0)
    {
        rev = (rev + (mult * (tempPow % 10)));
        tempNum = tempNum / 10;
        tempPow = tempPow / 10;
        mult = mult * 10;
    }

    if (rev == num)
        return 1;

    return 0;
}
char *automorphicRange(int start, int end)
{
    // strcpy(str2, "The Automorphic Numbers are: ");
    str2[0] = '\0';

    for (int i = start; i <= end; i++)
    {

        int ret = isAutomorphic(i);
        if (ret == 1)
        {
            flag = 1;
            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {
        sprintf(str2, "-1");
    }
    flag = 0;
    return str2;
}

// Composite Number
int isComposite(int num)
{

    if (num < 2)
        return 0;

    if (isPrime(num) == 0)
        return 1;

    return 0;
}

char *compositeRange(int start, int end)
{
    // strcpy(str2, "The Composite Numbers are: ");
    str2[0] = '\0';

    for (int i = start; i <= end; i++)
    {

        int ret = isComposite(i);
        if (ret == 1)
        {
            flag = 1;
            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {
        sprintf(str2, "-1");
    }
    flag = 0;
    return str2;
}

// Sum of factors
int sumOfFactors(int num)
{
    int sum = 0;

    for (int i = 1; i <= num / 2; i++)
    {

        if (num % i == 0)
            sum = sum + i;
    }

    return sum;
}

// Max Digit
int maxDigit(int num)
{

    int max = 0;
    while (num)
    {

        if (max < num % 10)
        {

            max = num % 10;
        }
        num /= 10;
    }

    return max;
}

// MinDigit
int minDigit(int num1)
{

    if (num1 < 0)
    {

        return 0;
    }
    else
    {
        int min = num1 % 10;
        while (num1 > 0)
        {

            int rem = num1 % 10;
            if (rem < min)
            {
                min = rem;
            }
            num1 = num1 / 10;
        }
        return min;
    }
}

// Even Number

int evenNum(int num)
{

    if (num % 2 == 0)
    {

        return 1;
    }
    else
    {

        return 0;
    }
}

// OddNumber
int oddNum(int num)
{

    if (num % 2 != 0)
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

// even range

char *evenNumRange(int start, int end)
{

    // strcpy(str2, "The even Numbers are: ");
    str2[0] = '\0';

    for (int i = start; i <= end; i++)
    {

        int ret = evenNum(i);

        if (ret == 1)
        {

            flag = 1;
            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {

        sprintf(str2, "-1");
    }
    return str2;
}

// oddnumberrange
char *oddNumRange(int start, int end)
{

    // strcpy(str2, "The odd Number are:");
    str2[0] = '\0';

    for (int i = start; i <= end; i++)
    {

        int ret = oddNum(i);
        if (ret == 1)
        {
            flag = 1;
            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {
        sprintf(str2, "-1");
    }
    return str2;
}

// Digit Search

int digitSearch(int num, int search)
{
    int flag = 0;

    while (num)
    {

        int rem = num % 10;
        if (search == rem)
        {

            flag = 1;
            break;
        }
        else
        {

            flag = 0;
        }
        num /= 10;
    }

    if (flag == 1)
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

// product of Digit

int prodOfDigits(int num)
{

    int rem, prod = 1;

    while (num)
    {

        rem = num % 10;
        prod = prod * rem;
        num /= 10;
    }
    return prod;
}

// even digit sum

int evenDigitSum(int num)
{

    int sum = 0;

    while (num)
    {

        int rem = num % 10;

        if (rem % 2 == 0)
        {

            sum += rem;
        }
        num /= 10;
    }

    return sum;
}

// odd digit sum

int oddDigitSum(int num)
{

    int sum = 0;

    while (num)
    {

        int rem = num % 10;

        if (rem % 2 != 0)
        {

            sum += rem;
        }
        num /= 10;
    }

    return sum;
}

// Sum Of Digits

int sumOfDigits(int num)
{

    int sum = 0;

    while (num != 0)
    {

        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

// LCM

int lcm(int num1, int num2)
{

    int lcm, x = 1, y;

    if (num1 > num2)
    {

        lcm = num1;
    }
    else
    {

        lcm = num2;
    }

    y = lcm;

    while (1)
    {

        if (y % num1 == 0 && y % num2 == 0)
        {

            x = y;
            break;
        }

        y += lcm;
    }
    return x;
}

// HCF

int hcf(int num1, int num2)
{

    if (num1 < 0)
    {

        return 0;
    }

    if (num2 < 0)
    {

        return 0;
    }

    int hcf = 1;

    for (int i = 1; i <= num1 || i <= num2; i++)
    {

        if (num1 % i == 0 && num2 % i == 0)
        {

            hcf = i;
        }
    }
    return hcf;
}

// GCD

int GCD(int n1, int n2)
{
    int GCD;
    for (int i = 1; i <= n1 && i <= n2; ++i)
    {

        if (n1 % i == 0 && n2 % i == 0)
            GCD = i;
    }
    return GCD;
}

// Leapyear
int leapyear(int year)
{

    if (year < 0)
    {

        return 0;
    }
    else
    {

        if (year % 400 == 0)
        {
            return 1;
        }

        else if (year % 100 == 0)
        {
            return 0;
        }

        else if (year % 4 == 0)
        {
            return 1;
        }

        else
        {
            return 0;
        }
    }
}

// leapyearrange
char *LeapyearRange(int start, int end)
{

    // strcpy(str2, "The leap year are:");
    str2[0] = '\0';

    for (int i = start; i <= end; i++)
    {

        int ret = leapyear(i);
        if (ret == 1)
        {
            flag = 1;
            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {
        sprintf(str2, "-1");
    }
    return str2;
}

// Amicable number

int amicableNumber(int firstnumber, int secondnumber)
{

    int FirstDivisorSum = 0;
    int SecondDivisorSum = 0;

    if (firstnumber < 0)
    {

        return 0;
    }

    if (secondnumber < 0)
    {

        return 0;
    }

    for (int i = 1; i < firstnumber; i++)
    {

        if (firstnumber % i == 0)
        {

            FirstDivisorSum = FirstDivisorSum + i;
        }
    }
    for (int j = 1; j < secondnumber; j++)
    {

        if (secondnumber % j == 0)
        {

            SecondDivisorSum = SecondDivisorSum + j;
        }
    }

    if ((firstnumber == SecondDivisorSum) && (secondnumber == FirstDivisorSum))
    {

        return 1;
    }
    else
    {

        return 0;
    }
}

// Spy_Num

int spyNum(int n)
{

    int s = 0, p = 1, d;

    for (; n > 0;)
    {

        d = n % 10;
        s = s + d;
        p = p * d;
        n = n / 10;
    }

    if (s == p)
        return 1;
    else
        return 0;
}
char *spyNumRange(int start, int end)
{

    // strcpy(str2, "The spy Numbers are:");
    for (int i = start; i <= end; i++)
    {

        int ret = spyNum(i);
        if (ret == 1)
        {
            flag = 1;
            sprintf(str1, "%d, ", i);
            concat(str2, str1);
        }
    }
    rmComma(str2, ".");
    if (flag == 0)
    {
        sprintf(str2, "-1");
    }
    return str2;
}

int Anagrams_Num(int num1, int num2)
{
    {
        int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        int temp1 = num1;
        int temp2 = num2;

        while (temp1 != 0)
        {

            arr[temp1 % 10]++;
            temp1 = temp1 / 10;
        }

        while (temp2 != 0)
        {

            arr[temp2 % 10]--;
            temp2 = temp2 / 10;
        }

        for (int i = 0; i < 10; i++)
        {

            if (arr[i] != 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

// Table

char *Table(int num)
{

    // strcpy(str2, "The Table is ");
    str2[0] = '\0';

    for (int i = 1; i <= 10; i++)
    {

        sprintf(str1, " %d ", (num * i));
        concat(str2, str1);
    }

    return str2;
}

// fibonacci series

char *fibonacciRange(int num)
{

    // strcpy(str2, "The fibonacci Series is:");
    str2[0] = '\0';
    int n1 = 0, n2 = 1;
    int nextNum = 0;

    for (int i = 3; i <= num; i++)
    {

        sprintf(str1, "%d, ", nextNum);
        concat(str2, str1);
        n1 = n2;
        n2 = nextNum;
        nextNum = n1 + n2;
        if (nextNum > num)
        {
            break;
        }
    }
    rmComma(str2, ".");
    return str2;
}

// Bell Number
char *bellNumber(int row)
{

    str2[0] = '\0';
    int arr[row][row];
    int bellSer[row];
    bellSer[0] = 1;
    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            if (j == 1)
            {

                if (i == 1)
                {
                    arr[i][j] = 1;
                }
                else
                {

                    arr[i][j] = arr[i - 1][i - 1];
                }
            }
            else
            {

                arr[i][j] = arr[i][j - 1] + arr[i - 1][j - 1];
            }
            bellSer[i] = arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        sprintf(str1, "%d, ", bellSer[i]);
        concat(str2, str1);
    }
    rmComma(str2, ".");
    return str2;
}
