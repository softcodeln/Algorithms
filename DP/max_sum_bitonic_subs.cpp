#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;

	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int Sis[n],Sds[n];

	for(i=0;i<n;i++)
	{	Sis[i]=a[i];
		for(j=0;j<i;j++)
		{
			if(a[i]>a[j] && Sis[i]<Sis[j]+a[i])
				Sis[i]=Sis[j]+a[i];
		}
	}

	for(i=n-1;i>=0;i--)
	{
		Sds[i]=a[i];
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j] && Sds[i]<Sds[j]+a[i])
				Sds[i]=Sds[j]+a[i];
		}
	}

	int max=0;
	for(i=0;i<n;i++)
	{
		if(max<(Sis[i]+Sds[i]-a[i]))
			max = Sis[i]+Sds[i]-a[i];
	}

	cout<<max<<"\n";
	return 0;
}