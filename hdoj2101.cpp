#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int s;
        s=a+b;
        if(s%86==0) printf("yes\n");
        if(s%86!=0) printf("no\n");
    }
    return 0;
}
