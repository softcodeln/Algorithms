////..........Number of trailing zeroes in factorial of a number n .............//////////

#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
	long long int n,i=5,s=0;
	s=0;
	i=5;
	cin>>n;
	while(n/i!=0)
	{
		s+=n/i;
		i*=5;
	}
	cout<<s<<"\n";
}
return 0;
}