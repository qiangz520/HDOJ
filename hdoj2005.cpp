#include<stdio.h>
int main()
{
    int y,m,d,D,feb;
    while(scanf("%d/%d/%d",&y,&m,&d)!=EOF)
    {
        if(y%400==0||y%100!=0&&y%4==0)
            feb=29;
        else feb=28;
            switch(m)
            {
            case 1:D=d;break;
            case 2:D=d+31;break;
            case 3:D=d+31+feb;break;
            case 4:D=d+62+feb;break;
            case 5:D=d+92+feb;break;
            case 6:D=d+123+feb;break;
            case 7:D=d+153+feb;break;
            case 8:D=d+184+feb;break;
            case 9:D=d+215+feb;break;
            case 10:D=d+245+feb;break;
            case 11:D=d+276+feb;break;
            case 12:D=d+306+feb;break;
            }
        printf("%d\n",D);
    }
    
    return 0;
}
