#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    while(gets(str))
    {
        for(i=0;i<strlen(str);i++)
        {
            if(i==0||str[i-1]==' ') printf("%c",str[i]-32);
            else printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
} 
