#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a1,b1,a2,b2,a3,a4,b3,b4,a,b,c,d;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++){
            scanf("%d:%d %d:%d",&a1,&a2,&a3,&a4);
            scanf("%d:%d %d:%d",&b1,&b2,&b3,&b4);
            a = (a1*60)+a2;
            b = (a3*60)+a4;
            c = (b1*60)+b2;
            d = (b3*60)+b4;

            if(c>b || a>d)
                printf("Case %d: Hits Meeting\n",i);
            else
                printf("Case %d: Mrs Meeting\n",i);
        }
    }
    return 0;
}
