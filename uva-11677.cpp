#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2,x,y,z;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0 && m1==0 && h2 ==0 && m2 ==0)
            break;
        x = (h1*60)+m1;
        y = (h2*60)+m2;
        if(y>x)
            cout<<y-x<<endl;
        else{
            z = 1440-x;
            cout<<z+y<<endl;
        }
    }
    return 0;
}
