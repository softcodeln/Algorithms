#include<iostream>
using namespace std;

bool find_partition(int arr[], int n,int sum)
{
    int i,j;
    
    bool part[sum+1][n+1];

    for(i=0;i<=n;i++)
        part[0][i]=true;

    for(i=1;i<=sum;i++)
        part[i][0]=false;

    for(i=1;i<=sum;i++)
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

    return part[sum][n];
}

int main()
{
    int arr[]= {15, 22, 14, 26, 32, 9, 16, 8},sum=53;
    int n = sizeof(arr)/sizeof(arr[0]);

    if(find_partition(arr,n,sum)==true)
        cout<<"Subset possible\n";
    
    else
        cout<<"Subset not possible\n";
    
    return 0;
}