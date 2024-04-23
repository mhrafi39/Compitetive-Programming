#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=1;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        a[0]=a[0]+1;
         for(int i=0;i<n;i++)
        {
            m*=a[i];
        }
        cout<<m<<endl;
    }
}
