#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m,n,c,a=0;
    string s,x;
    cin>>t;
    while(t--)
    { c=0;
        cin>>m>>n;
        cin>>x;
        cin>>s;
        while(1)
        {
            a=x.find(s);
            if(m>1000)
            {
                c=-1;
                break;
            }
            else if(a>=0)
                break;
            else
            {
                x+=x;
                c++;
                m=x.size();
            }
        }
        cout<<c<<endl;
    }
}
