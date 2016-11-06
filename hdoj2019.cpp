#include <stdio.h>

int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n==0&&m==0)
            break;
        else
        {
            int a[100];
            int i,j;
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            /*if(m<a[0])
            {
                for(i=n;i>=0;i--)
                {
                    a[i]=a[i-1];

                }
                a[0]=m;
            }*/
            if(m>=a[n-1])
            {
                a[n]=m;
            }
            else
            {
                for(i=0;i<n-1;i++)
                {
                    if(m>=a[i]&&m<a[i+1])
                    {
                        for(j=n;j>=i+2;j--)
                        {
                            a[j]=a[j-1];
                        }
                        a[i+1]=m;
                        break;
                    }

                }
            }
            for(i=0;i<n+1;i++)
            {
                if(i<n)
                    printf("%d ",a[i]);
                else 
                    printf("%d\n",a[i]);
            }
        }
    }

    return 0;
}

