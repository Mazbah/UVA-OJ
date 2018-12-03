#include<stdio.h>
int main ()
{
    int T,x;
    long int a,b,c;
    scanf("%d",&T);
    if(T>0 && T<20){
        for(x=1;x<=T;x++){
            scanf("%ld%ld%ld",&a,&b,&c);
            if(a+b>c && b+c>a && c+a>b){
                if(a==b && b==c && c==a){
                    printf("Case %d: Equilateral\n",x);
                }
                else if(a==b || b==c || c==a){
                    printf("Case %d: Isosceles\n",x);
                }
                else if(a!=b && b!=c && c!=a){
                    printf("Case %d: Scalene\n",x);
                }
            }
            else{
                printf("Case %d: Invalid\n",x);
            }
        }
    }
    return 0;
}













