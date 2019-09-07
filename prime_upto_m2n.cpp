#include <bits/stdc++.h>
using namespace std;

void prime(int m, int n)
{
    if(m==1)
        m++;

    for (int i=m; i<n; i++)
    {
        int count =0;

            for(int j=1; j<=sqrt(i); j++)
            {
            if(i%j==0)
                count++;
            if(count==2)
            {
                count=0;
                break;
            }
            }
            if(count==1)
                cout<<i<<"\n";
    
    }
}

int main()
{
    int n,m,t;
    cin>>t;

while(t--)
{
    cin>>m>>n;    
    prime(m,n);               //..........   this function call print's all the prime numbers from m to upto n ....//
    cout<<"\n";
}
    return 0;
}