#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,i=0;
    cin>>n;
    string s;
    cin>>s;
    while(n--)
    {
        if(s[i]=='1')
            sum++;
        else
            sum--;
            i++;
    }
    cout<<abs(sum)<<endl;

}
