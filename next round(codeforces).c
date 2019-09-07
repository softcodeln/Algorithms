//
// Created by HP on 19-Mar-18.
//

#include<stdio.h>
//using namespace std;

int main(void)
{
    int i,j,n,count=0,k;

  ///  cin>>n>>k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=1;i<=n;i++)
    {
        //cin>>a[i];
        scanf("%d",&a[i]);
        if(a[1] !=0 && a[i]>0)
        {
            if(i<=k)
            {
                count++;
                continue;
            }

            if(i>k && a[k]==a[i])
                count++;
        }

        else
            break;
    }
        printf("%d",count);
   // cout<<count;
    return 0;
}