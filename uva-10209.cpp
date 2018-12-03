#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main()
{
    double a;
    while(cin>>a)
    {
        printf("%.3lf %.3lf %.3lf\n",(a*a*(1-sqrt(3)+pi/3)),(a*a*(2*sqrt(3)-4+pi/3)),(a*a*(4-2*pi/3-sqrt(3))));
    }
    return 0;
}
