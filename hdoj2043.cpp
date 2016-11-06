//http://acm.hdu.edu.cn/showproblem.php?pid=2043 
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <ctype.h>
using namespace std;
int isign(char a)
{
    int i;
    char s[7]={'~','!','@','#','$','%','^'};
    for(i=0;i<7;i++)
    {
        if(s[i]==a)
        {
            return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    int m,i,j;
    char str[50];
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>str;
        int k=strlen(str);
        int cnt[4]={0};
        for(j=0;j<k;j++)
        {
            if(isdigit(str[j])) cnt[0]=1;
            if(islower(str[j])) cnt[1]=1;
            if(isupper(str[j]))  cnt[2]=1;            
            if(isign(str[j]))    cnt[3]=1;        
        }
        if(k>=8&&k<=16&&(cnt[0]+cnt[1]+cnt[2]+cnt[3]>=3))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

