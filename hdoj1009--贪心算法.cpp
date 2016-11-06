#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
struct change
{
    int j;
    int f;
    double g;
}a[1000];
int cmp(change a,change b)
{
    return a.g>b.g;
}
int main()
{
    int m,n;
    int i;
    while(cin>>m>>n&&!(n==-1&&m==-1))
    {
       for(i=0;i<n;i++)
       {
           cin>>a[i].j>>a[i].f;
           a[i].g=a[i].j*1.0/a[i].f;
       }

       sort(a,a+n,cmp);
       double maxi=0;
       for(i=0;i<n;i++)
       {
          if(a[i].f<=m)
          {
              maxi+=a[i].j;
              m-=a[i].f;
          }
          else
          {
              maxi+=m*a[i].g;
              m=0;
          }
       }
       printf("%.3lf\n",maxi);
    }


    return 0;
}

