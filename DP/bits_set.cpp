#include <bits/stdc++.h> 
using namespace std; 

int maximiseSubset(int arr[], int n, int k) 
{ 

	int ans = k; 

	int l = 0, r = 0; 
	while (r < n) { 

		while ((arr[r] - arr[l]) - (r - l) > k) 
			l++; 
		
	 
		ans = max(ans, r - l + k + 1); 
		
		r++; 
	} 

	return (ans); 
} 

int main() 
{ 
	int n; 
	int k ;
    cin>>n>>k;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

	cout<<maximiseSubset(arr, n, k); 
	return 0; 
} 
