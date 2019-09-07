#include<iostream>
using namespace std;

int main()
{
	int n,excl,incl,excl_n,i;
	cin>>n;
	int arr[n];

	for(i=0;i<n;i++)
		cin>>arr[i];
	
	excl=0;
	incl=arr[0];

	for(i=1;i<n;i++)
	{
		excl_n=excl+arr[i];

		excl = excl>incl?excl:incl;
		incl=excl_n;
	}

	cout<<( (excl>incl)?excl:incl );

	return 0;
}
