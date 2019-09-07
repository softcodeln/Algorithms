#include<iostream>
using namespace std;

int main()
{
    long long int x=0,n,i,count=0;
    cin>>n;
    for(int i=1;x<=n;i+=2)
    {
        x +=i;
        count++;
    }
    cout<<(count-1);

        return 0;
}