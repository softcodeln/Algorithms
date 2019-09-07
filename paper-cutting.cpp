//
// Created by HP on 21-Mar-18.
//
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long int n,m,z,x,c,j,min,y;
    cin>>n>>m;
    z=n*m;
    min=z-1;
    if(z%2==0)
    {
           for(j=2;j*j<=z;j++)
           {
               if(z%j==0){
                   x = j ;
                   y = z/x ;
                   c = x+y-2 ;
                   if(min>c)
                       min = c ;
               }
           }
        cout<<min;
    }
    else
        cout<<z-1;
    return 0;
}