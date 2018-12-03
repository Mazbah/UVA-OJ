#include<cstdio>
using namespace std;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main()
{
    long int a,b,i,x,y,c,t;
    while(scanf("%ld",&t)==1){
        while(t--){
            y=0;
            scanf("%ld%ld",&a,&c);
            if(c%a==0){
                x = c/a;
                for(i=x;i<=c;i=i+x){
                    if(i/gcd(i,a)==x){
                        b = i;
                        y = 1;
                        break;
                    }
                }
            }
            if(y==1)
                printf("%ld\n",b);
            else
                printf("NO SOLUTION\n");
        }}
    return 0;
}
