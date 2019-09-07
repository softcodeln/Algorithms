#include<bits/stdc++.h>
using namespace std;

/*Given an array where every element occurs two times, except one element which occurs only once.
Find the element that occurs once. Expected time complexity is O(n) and O(1) extra space.*/

int main()
{
    int n,t,i;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int res;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        res=arr[0];
        for(i=1;i<n;i++)
            res = res^arr[i];

        cout<<res<<"\n";
    }

    return 0;
}