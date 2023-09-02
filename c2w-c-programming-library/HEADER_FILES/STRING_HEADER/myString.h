
// to get character for given position
char *charAt(char *str, int i)
{
	char *ptr = malloc(2);
	ptr[0] = str[i - 1];
	ptr[1] = '\0';
	return ptr;
}

// last Occurance function
int countOcc(char str[], char ch)
{

	int count = 0;
	// to check char present or not in string
	for (int i = 0; str[i] != '\0'; i++)
	{

		if (str[i] == ch)
		{
			count++;
		}
	}

	return count;
}

// First Occurance function
int firstOccurance(char str[], char ch)
{
	// to check char present or not in string
	for (int i = 0; str[i] != '\0'; i++)
	{

		if (str[i] == ch)
		{

			return i;
		}
	}

	// unsuccessful return
	return -1;
}

// to find first repeating character
char firstRepChar(char *str)
{

	int len = strlen(str);
	// Find the repeating character
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{

			if (str[i] == str[j] && i != j)
				return str[i];
		}
	}
	return -1;
}

// find the string is only alphabetic
int isAlpha(char str[])
{

	int flag = 0;
	int a = 0;
	int b = 0;
	// for loop to search alphabet and Numbers in string.
	for (int i = 0; str[i] != '\0'; i++)
	{

		// condition for check digit
		if (str[i] > 47 && str[i] < 58)
		{

			a = 1;
			continue;
		}
		// condition for check for alphabet
		else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{

			b = 1;
			continue;
		}
	}
	// condition if only aphabet found in a string
	if (a == 0 && b == 1)
	{

		return 1;
	}
	else
	{
		return 0;
	}
}

// find the string is alphanumeric
int isAlphaNum(char str[])
{

	int flag = 0;
	int a = 0;
	int b = 0;
	// for loop to search alphabet and Numbers in string.
	for (int i = 0; str[i] != '\0'; i++)
	{

		// condition for check digit
		if (str[i] > 47 && str[i] < 58)
		{

			a = 1;
			continue;
		}
		// condition for check for alphabet
		else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{

			b = 1;
			continue;
		}
	}
	// condition if string found alphabet and numbers both.
	if (a == 1 && b == 1)
	{

		return 1;
	}
	else
	{
		return 0;
	}
}

