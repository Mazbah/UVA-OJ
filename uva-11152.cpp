#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int a,b,c,d;
    double x,y,z;
    while(cin>>a>>b>>c)
    {
        double r1,r2,r3,s,a1;
        double s1 = (a+b+c)/2.0;
        double x1 = s1*(s1-a)*(s1-b)*(s1-c);
        s = sqrt(x1);
        r1 = (a*b*c)/(4.0*s);
        r2 = s/s1;
        a1 = (pi*r1*r1);

        x = (a1-s);
        z = (pi*r2*r2);
        y = (s-z);
        printf("%.4lf %.4lf %.4lf\n",x,y,z);
    }
    return 0;
}
