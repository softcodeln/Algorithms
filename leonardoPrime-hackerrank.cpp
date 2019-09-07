#include<bits/stdc++.h>
using namespace std;

unsigned long long int gcd ( unsigned long long int a, unsigned long long int b )
{
    if(b==0)
        return a;
    else
        return gcd(b , a%b);
}

unsigned  int UniquePrime( unsigned  long long int n )
{
    unsigned  long long int prdct,prm;
    unsigned  int count;

    if(n<2)
        return 0;

    prdct = 2 ;
    count = 1 ;
    for( prm = 3 ; prdct * prm <= n ;prm+=2 )
    {
        if( gcd(prdct , prm) == 1 )
        {
            prdct*=prm;
            count++;
        }
    }
    return count;
}

int main()
{
    unsigned  int t;
    unsigned  long long int n;
    cin>>t;
    while(t--)
    {
        cin >> n ;
        cout<<UniquePrime(n)<<"\n";
    }
    return 0;
}