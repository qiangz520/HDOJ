#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <ctype.h>
using namespace std;
int main()
{
    int n,m,i;
    int a[40];
    for(i=1;i<=40;i++)
    {
        if(i==1)
            a[i]=1;
        else if(i==2)
            a[2]=1;
        else a[i]=a[i-1]+a[i-2];
    }
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        cout<<a[m]<<endl;

    }


    return 0;
}

