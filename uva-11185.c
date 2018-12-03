#include<stdio.h>
int main ()

{
    long int t,N,rem,i,j;
    for(j=1;j<=100;j++){
        scanf("%ld",&N);
        i=1;t=0;
        if(N<0){
            break;
        }
        else{
            while(N!=0){
                rem = N%3;
                t = t+rem*i;
                N = N/3;
                i = i*10;
                if(N==0)
                    break;
            }
            printf("%ld\n",t);}
    }
    return 0;
}
