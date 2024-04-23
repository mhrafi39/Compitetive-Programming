#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,r=0;
        cin>>n>>a>>b;
        if(n%2==0)
        {
            if((n*a)<((n/2)*b))
                r=n*a;
            else
                r=(n/2)*b;
        }
        else
        {
            if((n*a)<(((n-1)/2)*b)+a)
                r=n*a;
            else
                r=(((n-1)/2)*b)+a;
        }
        cout<<r<<endl;
    }
}
