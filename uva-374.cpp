#include<bits/stdc++.h>
using namespace std;
int bigmod(long long int a,long long int b,long long int M)
{
    if(b==0) return 1%M;
    int x = bigmod(a,b/2,M);
    x = (x*x)%M;
    if(b%2==1)
        x = (x*a)%M;
    return x;
}
int main()
{
    long long int a,b,M,x;
    while(scanf("%lld%lld%lld",&a,&b,&M)!=EOF){
        x = bigmod(a,b,M);
        printf("%lld\n",x);
    }
    return 0;

}
