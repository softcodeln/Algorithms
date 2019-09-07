//
// Created by HP on 24-Aug-18.
//
#include<iostream>
#include <math.h>
using namespace std;

class Triangle
{
protected:
    int a,b,c;
public:
    void get()
    {
        cin>>a;
        cin>>b;
        cin>>c;
    }
    void Area() {
        int s = (a+b+c)/2;
        cout << pow(s*(s-a)*(s-b)*(s-c),0.5);
    }
};

int main() {
    Triangle t1;
    cout << "enter sides of triangle\n";
    t1.get();
    return 0;
}