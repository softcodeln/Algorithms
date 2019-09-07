//
// Created by HP on 23-Jan-18.
//

//
// Created by HP on 23-Jan-18.
//

#include<iostream>
using namespace std;

int main(void)
{
    int min,i,a,b,hcf,lcm;

    cin>>a>>b;
    min=a>b?b:a;
    for(i=2;i<=min;i++){
        if(a%i==0 && b%i==0)
            hcf=i;
    }

    lcm=(a*b)/hcf;
    cout<<"lcm = "<<lcm<<endl<<"hcf = "<<hcf;

    return 0;
}

