#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,c;
    cin>>t;

    while(t--)
    {
        int n;
        c=0;
        cin>>n;
        char s[n];
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='+')
                c++;
            else if(s[i]=='-')
                c--;

        }
        cout<<abs(c)<<endl;
    }
}
