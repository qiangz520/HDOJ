#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n;
    int i,j;
    char str[100];
    while(cin>>n)
    {
        getchar();
        for(i=0;i<n;i++)
        {
            gets(str);
            int cnt=0;
            int m = strlen(str);
            for(j=0;j<m;j++)
            {
                if(str[j]>0&&str[j]<=127)
                    cnt++;
            }
            int num = strlen(str)-cnt;
            cout<<num/2<<endl;
        }

    }


    return 0;
}

