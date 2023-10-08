#include<bits/stdc++.h>
using namespace std;
 
int main()
{   int k,l,m,n,d,s=0,i=1;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    while(i<=d)
    {
        if(i%k==0||i%l==0||i%m==0||i%n==0)
        s++;
        i++;
    }
    cout<<s<<endl;
}
