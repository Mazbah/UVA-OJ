#include<stdio.h>
int main()
{
    int N,i,sum,y=1;
    while(scanf("%d",&N)==1)
    {
        if(N==0){
            printf("END OF OUTPUT\n");
            break;}
        else{
            sum=0;
            if(y==1)
                printf("PERFECTION OUTPUT\n");
            for(i=1;i<N;i++){
                if(N%i==0)
                   sum+=i;
            }
            if(sum==N)
                printf("%5d  PERFECT\n",N);
            else if(sum>N)
                printf("%5d  ABUNDANT\n",N);
            else
                printf("%5d  DEFICIENT\n",N);
        }
        y++;
    }
    return 0;
}
