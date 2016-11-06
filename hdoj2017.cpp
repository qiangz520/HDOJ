#include<stdio.h>
#include<string.h>
int main()
{    
    int n;
    while(scanf("%d",&n)!=EOF&&n)
    {
        int a[n],i,j;
        for(i=0;i<n;i++)
        {
            char str[100];
            scanf("%s",str);
            int count=0;
            for(j=0;j<strlen(str);j++)
            {
                if(str[j]<='9'&&str[j]>='0') count++;
            }
            a[i]=count;
        }
        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
        
    }
    return 0;
}



