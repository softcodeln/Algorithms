#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,j,x,k;
    cin>>n;
    int arr[n];
    cout<<"Enter unsorted array\n";
    
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=1;i<n;i++)
    {
        x=arr[i];
        for(j=0;j<i;j++)
        {
            if(arr[j]>arr[i])
            {
                arr[i]=arr[j];
                arr[j]=x;
                x=arr[i];
            }
        }
    }

    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}