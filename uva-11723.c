#include<stdio.h>
int main()
{
    int R,N,D,i;
    i = 0;
    while(scanf("%d%d",&R,&N)==2){
        if(R == 0 && N==0)
            break;
        else{
            D = (R-1)/N;
            i++;
            if(D>26)
                printf("Case %d: impossible\n",i);
            else
                printf("Case %d: %d\n",i,D);}
    }
    return 0;
}
