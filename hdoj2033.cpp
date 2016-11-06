#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    int a[10];
    cin>>n;
    
    while(n--)
    {
        for(i=0;i<6;i++)
        {
            cin>>a[i];
        }
        a[7]=(a[2]+a[5])%60;

        a[8]=((a[2]+a[5])/60+a[1]+a[4])%60;

        a[9]=((a[2]+a[5])/60+a[1]+a[4])/60+a[0]+a[3];

        cout<<a[9]<<" "<<a[8]<<" "<<a[7]<<endl;

    }

    


    return 0;
}

