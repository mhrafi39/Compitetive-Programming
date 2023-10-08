#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,s=0,c=0,b=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
  sort(a,a+n);
   
    for(int i=0;i<n;i++)
    {
        c+=a[n-1-i];
        b++;
        s-=a[n-1-i];
        if(s<c)
        break;
        
    }
    cout<<b;
 
   
 
    return 0;
}
