//
// Created by Lucky on 11-Aug-18.
//

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int i,j,n,z=0,o=0;
    cin>>n;
    string str;
    cin>>str;

    for(i=0;i<n;i++)
    {
        if(str[i]=='0')
         z++;

         else
          o++;
    }

    if(o>z)
     cout<<o-z;
    else
        cout<<z-o;
    return 0;
}