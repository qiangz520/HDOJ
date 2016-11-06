#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        if(a<0||a>100) printf("Score is error!\n");
        if(a>=0&&a<=59) printf("E\n");
        if(a>=60&&a<=69) printf("D\n");
        if(a>=70&&a<=79) printf("C\n");
        if(a>=80&&a<=89) printf("B\n");
        if(a>=90&&a<=100)printf("A\n");
        
    }
    return 0;
}
