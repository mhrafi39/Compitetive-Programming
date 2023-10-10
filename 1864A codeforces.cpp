#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,n,c;
    cin>>t;
    while(t--)
    {  c=1;
        cin>>x>>y>>n;
        int a[n]= {0,0};
        a[0]=x;
        a[n-1]=y;
        for(int i=1; i<n-1; i++)
        {
            a[n-i-1]=a[n-i]-c;
            c++;

        }
        if(a[1]-a[0]>a[2]-a[1])
        {
            for(int i=0;i<n;i++)
                cout<<a[i]<<' ';
        }
        else
            cout<<"-1";
        cout<<endl;


    }
}
