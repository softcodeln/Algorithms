////////..........................
//................................RECURSIVE BINARY__SEARCH OPERATION
//..................................................................///////////////

#include<iostream>
#include<algorithm>
using namespace std;

int bin_srch(int a[],int x,int p,int r)
{
    int q;
    if(p==r)
    {
        if(x==a[p])
            return p;
        else
            return -1;
    }

    else
    {
        q = (p+r)/2;
        if(x> a[q])
            return (bin_srch(a,x,q+1,r) );
        else
            return( bin_srch(a,x,p,q) );
    }
}

int main()
{
    int n,i,x,index;
    
    cout<<"Enter size of array\n";
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    cout<<"Enter element you want to search\n";
    cin>>x;
    index = bin_srch(a,x,0,n-1);

    if(index!=-1)
        cout<<"Element found at index : "<<index;
    else
        cout<<"Element not present in given list \n";  

    return 0;
}