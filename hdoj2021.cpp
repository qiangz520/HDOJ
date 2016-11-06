#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
       if(n==0)
        break;
       else
       {
           int a[100];
           int x = 0;
           for(i=0;i<n;i++)
            scanf("%d",&a[i]);
           for(i=0;i<n;i++)
           {
               x=x+a[i]/100+a[i]%100/50+a[i]%100%50/10+a[i]%100%50%10/5+a[i]%100%50%10%5/2+a[i]%100%50%10%5%2;

           }
           printf("%d\n",x);
       }
    }
    return 0;
}

