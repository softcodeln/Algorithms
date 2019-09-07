#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int i,n,t,l,m1,m2,mid;
    string s;

    cin>>t;

while(t--)
{
     cin>>s;
     l = s.length();
    if(l%2==0)
    {
         m1 = (l/2)-1;
         m2 = (l/2);
        while(1)
        {

            if(s[m1]>s[m2] )
            {
                for(i=0;i<=m1;i++)
                    s[l-1-i]=s[i];
		cout<<s<<"\n";
                break;
            }

            else if(s[m1]<s[m2])
            {
                s[m1]+=1;
                for(i=0;i<=m1;i++)
                    s[l-1-i]=s[i];
		cout<<s<<"\n";
                break;
            }

            else
            {
                m1--;
                m2++;

				if(m1<0)
            	{
                		cout<<"1";
                		for(i=1;i<l;i++)
                	    	cout<<"0";
                		cout<<"1\n";
                		break;
            	}
            }
        }
    }

     else
     {
        m1 = (l/2)-1;
		mid = (l/2)-1;
        m2 = (l/2)+1;
		while(1)
		{
        	if(s[m1]>s[m2])
        	{
            	for(i=0;i<=m1;i++)
                	s[l-1-i]=s[i];
				cout<<s<<"\n";
            	break;
        	}

        	else if(s[m1]<s[m2])
        	{
            	if(s[mid+1] == '9')
            	{
               		s[mid+1]='0';
                	s[mid]+=1;
            	}
				else
					s[mid+1]+=1;

            	for(i=0;i<=m1;i++)
                	s[l-1-i]=s[i];
				cout<<s<<"\n";
            	break;
        	}

        	else
        	{
            	m1--;
            	m2++;
					
					if(m1<0)
            		{
                	cout<<"1";
                	for(i=1;i<l;i++)
                	    cout<<"0";
                	cout<<"1\n";
                	break;
            		}	
			}	
		}
	}
}
    return 0;
}
