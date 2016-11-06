#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int n,i,len,b;
    char a[50];
    cin>>n;
    getchar();
    for(i=0;i<n;i++)
    {
        cin.getline(a,50,'\n');
        len=strlen(a);
        if(a[0]=='_' ||(a[0]>='A' && a[0]<='Z') || (a[0]>='a' && a[0]<='z'))
        {
            for(b=1;b<len;b++)
            {
                if((a[b]=='_' )||(a[b]>='A' && a[b]<='Z') || (a[b]>='a' && a[b]<='z') ||(a[b]>='0' && a[b]<='9'))
                    continue;
                else
                    break;
            }
            if(b==len)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        else
        cout<<"no"<<endl;
 }
 return 0;
}

