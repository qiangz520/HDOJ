#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,i,j;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
       int a[m][n];
       int x,y;
       int s=0;
       for(i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
           {
               scanf("%d",&a[i][j]);
               if(fabs(a[i][j])>fabs(s))
               {
                   x=i+1;
                   y=j+1;
                   s=a[i][j];
               }

           }
       }
       printf("%d %d %d\n",x,y,s);

    }
    return 0;
}

