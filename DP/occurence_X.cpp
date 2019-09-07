#include<iostream>
using namespace std;

int main()
{
    int n,i,t,l,u,x,count=0,k;
    cin>>t;

    while(t--)
    {
        cin>>x;
        cin>>l>>u;
        for(k=l+1; k<u; k++)
        {
            i=k;
            while(i>0)
            {
                n = i%10;
                if(n==x)
                 {
                     count++;
                 }   
                i = i/10;
            }
        }
        cout<<count<<"\n";
    }

    return 0;
}
