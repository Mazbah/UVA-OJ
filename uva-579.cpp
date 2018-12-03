#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m;
    while(scanf("%d:%d",&h,&m)==2)
    {
        if(h==0 && m==0)
            break;
        if(h==12)
            h = 0;
        double x,y,a;
        x = (30.0*h)+(m/60.0)*30.0;
        y = m*6.0;
        a = (x-y);
        if(a<0)
            a *= -1;
        if(a>180)
            a = 360-a;

        printf("%.3lf\n",a);
    }
    return 0;
}
