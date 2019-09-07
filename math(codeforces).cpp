//
// Created by HP on 11-Aug-18.
//

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int i,n,j;
    cin>>n;

        for(j=4;j<n;j+=2)
        {

            for(i=2;i<=sqrt(n-j);i++)
            {
                if( (n-j)%i == 0)
                {
                    cout<<j<<" "<<n-j;
                    i=0;
                }

                if( i == 0)
                    break;
            }

            if( i == 0)
                break;
        }
    return 0;
}