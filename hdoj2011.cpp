#include<stdio.h>
int main()
{
    unsigned int m;
    while((scanf("%d",&m)!=EOF)&&m<100)
    {
        int i,j;
        unsigned int n[100];
        int t;
        for(i=0;i<m;i++)
        {
            scanf("%d",&t);
            n[i]=t; 
            
        }     
        for(i=0;i<m;i++)
        {    
            double s=0;
            int a=1; 
            for(j=1;j<=n[i];j++) 
            {
            s=s+a*1.0/j;
            a=-a;
            }
            printf("%.2lf\n",s);
        }
        
    }
    return 0;
}
