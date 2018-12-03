#include<bits/stdc++.h>
using namespace std;
long long int bigmod(long long int a,long long int b)
{
    if(b==0) return 1%10;
    long long int x = bigmod(a,b/2);
    x = (x*x)%10;
    if(b%2 ==1)
        x = (x*a)%10;
    return x;
}
int main()
{
    long long m,n,x,y;
    while(cin>>x>>y)
    {
        if(x==0 && y==0)
            break;

        cout<<bigmod(x,y)<<endl;
    }
    return 0;
}
