#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b&&(a||b))
    {
        int ans=1;
        if(b==0) ans = 1;
        while(b)
        {
            ans*=a;
            ans=ans%1000;
            b--;
        }
        cout<<ans<<endl;
    }


    return 0;
}

