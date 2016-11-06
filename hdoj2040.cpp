#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int a,b;
    int i,j,k;
    for(i=0;i<m;i++)
    {
       cin>>a>>b;
       int c[1000];
       int cnt=0;
       for(j=2;j<=b/2;j++)
       {
           if(b%j==0)
            {
                c[cnt]=j;
                cnt++;
            }
       }
       int sum=1;
       for(k=0;k<cnt;k++)
       {
           sum+=c[k];
       }
       if(sum==a)
            cout<<"YES"<<endl;
       else
            cout<<"NO"<<endl;
    }


    return 0;
}

