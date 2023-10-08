#include<bits/stdc++.h>
using namespace std;
 
int main() {
   int n,a=0,d=0;
   char ch;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>ch;
       if(ch=='A')
       a++;
       else
       d++;
       
   }
   if(a>d)
   cout<<"Anton";
   else if(a==d)
   cout<<"Friendship";
   else
   cout<<"Danik";
 
    return 0;
}
