#include<stdio.h>
int main()
{
    int K,i,N,M,X,Y;
    while(scanf("%d",&K) != EOF){
        if(K==0){
            break;
        }
        else{
            scanf("%d%d",&N,&M);
            for(i=0;i<K;i++){
                scanf("%d%d",&X,&Y);
                if(X==N || Y==M)
                    printf("divisa\n");
                else if(X>=N && Y>=M)
                    printf("NE\n");
                else if(X<=N && Y>=M)
                    printf("NO\n");
                else if(X<=N && Y<=M)
                    printf("SO\n");
                else
                    printf("SE\n");
            }
        }
    }
    return 0;
}
