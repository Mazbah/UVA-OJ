#include<stdio.h>
int main ()
{
    long int i,j;
    while(scanf("%ld%ld",&i,&j) != EOF){
        if(j>i)
            printf("%ld\n",j-i);
        else
            printf("%ld\n",i-j);
    }
    return 0;
}
