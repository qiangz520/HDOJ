#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF&&n>0)
    {    
        int i,j,t,a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(j=0;j<n-1;j++)
        for(i=0;i<n-1-j;i++)
         if(a[i]>a[i+1])
         {
             t=a[i];a[i]=a[i+1];a[i+1]=t; 
         } 
         int s=0;
         double result;
         for(i=1;i<=n-2;i++)
             s=s+a[i];
         result=s*1.0/(n-2);
         printf("%.2lf\n",result);

    }
}
