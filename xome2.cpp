// C++ program for the above approach 

#include <bits/stdc++.h> 
using namespace std; 

#define MAX 1000050 
#define lli long int 

// https://www.geeksforgeeks.org/minimise-n-such-that-sum-of-count-of-all-factors-upto-n-is-greater-than-or-equal-to-x/


// Array to store smallest 
// prime factors of each no. 
lli spf[MAX + 1]; 

// Function to calculate smallest 
// prime factor of N. 
void calculate_SPF() 
{ 
	for (lli i = 0; i <= MAX; i++) 
		spf[i] = i; 

	for (lli i = 4; i <= MAX; i += 2) 
		spf[i] = 2; 

	for (lli i = 3; 
		i * i <= MAX; i++) { 

		if (spf[i] == i) { 
			for (int j = i * i; 
				j <= MAX; j += i) 

				// marking spf[j] if 
				// it is not previously 
				// marked 
				if (spf[j] == j) 
					spf[j] = i; 
		} 
	} 
} 

// Array to store the count of 
// factor for N 
lli tfactor[MAX + 1]; 

// Prefix array which contains 
// the count of factors from 1 to N 
lli pre[MAX + 1]; 

// Function to count total factors 
// from 1 to N 
void CountTotalfactors() 
{ 
	tfactor[1] = pre[1] = 1; 

	for (lli i = 2; i <= MAX; i++) { 

		lli mspf = spf[i]; 
		lli prim = mspf; 
		lli temp = i; 
		lli cnt = 0; 

		while (temp % mspf == 0) { 
			temp /= mspf; 
			cnt += 1; 
			prim = prim * mspf; 
		} 

		// Store total factors of i 
		tfactor[i] = (cnt + 1) 
					* tfactor[temp]; 

		// Stores total factors 
		// from 1 to i 
		pre[i] = pre[i - 1] 
				+ tfactor[i]; 
	} 
} 

// Function to search lowest X 
// such that the given condition 
// is satisfied 
lli BinarySearch(lli X) 
{ 
	lli start = 1; 
	lli end = MAX - 1; 

	while (start < end) { 

		// Find mid 
		lli mid = (start + end) / 2; 

		if (pre[mid] == X) 
			return mid; 

		// Search in the right half 
		else if (pre[mid] < X) 
			start = mid + 1; 

		// Search in the left half 
		else
			end = mid; 
	} 

	// Return the position after 
	// Binary Search 
	return start; 
} 

// Function to find the required sum 
void findSumOfCount(int X) 
{ 

	// Precompute smallest prime 
	// factor of each value 
	calculate_SPF(); 

	// Calculate count of total 
	// factors from 1 to N 
	CountTotalfactors(); 

	// Binary search to find minimum N 
	cout << BinarySearch(X) 
		<< endl; 
} 

// Driver Code 
int main() 
{ 
	// Given Sum 
	int X = 10; 

	// Function Call 
	findSumOfCount(X); 

	return 0; 
} 
