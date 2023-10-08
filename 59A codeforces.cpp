#include <bits/stdc++.h>
#include<cctype>
using namespace std;
 
int main() 
{ string s;
cin>>s;
int u=0,l=0;
for(int i=0;i<s.size();i++)
{
   
        if(s[i]<'a')
        u++;
        else
        l++;
    
  
}
for(int i=0;i<s.size();i++)
{ char ch;
    if(u>l)
ch=toupper(s[i]);
else
ch=tolower(s[i]);
cout<<ch;
 
    
}
 
 
 
    return 0;
}
