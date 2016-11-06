#include<stdio.h>
void order(int a,int b,int c)
{
    int t;
    if(a>b) 
    {
        t=a;
        a=b;
        b=t;
    }
    if(a>c)
    {
        t=a;
        a=c;
        c=t;
    }
    if(b>c)
    {
        t=b;
        b=c;
        c=t;        
    }
    
    printf("%c %c %c\n",a,b,c);
    
    
}
int main()
{
    int i,k,j=3;
    int n[3];
    char str[3];
    while(scanf("%s",str)!=EOF) 
    {
    
    for(i=0;i<3;i++)
    {
    n[i]=str[i];
    }
    order(n[0],n[1],n[2]);
    }
    return 0;
} 
