
/*-------------------------------------------------------------------------------------------------------------------------
—---------------------------------------------- ARRAY FUNCTIONS —----------------------------------------------------------
—--------------------------------------------------------------------------------------------------------------------------


----------------------------------------------- Ganesh - (1 -10) ----------------------------------------------------------

1) Revers Array 					:  	void reverseArray(int * arr , int lim );
2) Sort Array Ascending 				: 	void sortAscending(int * arr , int lim );
3) Sort Array Descending 				: 	void sortDescending(int * arr , int lim );
4) Delete Number the array  				:  	void deleteNumberFromArray(int * arr , int lim , int dnum );
5) n th minimum value in array  			:  	int nthMinimumNumberInArray(int * arr , int lim , int nth);
6) n th maximum value in array  			:  	int nthMaximumNumberInArray(int * arr , int lim , int nth);
7) Odd Number form array 	        		:	int removeEvenForArray(int * arr , int lim );
8) Even number from array		    		:	int removeOddNumber(int * arr , int lim );
9) Find peak element                     		: 	int findPeak(int *arr,int n)
10)First Non Repeating element in an array 		: 	int firstNonRepeating(int *arr ,int n)

---------------------------------------------- Akanksha - (11-20) ---------------------------------------------------------

11)   find minimum, element in array           		: 	int findMin(int  *arr,int lim)
12)   find occurrence of element in array       	:	int countOccurrence(int *arr, int n,int target)
13)   FInd maxSubArray sum                          	: 	int maxSubArray(int *arr,int n) 
14)   move all negative to one side of array    	: 	int  grpNegPosEle(int *arr,int n) 
15)   Cyclically Rotate an array  by one          	: 	void CyclicRotate(int *arr ,int n)
16)   Count pairs with given sum                    	: 	int getPairsCount(int *arr,int lim ,int sum)
17)   Count of duplicate elements                   	: 	int countOfDuplicate(int *arr ,int lim)
18)   Sum of all even numbers in array            	: 	int sumOfEvenEle(int *arr, int lim)
19)  Sum of all odd numbers in array              	: 	int sumOfOddEle(int *arr, int lim)
20)   Average of all elements in an array         	: 	int avgOfEle(int *arr ,int lim)

---------------------------------------------- Nikhil - (21-30) -----------------------------------------------------------

21)  Product of array elements                      	: 	int  arrayProduct(int *arr,int lim)
22)  Replace elements with is sum of its digits 	: 	void repEleWithSum(int *arr,int lim) 
23)  Replace elements with is square 	  		: 	void repEleWithSq(int *arr,int lim)
24)  Replace elements with cube    		  	: 	void repEleWithCube(int *arr,int lim)
25)  Palindromic array  			  	: 	void palindromic(int *arr,int lim)
26) Sum of all elements having odd index	  	: 	int sumOddIndex(int *arr,int lim)
27) Sum of all elements having even index     		: 	int sumEvenIndex(int* arr,int lim)               
										  
---------------------------------------------- Prashant - (28-35)-----------------------------------------------------------

28) Grouping of Even Number		  		: 	int evenArray(int *arr,int lim)
29)  Grouping of odd Number			  	: 	int oddArray(int *arr,int lim)
30) Grouping of Prime Number		  		: 	int primeArray(int *arr,int lim)
31) Grouping of Composite Number		  	: 	int compositeArray(int *arr,int lim)
32)Grouping of Perfect Number		  		: 	int perfectArray(int *arr,int lim)
33) Grouping of Palindrome Number		  	: 	int palindromeArray(int *arr,int lim)
34) Replace element with its reverse Number 		: 	int revNumberArray(int *arr,int lim)
35)  Replace with sum of digit		  		: 	int sumOfDigitArray(int *arr,int lim)

----------------------------------------------- Atharva - (36-44) ----------------------------------------------------------

36) Grouping of Duck Number				:	int duckArray(int *arr,int lim)
37) Grouping of  Automorphic Number			:	int automorphicArray(int *arr,int lim)
38) Grouping of Harshad Number				: 	int harshadArray(int *arr,int lim)
39) Grouping of Armstrong Number			:	int armstrongArray(int *arr,int lim)
40) Grouping of Abundant Number				:	int abundantArray(int *arr,int lim)
41)  Grouping of Spy Number				:	int spyArray(int *arr,int lim)
42)  Grouping of Strong Number				:	int strongArray(int *arr,int lim)
43)  Grouping of Disarium Number			:	int disariumArray(int *arr,int lim)
44)  Grouping of  Deficient Number			:	int deficientArray(int *arr,int lim)

------------------------------------------------------------------------------------------------------------------------*/
				


