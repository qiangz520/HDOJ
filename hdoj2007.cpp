#include<stdio.h>
int main()
{
    int m,n,x,y;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        int i;
        if(m>n)
        {
            i=n;
            n=m;
            m=i;
        }
        x=0;y=0;
        for(i=m;i<=n;i++)
        {
        if(i%2==0) x=x+i*i;
        else y=y+i*i*i; 
        }
        printf("%d %d\n",x,y);
    }
    
    
    return 0;
}
