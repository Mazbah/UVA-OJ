#include<stdio.h>
int main()
{
    int N,x[100000],i,sum,z;
    while(scanf("%d",&N)==1)
    {
        if(N==0) break;
        else{
            sum = 0;
            for(i=0;i<N;i++){
                scanf("%d",&x[i]);
            }
            z =x[0];
            for(i=1;i<N;i++){
                z += x[i];
                sum+=z;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
