//
// Created by HP on 07-Mar-18.
//

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n ){
    int i,f[n+1];
    f[0]=0;
    f[1]=1;
    for(i=2;i<n;i++)
        f[i]=f[i-1]+f[i-2];
    return f[n-1];
}

int main(void){
    int n;
    printf("enter number N :\n");
    scanf("%d",&n);
    cout <<"Nth fibonacci number is "<< fibonacci(n);
    return 0;
}
