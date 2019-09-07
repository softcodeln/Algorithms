#include <iostream>
using namespace std;

int main() {
    int i,n,t,count=0,x;
    cin>>t;			   //   no. of test cases //
    while(t--){
        cin>>n;               //   size of array     //
        count=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x%2!=0)
                count++;        // counter for odd number input  //
        }
        if( count % 2 == 0 && n!=1 )       // if number of odd input r odd  //
            cout << "1" <<"\n";

        else if( count%2!=0 && n!=1)      // if number of odd input r even  //
            cout << "2" << "\n";

        else                          // if number of is one (1)    //
            cout<<"1"<<"\n";
    }
    return 0;
}