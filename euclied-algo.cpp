//
// Created by HP on 15-Mar-18.
//
#include <bits/stdc++.h>
using namespace std;

int gcd(int a ,int b)
{
    if(b==0)
        return a;
    else
    {
        return gcd(b,a%b);
    }
}

int main(void)
{
    int a,b,max,min;
    cin>>a>>b;
    max=a>b?a:b;
    min=a<b?a:b;
    cout<<gcd(max,min);
    return 0;
}