#include<stdio.h>
int main()
{
    long long int x;
    while(scanf("%lld",&x)){
        if(x==0){
            break;
        }
        else{
            printf("%lld %lld\n",x+1,x+2);
        }
    }
    return 0;
}
