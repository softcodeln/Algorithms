//
// Created by HP on 09-Mar-18.
//
#include <bits/stdc++.h>
using namespace std;

int main(void){
    int i,count=0,l,d;
    char a[100001],c;
    cin>>a;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='a' && count==0)
        {      c=a[i];
            d=i;
            if(l-1-i >= 25 )
            { count++;  continue; }
            else
            { cout<<"-1"; break; }
        }

        if(a[i]!='z' && count>0  && ( a[i]==c || a[i]==a[d]+1 ) )
        {
            a[i]=a[d]+1;
            d=i;
            count++;
        }
        if(count==26 && a[i]=='z')
        {   cout<<a;  break; }
    }
    return 0;
}