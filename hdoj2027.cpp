#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j;
    int n;
    scanf("%d",&n);
    getchar();
    for(j=0;j<n;j++)
    {
        int num1=0,num2=0,num3=0,num4=0,num5=0;
        
        gets(str);
        
        for(i=0;str[i];i++)
        {
            if(str[i]=='a') num1++; 
            else if(str[i]=='e') num2++;
            else if(str[i]=='i') num3++;
            else if(str[i]=='o') num4++;
            else if(str[i]=='u') num5++; 
        }
        printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",num1,num2,num3,num4,num5);
        if(j!=(n-1)) printf("\n");
    }

    
    return 0;
} 
