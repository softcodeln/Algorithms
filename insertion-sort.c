//
// Created by HP on 14-Mar-18.
//

#include <stdio.h>
int main(void){
    int i,j,n,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=1;i<n;i++)
    {
        k = a[i];
        for(j = i-1;j>=0 && k<a[j] ; j--)
            a[j+1]=a[j];
        a[j+1]=k;
    }

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}