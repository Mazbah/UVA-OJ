#include<stdio.h>
int main()
{
    int a,b,c,sum,n,s,k;
    while(scanf("%d%d",&n,&k) != EOF){
        s = n;
        sum = 0;
        while(s>=k){
            a = s/k;
            b = s%k;
            s=a+b;
            sum = sum+a;
        }
        printf("%d\n",n+sum);
    }
    return 0;
}
