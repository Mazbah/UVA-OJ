#include<stdio.h>
#include<math.h>
long long digit[10000001];
int main()
{
    int str,t,i,x,j;
    double fact = 0;
    for(j=1;j<=10000000;j++){
        fact += log10(j);
        digit[j] = fact;
    }
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++){
            scanf("%d",&str);
            printf("%d\n",digit[str]+1);
        }
    }
    return 0;
}
