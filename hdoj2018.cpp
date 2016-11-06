#include <stdio.h>
int main()
{
    int j,n,a[60];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        else{
        a[1]=1;
        a[2]=2;
        a[3]=3;
        for(j=4;j<=n;j++)
            a[j]=a[j-1]+a[j-3];
        printf("%d\n",a[n]);
        }
    }
    return 0;
}

