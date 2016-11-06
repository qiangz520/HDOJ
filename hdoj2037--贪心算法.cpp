#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
struct T
{
    int s;
    int e;
}t[101];
int cmp(T x,T y)
{
    return x.e<y.e;
}

int main()
{
    int n;
    int i;
    while(cin>>n&&n)
    {
        for(i=0;i<n;i++)
        {
            cin>>t[i].s>>t[i].e;
        }
        sort(t,t+n,cmp);
        int tmp = t[0].e;
        int cnt = 1;
        for(i=1;i<n;i++)
        {
            if(t[i].s>=tmp)
            {
                cnt++;
                tmp = t[i].e;
            }

        }
        cout<<cnt<<endl;
    }


    return 0;
}

