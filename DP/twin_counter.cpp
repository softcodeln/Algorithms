#include<iostream>
#include<map>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, count=0;
		cin>>n;
		map<string, int> f;
		while(n--)
		{
			string s;
			cin>>s;
			f[s]++;
			if(f[s]==2)
				count++;
			if(f[s]==3)
				count--;
		}
		cout<<count<<"\n";
	}
	return 0;
}