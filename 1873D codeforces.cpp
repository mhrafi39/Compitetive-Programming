#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,l,n,c,temp;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>l>>n;
        cin>>s;
        c=0;
        for(int i=0; i<l; i++)
        {
            if(s[i]=='B')
            {
                c++;
                i=i+(n-1);
            }
        }
        cout<<c<<endl;
 
    }
 
 
}
