// C++ problem to find out the 
// largest palindrome number which 
// is product of two n digit numbers 
#include <iostream> 
using namespace std; 

// Function to calculate largest 
// palindrome which is product of 
// two n-digits numbers 
int larrgestPalindrome(int n) 
{ 
	int upper_limit = 0; 

	// Loop to calculate upper bound 
	// (largest number of n-digit) 
	for (int i = 1; i <= n; i++) 
	{ 
		upper_limit *= 10; 
		upper_limit += 9; 
	} 

	// largest number of n-1 digit. 
	// One plus this number is lower 
	// limit which is product of two numbers. 
	int lower_limit = 1 + upper_limit / 10; 

	// Initialize result 
	int max_product = 0; 
	for (int i = upper_limit; 
			i >= lower_limit; 
			i--) 
	{ 
		for (int j = i; j >= lower_limit; j--) 
		{ 
			// calculating product of 
			// two n-digit numbers 
			int product = i * j; 
			if (product < max_product) 
				break; 
			int number = product; 
			int reverse = 0; 

			// calculating reverse of 
			// product to check whether 
			// it is palindrome or not 
			while (number != 0) 
			{ 
				reverse = reverse * 10 + 
						number % 10; 
				number /= 10; 
			} 

			// update new product if exist 
			// and if greater than previous one 
			if (product == reverse && 
				product > max_product) 
				
				max_product = product; 
		} 
	} 
	return max_product; 
} 

// Driver code 
int main() 
{ 
	int n = 3; 
	cout << larrgestPalindrome(n); 
	return 0; 
} 
