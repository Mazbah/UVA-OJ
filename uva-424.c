#include<stdio.h>
int main()
{
    long int ara[1000],sum[1000]={0};
    while(scanf("%llu",&ara)==1){
        sum+=ara;
        if(ara==0){
            printf("%llu\n",sum);
            break;}
    }
     return 0;
}