// anagram function
int isAnagram(char *str1, char *str2)
{
	// comparing string length
	if (strlen(str1) != strlen(str2))
		return 0;

	// Sorting String For comparision
	for (int i = 0; i < strlen(str1); i++)
	{
		for (int j = 0; j < strlen(str1) - i - 1; j++)
		{
			if (str1[j] > str1[j + 1])
			{
				int temp = str1[j];
				str1[j] = str1[j + 1];
				str1[j + 1] = temp;
			}
			if (str2[j] > str2[j + 1])
			{
				int temp = str2[j];
				str2[j] = str2[j + 1];
				str2[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < strlen(str1); i++)
	{
		if (str1[i] != str2[i])
			return 0;
	}
	return 1;
}

// find the all string has only digit.
int isDigit(char str[])
{
	int flag = 0;
	int a = 0;
	int b = 0;
	// for loop to search digit
	for (int i = 0; str[i] != '\0'; i++)
	{

		// condition for check digit
		if (str[i] > 47 && str[i] < 58)
		{

			a = 1;
			continue;
		}
		// condition for check for alphabet
		else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{

			b = 1;
			continue;
		}
	}
	// condition if only digit found
	if (a == 1 && b == 0)
	{

		return 1;
	}
	else
	{
		return 0;
	}
}

// palindrome String Function
int isPalindrome(char *s)
{

	int len = strlen(s);
	char ch[len];
	int j = 0;
	for (int i = 0; i < len; i++)
	{

		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				ch[j] = s[i] + 32;
			else
				ch[j] = s[i];
			j++;
		}
	}
	int i = 0;
	for (i = 0; i < j / 2; i++)
	{

		if (ch[i] == ch[j - 1 - i])
			continue;
		else
			return 0;
	}
	return 1;
}

// find largest ascii value's character funcion
char *largestChar(char str[])
{

	// char ch = 0;
	char *ch = malloc(2);
	// to find largest ascci value char which is present in string
	ch[0] = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{

		if (str[i] > ch[0])
		{

			ch[0] = str[i];
		}
	}
	ch[1] = '\0';

	return ch;
}

// last Occurance function
int lastOccurance(char str[], char ch)
{

	int index = 0;
	int flag = -1;
	// to check char present or not in string
	for (int i = 0; str[i] != '\0'; i++)
	{

		if (str[index] == ch)
		{

			flag = index;
		}
		index++;
	}

	return flag;
}

char *myStrCat(char *str1, char *str2)
{

	// to get str1 pointer traverse upto end until \0 found
	while (*str1 != '\0')
	{
		str1++;
	}
	// to concat str2 at the end of str1 until \0 found in str2
	while (*str2 != '\0')
	{

		*str1 = *str2;
		*str1++;
		*str2++;
	}
	// add \0 at the end of str1
	*str1 = '\0';
	return str1;
}

// to Campare two Strings
int myStrCmp(char *str1, char *str2)
{

	// while loop to traverse str1 and str2 to check condition
	while (*str1 != '\0' || *str2 != '\0')
	{

		// if *str1 not equal to *str2 then return function unsuccessfully
		if (*str1 != *str2)
		{
			return 0;
		}
		// pointer addition
		str1++;
		str2++;
	}
	return 1;
}

// compare ignore case function
int myStrCmpi(char *str1, char *str2)
{

	// traverse string one by one up to \0 found
	while (*str1 != '\0' || *str2 != '\0')
	{

		if (*str1 != *str2)
		{

			// condition for ignoring case
			if (*str1 == *str2 + 32 || *str2 == *str1 + 32)
			{

				str1++;
				str2++;
				continue;
			}
			else
				return 0;
		}
		str1++;
		str2++;
	}
	return 1;
}

// to copy string function.
char *myStrCpy(char *dest, const char *src)
{

	// for put character from one string to another string one by one
	char *temp = dest;
	while (*src != '\0')
	{

		*dest = *src;
		src++;
		dest++;
	}
	// giving \0 to complete string at the end of Destination string
	*dest = '\0';
	return temp;
}

// length function
int myStrLen(char *str)
{
	int len = 0;
	while (*str != '\0' && *str != '\n')
	{
		len++;
		str++;
	}
	return len;
}

// reverse function
char *myStrRev(char *str)
{

	char *temp = str;
	int j = myStrLen(str) - 1;

	// for loop upto half of string
	for (int i = 0; i < (myStrLen(str) / 2); i++)
	{

		// swap
		char temp = *(str + i);
		*(str + i) = *(str + j);
		*(str + j) = temp;
		j--;
	}
	return temp;
}

// find count of alphabet which is present in String.
int strAlphaCount(char str[])
{

	int count = 0;
	// for loop to search alphabet in string.
	for (int i = 0; str[i] != '\0'; i++)
	{

		// condition for get alphabet count
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			count++;
		}
	}

	return count;
}

// find count of digit which is present in String.
int strDigitCount(char str[])
{

	int count = 0;
	// for loop to search digit in string.
	for (int i = 0; str[i] != '\0'; i++)
	{

		// condition for get digit count
		if (str[i] > 47 && str[i] < 58)
		{

			count++;
		}
	}

	return count;
}

// reverse function upto n
char *strRevRange(char *str, int l, int r)
{

	int len = strlen(str);
	// Invalid range
	if (l < 0 || r >= len || l > r)

		return str;

	// While there are characters to swap
	while (l < r)
	{

		// Swap(str[l], str[r])
		char c = str[l];
		str[l] = str[r];
		str[r] = c;
		l++;
		r--;
	}
	return str;
}

// reverse function upto n
char *revUptoN(char *str, int n)
{

	char *temp = str;
	int j = n - 1;

	// for loop upto half of given length
	for (int i = 0; i < (n / 2); i++)
	{

		// swap
		char temp = *(str + i);
		*(str + i) = *(str + j);
		*(str + j) = temp;
		j--;
	}
	return temp;
}

// to convert string in lowercase
char *toLowerCase(char *str)
{
	int j = 0;
	while (str[j])
	{

		// condition to get uppercase character and convert into lowercase
		if (str[j] < 91 && str[j] >= 65)
		{

			str[j] += 32;
		}
		j++;
	}
	return str;
}

// to convert lowercase character into uppercase and uppercase character into lowercase in string
char *toToggleCase(char *str)
{
	int j = 0;
	while (str[j])
	{

		// condition to get uppercase character and convert into lowercase
		if (str[j] < 91 && str[j] >= 65)
		{

			str[j] += 32;

			// condition to get lowercase character and convert into uppercase
		}
		else if (str[j] < 123 && str[j] > 96)
		{

			str[j] -= 32;
		}
		j++;
	}
	return str;
}

// to convert all string in uppercase
char *toUpperCase(char *str)
{
	int j = 0;
	while (str[j])
	{

		// condition to get lowercase character and convert into upper case
		if (str[j] < 123 && str[j] >= 97)
		{

			str[j] -= 32;
		}
		j++;
	}
	return str;
}

char *charWordrev(char *str){

	//find length of string	
	int cnt = strlen(str)+1;
	int i = 0;
	int j = 0;
	int back = 0;
	while (cnt > 0) {
		//check space or end string
		if ((str[i] == ' ' ) || (str[i] == '\0')) {
			int var = (i-back)/2;
			int k = i-1;
			while (var) {
				//swap word 
				char temp = str[k];
				str[k] = str[back];
				str[back] = temp;
				var--;
				k--;
				back++;
			}
			back = i+1;
		}	
		i++;
		cnt--;
	}
	return str;
}


char *remSpace(char *str)
{
	int i = 0;
	int j = 0;
	while (str[i])
	{
		// check character
		if (str[i] != ' ')
		{
			str[j++] = str[i];
		}
		i++;
	}
	str[j] = '\0';
	return str;
}

char *strrev(char *start, char *end)
{ // function to reverse a string

	char temp;
	while (start < end)
	{
		temp = *start;
		*start++ = *end;
		*end-- = temp;
	}
}
char *revWord(char *str)
{ // To reverse the words

	char *start = str;
	char *temp = str;

	while (*temp)
	{
		temp++;
		if (*temp == '\0')
		{
			// call to strrev function
			strrev(start, temp - 1);
		}
		else if (*temp == ' ')
		{ // check space
			strrev(start, temp - 1);
			start = temp + 1;
		}
	}
	strrev(str, temp - 1);

	return str;
}

int rfind(char *str, char ch)
{

	// length of string
	int len = strlen(str);
	int temp = 0;

	for (int i = len - 1; i >= 0; i--)
	{
		temp++;
		// check character
		if (ch == str[i])
		{
			return temp;
		}
	}
	return 0;
}

char *strSortAcce(char *str)
{

	char temp;

	// length of string
	int len = strlen(str);

	for (int i = 0; i <= len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{

			// compare character
			if (str[i] > str[j])
			{
				// swap character
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	return str;
}

char *strSortDesc(char *str)
{

	char temp;

	// length of string
	int len = strlen(str);

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{

			// compare character
			if (str[i] < str[j])
			{
				// swap character
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	return str;
}

int spaceCount(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		// check space
		if (*str == ' ')
			count++;
		str++;
	}
	return count;
}

char *strTitle(char *str)
{

	if (str[0] >= 97 && str[0] <= 122)
	{

		// convert 1st char in capital letter
		str[0] = str[0] - 32;
	}

	return str;
}

char *strTrim(char *str, char *str1)
{
	int i = 0;
	int k = 0;

	// itrate string until last
	// leading space charecter
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	{
		i++;
	}

	// string ends and copy the content of str to str1
	for (int j = i; str[j] != '\0'; j++)
	{
		str1[k] = str[j];
		k++;
	}

	// insert a string terminating character
	// at the  end of a new string
	str1[k] = '\0';

	return str1;
}

char *wordCapitlize(char *str)
{

	int len = strlen(str);
	// printf("%d\n",len);

	// capitalize first character of words
	for (int i = 0; str[i] != '\0'; i++)
	{
		// check first character is lowercase alphabet
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32; // subtract 32 to make it capital
			continue;				  // continue to the loop
		}
		if (str[i] == ' ')
		{ // check space
			// if space is found, check next character
			++i;
			// check next character is lowercase alphabet
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32; // subtract 32 to make it capital
				continue;			  // continue to the loop
			}
		}
		else
		{
			// all other uppercase characters should be in lowercase
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32; // subtract 32 to make it small/lowercase
		}
	}

	return str;
}

int strWordCount(char *str)
{

	char str1[200];
	char *ptr = str1;
	// Call to strTrim
	strTrim(str, str1);
	int count = 0;

	if (*str == '\0')
	{
		return 0;
	}

	char *str2 = ptr + 1;
	while (*ptr != '\0')
	{
		// check space
		if (*str2 != ' ' && *ptr == ' ')
		{
			count++;
		}
		ptr++;
		str2++;
	}
	if (*(--ptr) != ' ')
	{
		count++;
	}
	return count;
}

// catUpton

char *catUpton(char *str1, char *str2, int n)
{

	while (*str1 != '\0')
	{
		str1++;
	}

	int i = 0;
	// add string uptp given number
	while (n > i)
	{
		*str1 = *str2;
		str1++;
		str2++;
		i++;
	}
	*str1 = '\0';

	return str1;
}

// catUptospace

char *catUptospace(char *str1, char *str2)
{

	while (*str1 != '\0')
	{
		str1++;
	}

	// concat upto space or single word only
	while (*str2 != '\0' && *str2 != ' ')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}

	*str1 = '\0';

	return str1;
}

// consonant Count

int consonantCount(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		// check character is consonant or not
		if (*str != 'A' && *str != 'E' && *str != 'I' && *str != 'O' && *str != 'U' && *str != 'a' && *str != 'e' && *str != 'i' && *str != 'o' && *str != 'u')
		{
			if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			{
				count++;
			}
		}
		str++;
	}
	return count;
}

// delduplicate

char *delDuplicate(char *str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		for (int j = i + 1; str[j] != '\0'; j++)
		{
			// check duplicate character
			if (str[j] == str[i])
			{
				for (int k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
			}
		}
	}
	return str;
}

// lower Count

int lowerCount(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		// check character is lowercase alphabate
		if (*str >= 'a' && *str <= 'z')
			count++;
		str++;
	}
	return count;
}

