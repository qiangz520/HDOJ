#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int i,j;
        int a[30][30];
        for(i=0;i<30;i++)
        {
            a[i][0]=1;
            a[i][i]=1;
        }
        for(i=2;i<30;i++)
        {
            for(j=1;j<i;j++)
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];

            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(j!=i)cout<<a[i][j]<<" ";
                else cout<<a[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}

