#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int i,j,a;
    cin>>n;
    int m[31];
    for(j=1;j<=30;j++)
    {
        if(j==1)
            m[1]=(3-1)*2;
        else
            m[j]=(m[j-1]-1)*2;
    }
    for(i=0;i<n;i++)
    {
        cin>>a;

        cout<<m[a]<<endl;

    }

    return 0;
}

