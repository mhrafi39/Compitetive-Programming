#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,p;
    cin>>t;
    char ch;
    while(t--)
    {p=0;
 
        for(int i=0; i<10; i++)
        {
            for(int j=0; j<10; j++)
            {
                cin>>ch;
                if((i==0||i==9||j==0||j==9)&&ch=='X')
                    p+=1;
               else if((i==1||i==8||j==1||j==8)&&ch=='X')
                    p+=2;
                else if((i==2||i==7||j==2||j==7)&&ch=='X')
                    p+=3;
                else if((i==3||i==6||j==3||j==6)&&ch=='X')
                    p+=4;
                else if((i==4||i==5||j==4||j==5)&&ch=='X')
                    p+=5;
            }
        }
        cout<<p<<endl;
    }
}
