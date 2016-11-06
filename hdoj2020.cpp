#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j;

    while(scanf("%d",&n)!=EOF)
    {
       if(n==0)
        break;
       else
       {
        int a[100]={0};
        int t;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(j=0;j<n;j++)
        {

            for(i=0;i<n-j;i++)
            {
                if(fabs(a[i])<fabs(a[i+1]))
                {
                    t = a[i+1];
                    a[i+1] = a[i];
                    a[i] = t;
                }
            }

        }

        for(i=0;i<n-1;i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d\n",a[n-1]);

        }
    }
    return 0;
}

