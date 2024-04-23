#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,sum=0;
        cin>>m>>n>>k;
        int b[m],c[n];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(b[i]+c[j]<=k)
                    sum++;
            }
        }

        cout<<sum<<endl;
    }
}
