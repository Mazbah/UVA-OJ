#include<stdio.h>
int main()
{
    int N,a;
    while(scanf("%d",&N)==1)
    {
        a = N;
        while(N>=3){
             a = a+(N/3);
             N = (N/3)+(N%3);
        }
        if(N==2){
            a++;
        }
        printf("%d\n",a);
    }
    return 0;
}
