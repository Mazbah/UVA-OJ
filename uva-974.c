#include<stdio.h>
int main()
{
    int i,INF,SUP,j,T,x,y,sum,a,c;
    scanf("%d",&T);
    for(j=1;j<=T;j++){
        scanf("%d%d",&INF,&SUP);
        printf("Case #%d\n",j);
        for(i=INF;i<=SUP;i++){
            x = i*i;
            sum = 0;
            a =1;
            if(x>=10&&x<100){
                while(x!=0){
                    y = x%10;
                    if(y>0)
                        sum += y;
                    x = x/10;
                }}
            else if(x>=100 && x<10000){
                while(x!=0){
                    y = x%100;
                    if(y>0)
                        sum += y;
                    x = x/100;
                }}
            else{
                while(x!=0){
                    y = x%1000;
                    if(y>0)
                        sum += y;
                    x = x/1000;
                }}
            c=0;
            if(sum==i){
                c++;
                printf("%d\n",sum);}
        }
        if(c==0)
            printf("no kaprekar numbers\n");
        printf("\n");
   }
    return 0;
}
