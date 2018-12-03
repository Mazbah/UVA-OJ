#include<stdio.h>
#include<math.h>
int main()
{
    int N,i,X=1;
    while(scanf("%d",&N)==1)
    {
        if(N<0) break;
        else if(N==1) printf("Case %d: 0\n",X);
        else{
            for(i=0;i<14;i++){
                if(pow(2,i)<N && N<=pow(2,i+1))
                    printf("Case %d: %d\n",X,i+1);
        }}
        X++;
    }
    return 0;
}
