#include <bits/stdc++.h>
using namespace std;

void prime(int n)
{
    int i,j;
    bool primeIS[n+1];

    for( i=0;i<=n;i++)         // .......  first of all assume all numbers as prime till n  ...... //
        primeIS[i] = true;

    primeIS[0]=false;          // .... 0 (zero) is prime ....//
    primeIS[1]=false;          // .... 1 (one) is prime ....//

    for(i=2;i*i<=n;i++)        // ... this loop will check ,whether a number is prime or not
    {
        if(primeIS[i]==true)   // .... if a number ( i )  is prime ie. primeIS[i]=true  , then below for loop will mark all multiple of i as non prime ... //
        {
            for(j=i*i;j<=n;j+=i)
                primeIS[j]=false;
        }
    }
    for(i=0;i<=n;i++)         // ... given loop will write all prime numbers ( i )  ie. primeIS[i]=true ..... //
    {
        if(primeIS[i]==true)
            cout<<i<<" ";
    }

}

int main()
{
    int n;
    cin>>n;     // enter number till you want prime number's
    cout<<"Prime numbers are :\n";
    prime(n);               //..........   this function call print's all the prime numbers upto n ....//
    return 0;
}