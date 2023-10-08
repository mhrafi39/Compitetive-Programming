#include <iostream>
using namespace std;
 
int main() {
   int n,Petya,Tonya,Vasya,c=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>Petya;
       cout<<' ';
       cin>>Tonya;
       cout<<' ';
       cin>>Vasya;
       if(Petya+Tonya+Vasya>=2)
        c++;
       
   }
   cout<<c;
 
    return 0;
}
