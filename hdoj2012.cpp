#include<stdio.h>
int main()
{
    int x,y;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
    
        if(x==0&&y==0){
        }
        else
        {    
            int i,j,k=0,l,s,a[10000],b[10000];
            for(i=x;i<=y;i++)
            {
                s=i*i+i+41;
                l=0;
                for(j=2;j<=s-1;j++)
                if(s%j!=0) b[l++]=j;
                if(l==s-2) a[k++]=i;
            }
            if(k==y-x+1) printf("OK\n");
            else printf("Sorry\n");
        }
    } 
    return 0;
} 
