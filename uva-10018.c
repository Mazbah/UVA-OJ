#include<stdio.h>
int main()
{
    long int n,r,x,term,t,i,c;
    while(scanf("%ld",&t)==1)
    {
        while(t--){
            c = 0;
            scanf("%ld",&n);
            while(1){
                term = n;
                r = 0;
                while(n!=0){
                    r = r*10+n%10;
                    n = n/10;
                }
                if(r==term){
                    printf("%ld %ld\n",c,r);
                    break;
                }
                else
                    n = term+r;
                    c++;
            }
        }
    }
    return 0;
}
