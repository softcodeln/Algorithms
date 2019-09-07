/*
    max sum subArray of non negative integers
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> max_sub_array(vector<int> &v)
{
    int i=0,maxm=0,fstart=-1,fend=-1,max_sum=0,sum=0,count=0;
    int end=-1,start=0,n=v.size();

    while(i<n)
    {
        if(v[i]>=0)
        {
            sum+=v[i];
            count++;
            end++;
        }

        if(sum>max_sum)
        {
            max_sum=sum;
            fstart=start;
            fend=end;
        }

        else if(sum==max_sum && count>maxm)
        {
            maxm=count;
            fstart=start;
            fend=end;
        }

        if(v[i]<0)
        {
            start=i+1;
            end=i;
            count=0;
            sum=0;
        }
        
        i++;
    }

    vector<int> r;
    if(fstart!=-1 && fend!=-1)
    {
        for(i=fstart;i<=fend;i++)
        {
            r.push_back(v[i]);
        }
    }

    return r;
}

int main()
{
    int n,i,x;
    cin>>n;

    vector<int> v1;

      for(i=0;i<n;i++)
      {
          cin>>x;
          v1.push_back(x);
      }

      vector<int> v2 = max_sub_array(v1);

      for(auto it=v2.begin();it!=v2.end();it++)
      {
          cout<<*it<<" ";
      }

      return 0;
}