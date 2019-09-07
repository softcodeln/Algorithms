//
// Created by HP on 12-Aug-18.
//

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,n;
    cin>>n>>k;

    if(n%2==0)
    {
        if(n/2>=k)
            cout<<2*k-1;
        else
            cout<<(k-n/2)*2;
    }

    else
    {
        if( (n+1)/2 >= k)
            cout<<2*k-1;
        else
            cout<<(k-(n+1)/2)*2;
    }
    return 0;
}