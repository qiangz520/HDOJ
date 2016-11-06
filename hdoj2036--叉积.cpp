#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int x[100],y[100];
double area(int a,int b)
{
    return x[a]*y[b]-x[b]*y[a];
} 
int main()
{
    int n;
    int i; 
    while(cin>>n&&n) 
    {
        double sum = 0; 
        for(i=0;i<n;i++)
        {
            cin>>x[i];cin>>y[i];
        }
        sum+=area(n-1,0);
        for(i=0;i<n-1;i++)
        {
            sum += area(i,i+1);
        }
        
        printf("%.1lf\n",sum/2);
         
    }


    return 0;
}

