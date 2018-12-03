#include<stdio.h>
int main()
{
    long long int A,L,x;
    int i,y;
    i = 0;
    while(scanf("%lld%lld",&A,&L)==2){
        y = 1;
        x = A;
        if(A<0 || L<0)
            break;
        else{
            while(x!=1)
                if(x%2 == 0){
                    x = x/2;
                    y++;}
                else{
                    x = (3*x)+1;
                    y++;
                    if(x>L){
                        y--;
                        break;
                    }
                }
        }
        i++;
        printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",i,A,L,y);
    }
    return 0;
}
