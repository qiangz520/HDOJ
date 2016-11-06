#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF&&n<=100)
    {
        int i,a[100];
        a[0]=2;
        for(i=1;i<n;i++)
        {
            a[i]=a[i-1]+2;
        }
        int s=0,r;
        for(i=0;i<n;i++) 
        {
            s=s+a[i];
            if((i+1)%m==0)
            {
                r=s/m;
                if(i!=n-1) printf("%d ",r);
                if(i==n-1) printf("%d\n",r);
                s=0;
            }
            if(i==n-1&&(n-(n/m)*m)<m&&(n-(n/m)*m)>0)
            {
                r=s/(n-(n/m)*m);
                printf("%d\n",r);
                s=0;
            }

        }
    }
    return 0;
} 
