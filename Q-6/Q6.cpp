
#include <bits/stdc++.h> 
using namespace std; 

int Square_Diff(int n){ 

int sum, sq, m; 

	// Sum of the squares of the 
	// first n natural numbers is 
	sum = (n * (n + 1) * (2 * n + 1)) / 6; 
	
	// Sum of n naturals numbers 
	sq = (n * (n + 1)) / 2; 

	// Square of k 
	sq=sq*sq;
	
	// Difference
	m = abs(sum - sq); 
	
	return m; 

} 

// Driver Code 
int main() 
{ 
	int n = 100; 
	cout << Square_Diff(n); 
	return 0; 
	
} 


