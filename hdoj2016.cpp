#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int MIN = 1000000;
        int i,k,tmp;
        int a[100];
        if(n==0)
            break;
        else
        {
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);

            }
            for(i=0;i<n;i++)
            {
                if(a[i]<MIN)
                {
                    MIN=a[i];
                    k=i;
                }

            }
            tmp=*(a+k);
            *(a+k)=*(a);
            *(a)=tmp;
            for(i=0;i<n;i++)
            {
                if(i<n-1)
                    printf("%d ",a[i]);
                else
                    printf("%d\n",a[i]);
            }
        }

    }

    return 0;
}

