#include<bits/stdc++.h>
using namespace std;
#define INT_SIZE 32

/*Given an array where every element occurs N times, except one element which occurs only once.
Find the element that occurs once. Expected time complexity is O(n) and O(1) extra space.*/

int getSingle(int arr[], int n, int N) 
{ 
	int result = 0; 

	int x, sum; 

	for (int i = 0; i < INT_SIZE; i++) 
	{ 

	sum = 0; 
	x = (1 << i); 
	for (int j=0; j< n; j++ ) 
	{ 
		if (arr[j] & x) 
			sum++; 
	} 

	if (sum % N) 
		result |= x; 
	} 

	return result; 
}

int main()
{
	int arr[] = {12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 7}; 
	int n = sizeof(arr) / sizeof(arr[0]),N=3; 
	cout<<"The element with single occurrence is "<< getSingle(arr, n,N); 

	return 0; 
} 