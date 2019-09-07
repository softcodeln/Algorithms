#include<bits/stdc++.h>
using namespace std;

class Activity
{
    public:
    int start, finish;
};

bool compare(Activity act1, Activity act2)
{
    return ( act1.finish < act2.finish );
}

void NoActivity(Activity actlist[], int n)
{
    int i,m;
    i=0;
    cout<<"Compatible Activities start and end time";
    cout<<actlist[i].start<<" -> "<<actlist[i].finish<<"\n";
    for (m=1; m<n; m++)
    {
        if( actlist[i].finish <= actlist[m].start )
        {
            cout<<actlist[m].start<<" -> "<<actlist[m].finish<<"\n";
            i = m;
        }
    }
}

int main()
{
    int n, i;
    cin>>n;
    int strt[n],fnsh[n];
    Activity actlist[n];

    for (i=0; i<n; i++)
        cin>>strt[i];

    for (i=0; i<n; i++)
        cin>>fnsh[i];
    
    for (i=0; i<n; i++)
    {
        actlist[i].start = strt[i];
        actlist[i].finish = fnsh[i];
        //cout<<actlist[i].start<<" -> "<<actlist[i].finish<<"\n";
    }

    sort(actlist,actlist+n,compare);

    NoActivity(actlist,n);

    return 0;
}