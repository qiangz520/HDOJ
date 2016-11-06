#include<stdio.h>
int main()
{
    int i, n, a,s=1;
    while(scanf("%d",&n)!=EOF)
    {
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==1) s=s*a;
    }
    printf("%d\n",s);
    s=1;
    }
    
    return 0;
}
