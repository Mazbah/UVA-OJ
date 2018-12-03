#include<stdio.h>
int main()
{
    int T,j,a,b,c,x;
    while(scanf("%d",&T)==1)
    {
        for(j=1;j<=T;j++){
            scanf("%d%d%d",&a,&b,&c);
            if(a>b && b>c || a<b && b<c)
                x=b;
            else if(b>a && a>c || b<a && a<c)
                x=a;
            else x = c;

            printf("Case %d: %d\n",j,x);
        }
    }
    return 0;
}
