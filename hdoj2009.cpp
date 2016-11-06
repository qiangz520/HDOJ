#include<stdio.h>
#include<math.h>
int main()
{
    double n;
    int m,i;
    double t;
    while(scanf("%lf %d",&n,&m)!=EOF&&n<10000&&m<1000)
    {
        double s;
        s=n;
        for(i=0;i<m-1;i++)
        {
            t=sqrt(n);
            s=s+t;
            n=t;
        }
        printf("%.2lf\n",s);
    }
    return 0;
} 
