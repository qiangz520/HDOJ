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
    double i,a,b,c;
    for(i=0;i<m;i++)
    {
       cin>>a>>b>>c;
       if((a+b)>c&&(a+c)>b&&(b+c)>a)
            cout<<"YES"<<endl;
       else
            cout<<"NO"<<endl;
    }


    return 0;
}

