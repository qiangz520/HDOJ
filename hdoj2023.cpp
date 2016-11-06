#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
struct grade
{
    int c[5];
    int sum;//单个学生总成绩
    double ave;//单个学生平均成绩

}s[50];
int main()
{
    int i,j;
    int n,m;
    while(cin>>n>>m)
    {
        int j_sum[5]={0};//某一课程的总成绩
        double cou_ave[5];//所有课程的平均成绩
        for(i=0;i<n;i++)
        {
            s[i].sum=0;
            for(j=0;j<m;j++)
            {
                cin>>s[i].c[j];
                s[i].sum+=s[i].c[j];
            }
            s[i].ave=s[i].sum*1.0/m;

        }
        for(i=0;i<n;i++)
        {
            if(i!=n-1) printf("%.2lf ",s[i].ave);
            else printf("%.2lf\n",s[i].ave);
        }

        for(j=0;j<m;j++)
        {
            for(i=0;i<n;i++)
            {
                j_sum[j]+=s[i].c[j];
            }
            cou_ave[j]=j_sum[j]*1.0/n;
            if(j!=m-1) printf("%.2lf ",cou_ave[j]);
            else printf("%.2lf\n",cou_ave[j]);

        }
        int cnt1=0;
        for(i=0;i<n;i++)
        {
            int cnt2=0;
            for(j=0;j<m;j++)
            {
                if(s[i].c[j]>=cou_ave[j])
                {
                    cnt2++;
                }
            }
            if(cnt2==m) cnt1++;
        }
        cout<<cnt1<<endl<<endl;

    }


    return 0;
}

