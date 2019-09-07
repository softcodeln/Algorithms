#include <iostream>
#include<string>
#include<sstream>
using namespace std;
 
int main() {
	
	int t,n,l;
	string s;
	cin>>t;
	while(t--)
	{
		if(cin>>n)
		{
		while(1)
		{
			int p =1;
			n++;
			ostringstream str1;
			str1<<n;
			s = str1.str();
			
			l = s.length();
			for(int i=0;i<l/2;i++)
			{
				if(s[i]!=s[l-1-i])
				{
				  p=0;
				  break;
				}
			}
			
			if(p==1)
			{
				cout<<n<<"\n";
				break;
			}
		}
		}
		
		else
		{	cout<<t+1;
			break;
		}
		
	}
	return 0;
}