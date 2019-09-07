#include<iostream>
using namespace std;

bool find_partition(int arr[], int n)
{
    int i,j,sum=0;

    for(i=0;i<n;i++)
        sum += arr[i];
    
    if(sum%2 !=0)
        return false;
    
    bool part[(sum/2)+1][n+1];

    for(i=0;i<=n;i++)
        part[0][i]=true;

    for(i=1;i<=sum/2;i++)
        part[i][0]=false;

    for(i=1;i<=sum/2;i++)
    {
        for(j=1;j<=n;j++)
        {
            part[i][j]=part[i][j-1];
            if(i>=arr[j-1])
            {
                part[i][j] = part[i][j] || part[i-arr[j-1]][j-1];
            }
        }
    }

    return part[sum/2][n];
}

int main()
{
    int arr[]= {3,1,1,2,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(find_partition(arr,n)==true)
        cout<<"Partition into 2 equal subsets possible\n";
    
    else
        cout<<"Partition into 2 equal subsets not possible\n";
    
    return 0;
}