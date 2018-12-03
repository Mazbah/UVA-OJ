#include<stdio.h>
int main()

{
    long int s,d,i,n,x,y;
    while(scanf("%ld",&n)==1)
    {
        for(i=1;i<=n;i++){
            scanf("%ld%ld",&s,&d);
                x = (s+d)/2;
                y = (s-x);
                if(s<d ||(s-d)%2 !=0){
                    printf("impossible\n");
                }
                else
                    printf("%ld %ld\n",x,y);
        }
    }
    return 0;
}
