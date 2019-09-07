#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,n,i,c;
    cin>>t;
    while(t--)
    {
        c=1;
        cin>>n;

        for (i=0; i<floor(log2(n)); i++)
            c *=2;
        cout<<c<<"\n";
    }
    return 0;
}