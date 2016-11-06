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
    int i,a;
    while(cin>>n&&n)
    {
        int sum=0;
        int la=0;
        for(i=0;i<n;i++)
        {
            cin>>a;

            sum=a>la?(sum+(a-la)*6+5):(sum+(la-a)*4+5);
            la=a;
        }
        cout<<sum<<endl;
    }


    return 0;
}

