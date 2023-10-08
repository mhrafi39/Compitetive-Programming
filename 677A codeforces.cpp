#include <iostream>
using namespace std;
 
int main() {
    int n,h,c=0;
    cin>>n>>h;
    for(int i=1;i<=n;i++)
    {   int x;
        cin>>x;
        if(x>h)
         c+=2;
        else
         c+=1;
    }
    cout<<c<<endl;
 
    return 0;
}
