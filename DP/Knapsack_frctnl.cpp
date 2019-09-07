#include<bits/stdc++.h>
using namespace std;

class k_sak
{
    public:
    double  unit_val, wgt, val;

    void get_input()
    {
        cin>>wgt>>val;
        unit_val=val/wgt;
    }
};

bool compare( k_sak i1, k_sak i2)
{
    return ( i1.unit_val > i2.unit_val );
}

int main()
{
    int n,i;
    cin>>n;

    k_sak info[n];

    for (i=0; i<n; i++)
        info[i].get_input();
    
    sort(info, info+n, compare);

    double maxVal=0, w=0, Wmax;
    
    i=0;
    cout<<"Enter maximum capacity: ";
    cin>>Wmax;

    while ( Wmax > w )
    {
        if ( Wmax >= (info[i].wgt)+w )
        {
            maxVal+= info[i].val;
            w+= info[i].wgt;
        }

        else
        {
            maxVal+= ( (Wmax-w)/info[i].wgt) * info[i].val;
            w = Wmax;
        }
        i++;
    }
    cout<<maxVal<<"\n";

    return 0;
}