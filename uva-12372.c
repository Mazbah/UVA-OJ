#include<stdio.h>
int main()
{
    int T,L,W,H,i;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++){
            scanf("%d%d%d",&L,&W,&H);
            if(L>20 || W>20 || H>20)
                printf("Case %d: bad\n",i);
            else
                printf("Case %d: good\n",i);
        }
    }
    return 0;
}
