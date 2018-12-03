#include<stdio.h>
int main()
{
    long int n,a;
    while(scanf("%ld",&n)==1){
        if(n==0){
            break;
        }
        else{
            a = sqrt(n);
            if(a*a==n)
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}