/*

Prototype :

	void reverseArray(int * arr , int lim );
	
	This function takes array address and array limit as input
	and revers the array  

Parameters: 
	
 	int * arr : pointer to array 
 	int lim : limit of array
 
Return type : 

	Returns nothing	

*/

void reverseArray(int * arr , int lim ){
	// printf("reverseArray\n");

	for(int i=0 ; i<lim/2 ; i++){
		int t = arr[i];
		arr[i]=arr[lim-i-1];
		arr[lim-i-1]=t;
	}

}


/*

Prototype :

	void sortAscending(int * arr , int lim );

	This function takes array address and array limit as input
	and sort the array in ascending order 

Parameters: 
	 
 	int * arr  : pointer to an array 
	int lim  : limit of the array
 
Return type : 

	Returns nothing	

*/

void sortAscending(int * arr , int lim ){
	
    for (int i = 1; i < lim ; i++) 
    {
        int t = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > t) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = t;
    }
}


/*

Prototype :

	void sortDescending(int * arr , int lim );

	This function takes array address and array limit as input
	and sort the array in descending  order 

Parameters: 
	
	int * arr  : pointer to an array 
	int lim  : limit of the array
 
Return type : 

	Returns nothing	

*/

void sortDescending(int * arr , int lim ){
	
    for (int i = 1; i < lim ; i++) 
    {
        int t = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < t) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = t;
    }
}


/*
	
Prototype :
 
	int searchNumberInArray (int * arr , int lim , int snum);
 
Parameters : 
	arr :  pointer to  array 
	lim :  limit of array
	snum : number to search in the array

Return type:
	
	If a number present it will return the index of array where number got found
	If the in array number is not present it will return the  -1  value 

*/

int searchNumberInArray(int * arr , int lim , int snum ){
	// printf("searchNumberInArray\n");
	for(int i =0  ; i< lim ; i++ ){
		if(arr[i]==snum){
			return i;
		}
	}

	return -1;
}



/*

Prototype :

	void deleteNumberFromArray(int * arr , int lim , int dnum );

	this function delete first occurrence of the number from the array 

Parameters : 
	
	int * arr  :  pointer to an array
	int lim    :  limit of the array
	int dnum   :  delete first occurrence from the array  

Return type : 

	return the new limit of the array after deleting the given number


*/
int deleteNumberFromArray(int * arr , int lim , int dnum ){
	// printf("deleteNumberFromArray\n");

	int i=0;
	int flag=0;

	for( i = 0 ;  i < lim ; i++ ){
		if(arr[i]==dnum){
			flag=1;
			break;

		}
	}

	for(;i<lim ; i++ ){
		arr[i]=arr[i+1];
	}

	for(i = 0 ;  i < lim ; i++ ){
		printf("%d  ",arr[i]);
	}

	if(flag==1){

		return --lim;
	}
	return lim;
}




/*

Prototype :

	void nthMinimumNumberInArray(int * arr , int lim , int nth);

	this functions return the nth minimum number 

Parameters : 
	
	int * arr  :  pointer to an array
	int lim    :  limit of the array
	int nth    :  nth position of number 

Return type : 

	return nth minimum number in the array 

*/

int nthMinimumNumberInArray(int * arr , int lim , int nth){

	// printf("nthMinimumNumberInArray\n");
	sortAscending( arr , lim );

	if(nth==1){
		return 0; 
	}

	int count = 1 ;
	int last_val = arr[0];
	
	for(int i = 1 ; i < lim ; i++){

		if( last_val != arr[i] ){

			last_val =arr[i]; 
			count++;

			if(count==nth){

				return i;

			}
		}

	}

	return -1;
}


