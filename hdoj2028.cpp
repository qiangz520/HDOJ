#include<stdio.h>  
int gcd(int a,int b)  
{  
    int i;  
    while(a%b)//շת��������Լ��  
    {  
        i=a%b;a=b;b=i;  
    }  
    return b;  
}  
  
int gbd(int a,int b)  
{  
    return a/gcd(a,b)*b;//����� ����С������  
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
            s=gbd(s,a);//ÿ����һ����С������...  
        }  
        printf("%d\n",s);  
    }  
    return 0;  
}  
