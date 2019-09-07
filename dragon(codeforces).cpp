//
// Created by HP on 11-Aug-18.
//

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int i,count=0,n,k,l,m,d;
    int a[100001]={0};

    cin>>k>>l>>m>>n>>d;

    for(i=k;i<=d;i+=k)
        a[i]++;

    for(i=l;i<=d;i+=l)
    {
        if(a[i]==0)
            a[i]++;
    }

    for(i=m;i<=d;i+=m)
    {
        if(a[i]==0)
            a[i]++;
    }


    for(i=n;i<=d;i+=n)
    {
        if(a[i]==0)
            a[i]++;

    }

    for(i=1;i<=d;i++)
    {
        count+=a[i];
    }
    cout<<count;
    return 0;
}
