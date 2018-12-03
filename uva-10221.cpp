#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    double a,s,rad,deg,x,y,arc,chord;
    string str;
    while(cin>>s>>a>>str)
    {
        if(a>180)
            a = 360-a;

        s += 6440;
        if(str=="min"){
            a /= 60.0;
        }
        rad = (pi*a)/180.0;
        arc = s*rad;
        chord = 2*s*sin(rad/2.0);

        printf("%.6lf %.6lf\n",arc,chord);
    }
    return 0;
}
