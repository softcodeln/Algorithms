#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
cin>>t;
while(t--)
{
    string s;
    long long int l,n=0,m=0;


    cin>>s;
    l = s.length();
    while(l)
    {
        n = n*10+(int(s[l-1])-48);
        l--;
    }

    cin>>s;
    l = s.length();
    while(l)
    {
        m = m*10+(int(s[l-1])-48);
        l--;
    }
    n = n+m;
    m=0;
    ostringstream str1; 
    str1 << n;
    s = str1.str();
    
    l = s.length();
    while(l)
    {
        m = m*10+(int(s[l-1])-48);
        l--;
    }

cout<<m<<"\n";
}
return 0;
}