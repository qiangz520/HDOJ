#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int s=1;
        int i;
        for(i=1;i<n;i++)
        {
            s=2*(s+1);
        }
        printf("%d\n",s); 
    }
}