/*

Prototype :

	void nthMaximumNumberInArray(int * arr , int lim , int nth);

	this functions return the nth Maximum number 

Parameters : 
	
	int * arr  :  pointer to an array
	int lim    :  limit of the array
	int nth    :  nth position of number 

Return type : 

	return nth Maximum number in the array 
	 
*/
int nthMaximumNumberInArray(int * arr , int lim , int nth){
	// printf("nthMaximumNumberInArray\n");
	
	sortDescending( arr , lim );
	if(nth==1){
		return arr[0] ; 
	}

	int count = 1 ;
	int last_val = arr[0];

	for(int i = 1 ; i < lim ; i++){

		if( last_val != arr[i]){
			last_val =arr[i]; 
			count++;
			if(count==nth){
				return i;
			}
		}

	}

	return -1;


} 

/*

Prototype :

	
Parameters : 
	
	int * arr  :  pointer to an array
	int lim    :  limit of the array 

Return type : 

	 
*/
int removeEvenForArray(int * arr , int lim ){
	
	int count = 0 ;
	int arr2[lim];

	for(int i=0 ; i<lim ; i++ ){
		if(arr[i]%2!=0){
			arr2[count]=arr[i];
			count++;
		}
	}
	for(int i=0 ; i<count ; i++ ){
		arr[i]=arr2[i];
	}
	return count;
}

/*

Prototype :

	
Parameters : 
	
	int * arr  :  pointer to an array
	int lim    :  limit of the array 

Return type : 

	 
*/
int removeOddNumber(int * arr , int lim ){
	int count = 0 ;
	int arr2[lim];

	for(int i=0 ; i<lim ; i++ ){
		if(arr[i]%2==0){
			arr2[count]=arr[i];
			count++;
		}
	}
	for(int i=0 ; i<count ; i++ ){
		arr[i]=arr2[i];
	}
	return count;
}

// Recursive function to find the peak element in an array
int findPeakElement(int nums[], int low, int high, int n)
{
    // find the middle element. To avoid overflow, use mid = low + (high - low) / 2
    int mid = (low + high) / 2;
 
    // check if the middle element is greater than its neighbors
    if ((mid == 0 || nums[mid - 1] <= nums[mid]) &&
            (mid == n - 1 || nums[mid + 1] <= nums[mid])) {
        return mid;
    }
 
    // If the left neighbor of `mid` is greater than the middle element,
    // find the peak recursively in the left subarray
    if (mid - 1 >= 0 && nums[mid - 1] > nums[mid]) {
        return findPeakElement(nums, low, mid - 1, n);
    }
 
    // If the right neighbor of `mid` is greater than the middle element,
    // find the peak recursively in the right subarray
    return findPeakElement(nums, mid + 1, high, n);
}

/*

Prototype :

	
Parameters : 
	
	int * arr  :  pointer to an array
	int n   :  limit of the array 

Return type : 

	 
*/
 
int findPeak(int nums[], int n)
{
    int index = findPeakElement(nums, 0, n - 1, n);
    return index;
}

/*

Prototype :

	arr : Pointer to an local array 
	n : 
Parameters : 
	
	int * arr  :  pointer to an array
	int lim    :  limit of the array 

Return type : 
	return the index of first non-reapeting character 
	from the array 
	if the no elements unique the it will return the -1
	 
*/

int firstNonRepeating(int *arr ,int n){
	// Loop for checking each element
    for (int i = 0; i < n; i++) {
        int j;
        // Checking if ith element is present in array
        for (j = 0; j < n; j++)
            if (i != j && arr[i] == arr[j])
                break;
        // if ith element is not present in array
        // except at ith index then return element
        if (j == n)
            return i;
    }
    return -1;
}


// ------------------------------------------------ Akanksha------------------------------------------------------------------

/*
Prototype :

        int findMin(int *arr, int lim)


Parameters :
        arr :  pointer to  array
        lim :  lim of array

Return type:

        Returns the minimum value from an array.

*/

int min(int num1, int num2) {

    return (num1 > num2) ? num2 : num1;

}

int findMin(int *arr, int lim) {

    int res = arr[0];
    for (int i = 1; i < lim; i++)
        res = min(res, arr[i]);
    return res;

}


/*

Prototype :

        int countOccurrences(int *arr, int lim, int target)


Parameters :
        arr :  pointer to  array
        lim :  lim of array

Return type:

        Returns the count of rpeated target element.

*/


int countOccurrences(int *arr, int lim, int target)
{
    int res = 0;
    for (int i=0; i<lim; i++)
        if (target == arr[i])
          res++;
    return res;
}


