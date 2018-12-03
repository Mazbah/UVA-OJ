#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    long long int fact;
    while(scanf("%lld",&n)==1)
    {
        fact = 1;
        if(n<0&&n%2==0)
            printf("Underflow!\n");
        else if(n<0&&n%2!=0)
            printf("Overflow!\n");
        else if(n==0||n<=7)
            printf("Underflow!\n");
        else if(n>13)
            printf("Overflow!\n");
        else{
            for(i=2;i<=n;i++){
                fact *= i;
            }
            printf("%llu\n",fact);
        }
    }
    return 0;
}
