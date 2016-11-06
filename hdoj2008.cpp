#include<stdio.h>
int main()
{
    int n,a,b,c;
    float x;
    while(scanf("%d",&n)!=EOF)
    
    {
        if(n==0)
                  break;
        int i;
        a=0;b=0;c=0;
        for(i=1;i<=n;i++)
        {
            scanf("%f",&x);
            if(x<0) a=a+1;
            else if(x==0) b=b+1;
            else c=c+1;
        }
        printf("%d %d %d\n",a,b,c); 
    
    }
    return 0;
}
