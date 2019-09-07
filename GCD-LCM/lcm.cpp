//
// Created by HP on 23-Jan-18.
//

#include<iostream>
using namespace std;

int main(void)
{
    int n , i ;
    cin>>n;
    int a[n];
    //int i;
    for(i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    int ans , j , min , gcd = 1;
    ans = a[0];
    for(i = 1;i < n;i++){
        min=ans>a[i]?a[i]:ans;
        for(j = 1;j <= min;j++){
            if(ans%j == 0 && a[i]%j == 0)
                gcd = j;
        }
        ans = (ans * a[i])/gcd;
    }
    cout<<"\n"<<"LCM = "<<ans<<"\n";
    return 0;
}
