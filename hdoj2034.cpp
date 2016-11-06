#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <algorithm> 
using namespace std;
int main()
{
    int n,m;
    int i,j,x,y;
    int cnt;
    int a[100],b[100],c[100],d[100];
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;
        else
        {
            for(i=0;i<n;i++)
            {
                cin>>a[i];
            } 
            for(j=0;j<m;j++)
            {
                cin>>b[j]; 
            } 
            int k=0;
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(a[i]==b[j])
                    {
                        c[k]=a[i];
                        k++;
                        break;    
                    }
                    
                    
                }
            }
            x=0;
            for(i=0;i<n;++i)
            {
                cnt=0;
                for(j=0;j<k;j++)
                {
                    
                    if(a[i]!=c[j])
                    {
                        cnt++;
                    }
                    
                }
                
                if(cnt==k)
                {
                    d[x]=a[i];
                    x++;
                    
                }
                
                
            }
            
            if(x==0)
                    cout<<"NULL"<<endl;
            else
            {
                sort(d,d+x);
                for(y=0;y<x;y++)
                {
                    cout<<d[y]<<" ";
                    
                }
                cout<<endl;
                
            }
                
        
        }
    }
    
    
    


    return 0;
}

