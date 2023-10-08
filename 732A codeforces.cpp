#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int k,r,c=1;
    cin>>k>>r;
    int temp=k;
    while(1)
    {
        if(k%10==r||k%10==0)
            break;
        c++;
        k+=temp;
 
    }
    cout<<c<<endl;
 
}
