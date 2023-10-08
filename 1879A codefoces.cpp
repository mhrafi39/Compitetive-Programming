#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int s,e,ps,pe,w,t,n;
    cin>>t;
    while(t--)
    { cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s>>e;
        if(i==0)
        {
            ps=s;
            pe=e;
            w=s;
        }
        else
        {
            if(ps<=s&&pe<=e)
                w=-1;
        }
    }
    cout<<w<<endl;
    }
 
}
