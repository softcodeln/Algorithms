#include<bits/stdc++.h>
using namespace std;

#define max 10000
int dp[max];

void floor_f(int a[],int n);
int func(int x);

int main()
{
    memset(dp,-1,max);

    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    floor_f(a,n);

    return 0;
}

int func(int x)
{
    if(x==0) 
        return 0;
    if(dp[x]==-1)
    {
        dp[x]=x+func(x/2);
    }

    return dp[x];
}

void floor_f(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<func(a[i])<<" ";
    cout<<"\n";
}