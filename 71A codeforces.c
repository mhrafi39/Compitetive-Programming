#include<stdio.h>
#include<string.h>
 
int main()
{
    char a[100];
    
    int c,n;
    scanf("%d",&n);
for(int i=0;i<=n;i++)    
{gets(a);
int l=strlen(a);
    if(l>10)
    {
        c=l-2;
        printf("%c%d%c\n",a[0],c,a[l-1]);
    }
    else
    printf("%s\n",a);
}
return 0;
}
