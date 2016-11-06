#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    char str[100];
    while(cin>>n&&n)
    {
        for(i=0;i<n;i++)
        {
            cin>>str;
            int mark = 1;
            for(j=0,k=strlen(str);j<=k/2;j++,k--)
            {
                if(str[j]!=str[k-1])
                {
                    mark = 0;
                    break;
                }
            }
            if(mark == 1)cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }

    }


    return 0;
}

