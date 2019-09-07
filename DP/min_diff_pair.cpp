///..........n>1...........///
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i;//,min=INT_MAX;
	
    cin>>t;
    while(t--)
    {
        int min=INT_MAX;
        	cin>>n;
	int arr[n];
	cin>>arr[0];
	for (i=1; i<n; i++)
	    cin>>arr[i];
	   
	sort(arr, arr+n);
	
	for (i=0;i<n-1;i++)
	{
	    if( abs(arr[i+1]-arr[i]) < min)
	        min = abs(arr[i+1]-arr[i]);
	}
	cout<<min<<"\n";
    
    }

	return 0;
}