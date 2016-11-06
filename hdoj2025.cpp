#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int len;//字符串长度
    int i;
    char m;//最大字母
    while(~scanf("%s",s))
    {
        len = strlen(s);
        m = s[0];
        for(i=1;i<len;i++)
        {
            if(s[i]>=m)
            {
                m=s[i];
            }
        }

        for(i=0;i<=len-1;i++)
        {
            printf("%c",s[i]);
            if(s[i]==m)
            {
                printf("(max)");
            }


        }
        printf("\n");

    }
    return 0;
}

