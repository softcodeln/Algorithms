#include<bits/stdc++.h>
using namespace std;

int l_inc_subs(int arr[],int n)
{
	int i,j;
	int l[n];
	l[0]=1;

	for(i=1;i<n;i++)
	{
		l[i]=1;
		for(j=i-1;j>=0;j--)
		{
			if(arr[i]>arr[j] && l[i]< 1+l[j])
				l[i]= 1+l[j];
		}
	}

	return l[n-1];
}

int main()
{
	int n,i;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	cout<<l_inc_subs(arr,n);

	return 0;
}