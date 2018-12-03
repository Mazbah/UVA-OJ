#include<stdio.h>
int main()
{
    long long int x,y,z,c,r;
    while(scanf("%lld%lld",&x,&y)==2){
        if(x==0 && y==0)
            break;
            c=0;
            r = 0;
            while(x>0 || y> 0){
                   z = (x%10)+(y%10)+r;
                   if(z > 9){
                        c++;
                        r = 1;
                    }
                    else
                        r=0;
                     x = x/10;
                   y = y/10;
            }
            if(c==0)
                printf("No carry operation.\n");
            else if(c==1)
                printf("1 carry operation.\n");
            else
                printf("%lld carry operations.\n",c);}
    return 0;
}
