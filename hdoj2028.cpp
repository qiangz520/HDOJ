#include<stdio.h>  
int gcd(int a,int b)  
{  
    int i;  
    while(a%b)//辗转相除求最大公约数  
    {  
        i=a%b;a=b;b=i;  
    }  
    return b;  
}  
  
int gbd(int a,int b)  
{  
    return a/gcd(a,b)*b;//防溢出 求最小公倍数  
}  
  
int main()  
{  
    int n,i,s,a;  
    while(~scanf("%d",&n))  
    {  
        scanf("%d",&s);  
        for(i=1;i<n;++i)  
        {  
            scanf("%d",&a);  
            s=gbd(s,a);//每次求一次最小公倍数...  
        }  
        printf("%d\n",s);  
    }  
    return 0;  
}  
