#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;
char str[17]="0123456789ABCDEF";//��һ���ַ���������"0123456789ABCDEF"
void change(int n,int r)
{
    int a[100];
    int i=0;
    int j;
    if(n<0)
    {
        cout<<"-";
        n=-n;
    }
    while(n!=0)
    {
        a[i]=n%r;
        i++;
        n=n/r;
    }
    for(j=i-1;j>=0;j--)
    {
        cout<<str[a[j]];
    }
    cout<<endl;
}
int main()
{
    int n,r;
    while(cin>>n>>r)
    {
        change(n,r);
    }


    return 0;
}

