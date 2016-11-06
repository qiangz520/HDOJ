#include<stdio.h>
int main()
{
    int m,n;
    int result[50];
    while(scanf("%d %d",&m,&n)!=EOF&&m<=999&&m>=100&&n<=999&&n>=100)
    {
        if(m>n)
        {
            int t;
            t=m;
            m=n;
            n=t;
        }
        int i,a,b,c;
        int j=0;
        for(i=m;i<=n;i++)
        {
            a=i/100;
            b=(i-100*a)/10;
            c=(i-100*a-10*b);
            if(a*a*a+b*b*b+c*c*c==i)
            result[j++]=i;

        }
        if(!j) printf("no\n");
        else
            for(i=0;i<j;i++)
            {
                if(i==j-1) printf("%d\n",result[i]);
                else
                printf("%d ",result[i]);
            }
        
        

    }
}
