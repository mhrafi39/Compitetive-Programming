#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i=0;
        while(s[i]!='\0')
        {  c=0;
            if((int)s[i]=='a'+i)
            {
                c=1;
                break;
            }
            i++;
        }
        if(c)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

}
