#include<iostream>
#include<map>
using namespace std;

int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
		int a_=0,b_=0,c_=0;
		string s;
		cin>>s;

		for (int i=0; i<s.size(); i++)
		{
			if(s[i]=='a')
				a_ = 1 + 2 * a_;
			if(s[i]=='b')
				b_ = a_ + 2 * b_;
			if(s[i]=='c')
				c_ = b_ + 2 * c_;
		}
		cout<<c_<<"\n";
	}
	return 0;
}