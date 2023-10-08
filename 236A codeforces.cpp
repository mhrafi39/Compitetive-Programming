#include<bits/stdc++.h>
using namespace std;
 
int main() {
   string s;
   int c=0;
   cin>>s;
   for(int i=0;i<s.size();i++)
   { c++;
       for(int j=0;j<i;j++)
       {
           if(s[i]==s[j])
          { c--;
    
           break;
          }
       }
   }
   if(c%2==0)
   cout<<"CHAT WITH HER!";
   else
   cout<<"IGNORE HIM!";
 
    return 0;
}
