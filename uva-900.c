#include<stdio.h>
int main()
{
    int i,n;
    long long a[1000];
    while(scanf("%d",&n)){
        if(n==0)
            break;
        else{
            a[1]=1;
            a[2]=2;
            for(i=3;i<=n;i++){
                a[i] = a[i-1]+a[i-2];
            }
            printf("%lld\n",a[n]);
        }
    }
    return 0;
}