/*

Prototype :

         int maxSubArray(int *arr,int lim)


Parameters :
        arr :  pointer to  array
        lim :  lim of array

Return type:

        Returns the maximum sum of an sub array.

*/

int maxSubArray(int *arr, int lim) {

  int max_sum = 0;
  int current_sum = 0;

  for(int i=0; i<lim; i++) {
    current_sum = current_sum + arr[i];

    if (current_sum < 0)
      current_sum = 0;

    if(max_sum < current_sum)
      max_sum = current_sum;
  }

  return max_sum;

}


/*

Prototype :

         void grpNegPosEle(int *arr,int lim)


Parameters :
        arr :  pointer to  array
        lim :  lim of array

Return type:

        Returns nothing.
        prints the array with all negative elements grouped

*/

void swap(int *x , int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void grpNegPosEle(int *arr, int lim)
{
    int i, j, min_in;
    for(i = 0; i < lim - 1; i++)
    {
        min_in = i;
        for(j = i + 1; j < lim; j++)
        {
            if(arr[j] < arr[min_in])
            {
                min_in = j;
            }
        }
        swap(&arr[min_in], &arr[i]);
    }
}


/*

Prototype :

         void cyclicRotate(int *arr, int lim)


Parameters :
        arr :  pointer to  array
        lim :  lim of array

Return type:

        Returns nothing.
        prints the cyclically rotated array.

*/

void cyclicRotate(int *arr, int lim)
{
   int x = arr[lim-1], i;
   
   for (i = lim-1; i > 0; i--)
      arr[i] = arr[i-1];

   arr[0] = x;
}


/*

Prototype :

         int getPairsCount(int *arr, int lim, int sum)


Parameters :
        arr :  pointer to  array
        lim :  lim of array
        sum :  target sum of pairs

Return type:

        Returns the count of pairs which returns the target sum

*/


int getPairsCount(int *arr, int lim, int sum)
{
    int count = 0;

    for (int i = 0; i < lim; i++)
        for (int j = i + 1; j < lim; j++)
            if (arr[i] + arr[j] == sum)
                count++;

    return count;
}


/*

Prototype :

         int countOfDuplicate(int *arr, int lim)


Parameters :
        arr :  pointer to  array
        lim :  lim of array
        sum :  tageted sum 

Return type:

        Returns the count of repeated/duplicate elements

*/

int countOfDuplicate(int *arr, int lim )
{
    int count = 0;

    for (int i = 0; i < lim; i++){
    	for(int j=0 ; j<lim ; j++ ){
    		if(arr[i]==arr[j] && i != j && j>i){
    			count++;
    		}
    	}
    }
        

    return count;
}

/*
Prototype :

         int sumOfEvenEle(int *arr, int lim)


Parameters :
        arr :  pointer to  array
        lim :  lim of array

Return type:

        Returns the sum of all even elements

*/

int sumOfEvenEle(int *arr, int lim) {

        int sum = 0;

        for(int i = 0; i<=lim; i++){

                if(arr[i]%2==0) {

                        sum = sum + arr[i];

                }

        }

        return sum;

}


/*
Prototype :

         int sumOfOddEle(int *arr, int lim)


Parameters :
        arr :  pointer to  array
        lim :  lim of array

Return type:

        Returns the sum of all odd elements

*/

int sumOfOddEle(int *arr, int lim) {

	int sum = 0;

	for(int i = 0; i<=lim; i++){

		if(arr[i]%2!=0) {

			sum = sum + arr[i];

		}

	}

    return sum;

}


/*


Prototype :

         int avgOfEle(int *arr, int lim)


Parameters :
        arr :  pointer to  array
        lim :  lim of array

Return type:

        Returns the avg of all elements in an array.

*/

float avgOfEle(int *arr, int lim){

        int sum = 0;

        for(int i = 0; i<lim; i++) {

                sum = sum + arr[i];

        }

        float avg = sum/lim;

        return avg;

}


//-------------------------------------------------------- Nikhil --------------------------------------------------------------------

/*


Prototype :

         int arrayProduct(int *arr,int n)


Parameters :
        arr :  pointer to  array
        n :  size of array

Return type:

        Returns product of array elements

*/

int arrayProduct(int *arr,int n){

	if(n<=0){
		// printf("Array of given size cannot be initialised\n");
		return -1;
	}else{
		int prod=1;
		for(int i=0;i<n;i++)
			prod *= *(arr+i);
		return prod;
	}
}



/*

Prototype :

         void repEleWithSum(int *arr,int n)

Parameters :
        arr :  pointer to  array
        n 	:  size of array

Return type:

        Returns all elements updated as sum of digits 


*/


void repEleWithSum(int *arr,int n){
	if(n<=0){
			// printf("Array of given size cannot be initialised\n");
			return;
	}else{
			int retsum(int n){
					int sum=0;
					while(n>0){
							sum+=n%10;
							n/=10;
					}
					return sum;
			}
			for(int i=0;i<n;i++)
					*(arr+i)=retsum(*(arr+i));
	}
}


/*


Prototype :

         void repEleWithSq(int *arr,int n)

Parameters :
        arr :  pointer to  array
        n :  size of array

Return type:

        Returns all elements updated as square of elements 

*/

void repEleWithSq(int *arr,int n){
	if(n<=0){
		// printf("Array of given size cannot be initialised\n");
		return;
	}else{
		for(int i=0;i<n;i++)
			*(arr+i)=*(arr+i)*(*(arr+i));
	}
}
/*


Prototype :

	int repEleWithCube(int *arr,int n)
         
Parameters :
        arr :  pointer to  array
        n :  size of array

Return type:

        Returns all elements updated as cube of elements 

*/


int repEleWithCube(int *arr,int n){
	if(n<=0){
		printf("Array of given size cannot be initialised\n");
		return -1 ;
	}
	else {
		for(int i=0;i<n;i++)
			*(arr+i)=*(arr+i)*(*(arr+i))*(*(arr+i));
	}		
}


/*


Prototype :

         void palindromic(int *arr,int n);

Parameters :

        arr :  pointer to  array
        n :  size of array

Return type:

        Prints if array is palindromic or not

*/

int palindromic(int *arr,int n){
	if(n<=0){
		// printf("Array of given size cannot be initialised\n");
		return -1;
	}else{

		int flag=0;
		int* t1=arr;
		int* t2=arr+n-1;
		for(int i=0;i<n/2;i++){
			if(*(t1+i)!=*(t2-i)){
				flag=1;
				break;
			}
		}
		if(flag==0)
			return 1;
		else
			return 0;

	}
}


/*


Prototype :

         int sumOddIndex(int *arr,int n)


Parameters :
        arr :  pointer to  array
        n :  size of array

Return type:

        Returns sum of elements having odd index

*/

int sumOddIndex(int *arr,int n){
        if(n<=0){
                printf("Array of given size cannot be initialised\n");
                return -1;
        }else{
                int sum=0;
                for(int i=1;i<n;i+=2)
                        sum+=*(arr+i);
                return sum;
        }
}


/*


Prototype :

        int sumEvenIndex(int *arr,int n)


Parameters :
        arr :  pointer to  array
        n :  size of array

Return type:

        Returns sum of elements having even index

*/

int sumEvenIndex(int *arr,int n){
        if(n<=0){
                printf("Array of given size cannot be initialised\n");
                return -1;
        }else{
                int sum=0;
                for(int i=0;i<n;i+=2)
                        sum+=*(arr+i);
                return sum;     
        }
}

/*

Prototype :

	int evenArray(int * arr , n );
	
	This function takes array address and array length as input
	and group even elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/

// An even number is a number that is a multiple of 2.
int iseven(int num){

	if(num%2==0){
		return 0;
	}else{
		return 1;
	}
}

//Grouping of  Even Number
int evenArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(iseven(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}
/*

Prototype :

	int oddArray(int * arr , n );
	
	This function takes array address and array length as input
	and group odd elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
// Odd number are defined as numbers that are not exactly divisible by two.
int isOdd(int num){

	if(num%2!=0){
		return 0;
	}else{
		return 1;
	}
}

//Grouping of Odd Number
int oddArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(isOdd(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}

/*

Prototype :

	int primeArray(int * arr , n );
	
	This function takes array address and array length as input
	and group prime elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
//Prime numbers are natural numbers that are divisible by only 1 and the number itself.
int isprime(int num){
	int count=0;
        for(int i=2;i<=num/2;i++){
		if(num%i==0){
			count++;
		}
	}
	if(count==0){
		return 0;
	}else{
		return 1;
	}
}

//Grouping of Prime Number
int primeArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(isprime(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}


/*

Prototype :

	int compositeArray(int * arr , n );
	
	This function takes array address and array length as input
	and group composite elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
// composite numbers can be defined as numbers that have more than two factors.
int iscomposite(int num){
	int flag =1;
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}

// Grouping of Composite Number
int compositeArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(iscomposite(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}

/*

Prototype :

	int perfectArray(int * arr , n );
	
	This function takes array address and array length as input
	and group perfect elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
//  Perfect number, a positive integer that is equal to the sum of its proper divisors. The smallest perfect number is 6, which is the sum of 1, 2, and 3.
int isperfect(int num){
	int sum=0;
	for(int i=1; i<=num/2; i++){
		if(num%i==0){
			sum+=i;
		}
	}
	if(sum==num){
		return 0;
	}else{
		return 1;
	}
}

//Grouping of Perfect Number
int perfectArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(isperfect(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}
/*

Prototype :

	int palindromeArray(int * arr , n );
	
	This function takes array address and array length as input
	and group palindrome elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
/* A palindrome number is a number that remains the same when digits are reversed. For example, the number 12321 is a palindrome number*/
int ispalindrome(int num){
        int temp = num;
	int rev=0;
	while(num>0){
		rev=(rev*10) + (num%10);
		num/=10;
	}
	if(rev==temp){
		return 0;
	}else{
		return 1;
	}
}

// Grouping of Palindrome Number
int palindromeArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(ispalindrome(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}


/*

Prototype :

	int revNumberArray(int * arr , n );
	
	This function takes array address and array length as input
	and replace elements with its respective  reverse number 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
/* Reversing a number means that the digit at the first position should be swapped with the last digit, the second digit will be swapped with the second last digit, and so on till the middle element.*/
int revNumber(int num){
	int rev=0;
	while(num>0){
		rev=(rev*10)+(num%10);
		num/=10;
	}
	return rev;
}

// Replacing elements with theis reverse number .
int revNumberArray(int *arr,int len){

	for(int i=0; i<len ; i++){

		*(arr+i) = revNumber(*(arr+i));
	}
	return len;
}

/*

Prototype :

	int sumOfDigitArray(int * arr , n );
	
	This function takes array address and array length as input
	and replace elements in array with its sum of digits 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
// to calculate sum of respective number
int sumDigits(int num){
	int sum=0;
	while(num>0){
		sum+=(num%10);
		num/=10;
	}
	return sum;
}

// Replacing elements with its sum of digits . 
int sumOfDigitArray(int *arr,int len){

	for(int i=0; i<len ; i++){
		*(arr+i) = sumDigits(*(arr+i));
	}
	return len;
}

/* 

Prototype :

	int duckArray(int * arr , n );
	
	This function takes array address and array length as input
	and group duck elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
/* A Duck number is a positive number which has zeroes present in it, For example 3210, 8050896, 70709 are all Duck numbers.*/
int isduck(int num){

	int flag=0;
	int temp =num;
	while(num>0){
		if(num%10==0){
			flag=1;
			break;
		}
		num/=10;
	}

	if(flag==0){
		return 1;
	}else{
		return 0;
	}
}
//Grouping of Duck Number
int duckArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(isduck(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}
/*

Prototype :

	int automorphicArray(int * arr , n );
	
	This function takes array address and array length as input
	and group automorphic elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
/* A number is called Automorphic number if and only if its square ends in the same digits as the number itself.*/
int isautomorphic(int num){

	int count=0,temp=num;
        while(num>0){
                count++;
                num/=10;
        }
        num=temp;
        int sq = num*num,num2=0;
        while(count>0){
                num2=(num2*10)+(sq%10);
                sq/=10;
                count--;
        }
        int rev = 0;
        while(num2>0){
                rev=(rev*10)+(num2%10);
                num2/=10;
        }
        if(rev==num){
                return 0;
        }else{
                return 1;
        }
}
//Grouping of Automorphic Number
int automorphicArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(isautomorphic(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}
/*

Prototype :

	int harshadArray(int * arr , n );
	
	This function takes array address and array length as input
	and group harshad elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
/* An integer number in base 10 which is divisible by the sum of its digits is said to be a Harshad Number.*/
int isharshad(int num){

	int sum = 0,temp=num, rem=0;
	while(temp>0){

		rem = temp%10;
		temp=temp/10;

		sum+=rem;
	}
	if(num%sum==0){
		return 0;
	}else{
		return 1;
	}
}
//Grouping of Harshad Number
int harshadArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(isharshad(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}
/*

Prototype :

	int armstrongArray(int * arr , n );
	
	This function takes array address and array length as input
	and group armstrong elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
/*Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.*/
int isarmstrong(int num){

	int count=0,temp;
	temp =num;
	while(num>0){

		num/=10;
		count++;
	}
	num=temp;
	int sum =0;
	while(num>0){
		int rem = num%10,mul=1;
		for(int i = 1; i<=count; i++){
			mul*=rem;
		}
		sum+=mul;
		num/=10;
	}
	if(sum==temp){
		return 0;
	}else{
		return 1;
	}	
}
//Grouping of Armstrong Number
int armstrongArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(isarmstrong(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}

/*
Prototype :

	int abundantArray(int * arr , n );
	
	This function takes array address and array length as input
	and group abundant elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/

/* A number n is said to be an Abundant Number if the sum of all the proper divisors of the number denoted by sum(n) is greater than the value of the number n.*/

int isabundant(int num){

	int sum=0;
	for(int i=1; i<=num/2; i++){
		if(num%i==0){
			sum+=i;
		}
	}
	if(sum>num){
		return 0;
	}else{
		return 1;
	}	
}
//Grouping of Abundant Number
int abundantArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(isabundant(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}
/*

Prototype :

	int spyArray(int * arr , n );
	
	This function takes array address and array length as input
	and group spy elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
/*A number is said to be a Spy number if the sum of all the digits is equal to the product of all digits .Examples1412.*/
int isspy(int num){
	
	int s=0,p=1,d;

	for(;num>0;){

		d=num%10;
        	s=s+d;
        	p=p*d;
        	num=num/10;
    	}


    	if(s==p)
        	return 0;
    	else
        	return 1;
	
}
//Grouping Spy of Number
int spyArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(isspy(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}
/*

Prototype :

	int strongArray(int * arr , n );
	
	This function takes array address and array length as input
	and group strong elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
/* Strong number is a special number whose sum of the factorial of digits is equal to the original number.*/
int isstrong(int num){

	int sum=0;
	int temp =num;
	while(num>0){
		int rem = num%10,fact=1;
		while(rem>0){
			fact*=rem;
			rem--;
		}
		sum+=fact;
		num/=10;
	}
	if(sum==temp){
		return 0;
	}else{
		return 1;
	}
}
//Grouping of Strong Number
int strongArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(isstrong(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}
/*

Prototype :

	int disariumArray(int * arr , n );
	
	This function takes array address and array length as input
	and group disarium elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
/* A number is called Disarium if sum of its digits powered with their respective positions is equal to the number itself*/
int isdisarium(int num){

	int count=0,sum=0;
	int temp=num;
	while(num>0){
		count++;
		num/=10;
	}
	num =temp;
	
	while(num>0){
		int rem = num%10,mul=1;
		for(int i=1; i<=count; i++){
			mul*=rem;
		}
		sum+=mul;
		count--;
		num/=10;
	}
	if(sum == temp){
		return 0;
	}else{
		return 1;
	}
}
//Grouping of Disarium Number
int disariumArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(isdisarium(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}
/*
Prototype :

	int deficientArray(int * arr , n );
	
	This function takes array address and array length as input
	and group deficient elements in array 

Parameters: 
	
 	int * arr : pointer to array 
 	int n : length of array
 
Return type : 

	Returns Updated Length	

*/
/*A deficient number or defective number is a number n for which the sum of divisors of n is less than 2n.*/
int isdeficient(int num){

	int sum=0;
	for(int i=1; i<=num/2; i++){
		if(num%i==0){
			sum+=i;
		}
	}
	if(sum<num){
		return 0;
	}else{
		return 1;
	}
}
//Grouping of Deficient Number
int deficientArray(int *arr,int len){

	int count = 0;
	int *temp = arr;
	for(int i=0; i<len ; i++){
		if(isdeficient(arr[i]) == 0 ){

			*(temp+count) = *(arr+i);
			count++;
		}
	}
	return count;
}
