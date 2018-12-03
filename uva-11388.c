#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
    long long int temp;
    while(b!=0){
            temp = b;
            b = a%b;
            a = temp;
    }
    return a;
}
int main()
{
    long long int G,L,a,b;
    int T,j;
    while(scanf("%d",&T)!=EOF){
        for(j=0;j<T;j++){
            scanf("%lld%lld",&G,&L);
            a = gcd(G,L);
            b = (G*L)/a;
            if(a==G && b==L)
                printf("%lld %lld\n",a,b);
            else
                printf("-1\n");
        }
    }
    return 0;
}
