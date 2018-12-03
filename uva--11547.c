#include<stdio.h>
int main()
{
    int i,T,n;
    long int x,y,a,b,c;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++){
            scanf("%d",&n);
            a = (n*567)/9;
            b = (a+7492)*235;
            c = (b/47)-498;
            x = (c/10);
            y = x%10;
            if(y<0) printf("%ld\n",y*(-1));
            else printf("%ld\n",y);
        }
    }
    return 0;
}
