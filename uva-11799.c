#include<stdio.h>
int main()
{
    int N,T,c[10000],max,i,j;
    while(scanf("%d",&N)==1){
        for(i=1;i<=N;i++){
            scanf("%d",&T);
            for(j=0;j<T;j++)
                scanf("%d",&c[j]);
            max = c[0];
            for(j=0;j<T;j++){
                if(c[j]>max)
                    max = c[j];
            }
            printf("Case %d: %d\n",i,max);
        }
    }
    return 0;
}