// remove duplicates

char *removeDuplicates(char *s)
{
	char *carr = malloc(sizeof(char) * strlen(s));
	int len = strlen(s);
	int count = 0, i = 1;
	carr[0] = s[0];
	while (i < len)
	{

		if (count >= 0 && carr[count] == s[i])
			count--;
		else
			carr[++count] = s[i];

		i++;
	}
	carr[count + 1] = '\0';
	return carr;
}

// replChar

char *repChar(char *str, char ch1, char ch2)
{

	int i = 0;
	while (str[i] != '\0')
	{
		// compare character
		if (str[i] == ch1)
		{
			// replace character
			str[i] = ch2;
		}
		i++;
	}
	return str;
}

// replace character at position

char *repCharPos(char *str, char ch, int n)
{

	for (int i = 0; i < strlen(str); i++)
	{
		// check position
		if (i == n)
			str[i - 1] = ch; // replace
	}

	return str;
}

// special character count

int spcharCount(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		// check special character
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z') && (*str < '0' || *str > '9'))
		{
			count++;
			//	printf("%d",count);
		}
		str++;
	}
	return count;
}

// upper Count

int upperCount(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		// check character is alphabate or not
		if (*str >= 'A' && *str <= 'Z')
			count++;
		str++;
	}
	return count;
}

// vowel count

int vowelCount(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		// check vowel character
		if (*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
			count++;
		str++;
	}
	return count;
}
