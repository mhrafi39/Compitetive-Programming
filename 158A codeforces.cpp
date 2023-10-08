#include <stdio.h>
 
int main() {
    int n,k,c=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    { 
      scanf("%d",&a[i]);
    }
    int kth=a[k-1];
    for(int i=0;i<n;i++)
    {
        if(a[i]>=kth&&a[i]>0)
        c++;
    }
    printf("%d",c);
    return 0;
  
}
