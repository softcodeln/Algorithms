#include<iostream>
#include<algorithm>
using namespace std;

void MergeSort(int a[], int p, int r);
{
    int q;
    q = ( p+r ) / 2;
    MergeSort(a,p,q);
    MergeSort(a,q+1,r);
    Merge(a,p,q,r);
}

void Merge(int a[], int p, int q, int r)
{
    int n1 = q-p+1, n2 = r-q;
    int l1[n1+1],l2[n2+1];


}

int main()
{
    int i,n,p,r;
    cout<<"Enter the size of array\n";
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
        cin>>a[i];
    p  = 0;
    r = n-1;
    MergeSort(a,p,r);
    display(a,n);

    return 0;
}