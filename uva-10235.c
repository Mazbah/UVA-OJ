#include<stdio.h>
#include<math.h>
int main()
{
    long int n,i,r,x,j,y,num,b,c;
    while(scanf("%ld",&n)==1)
    {
        num = n;
        r = 0;
        x = 0;
        y = 0;
        if(n==2){
            printf("2 is prime.\n");
            continue;
        }
        b = (int)sqrt(n);
        if(n%2==0){
            y = 1;
            printf("%ld is not prime.\n",n);
        }
        else{
            for(i=3;i<=b;i=i+2){
                    if(n%i == 0){
                     printf("%ld is not prime.\n",n);
                     y = 1; break;
                }}
                if(y==0){
                    while(num!=0){
                        r = r*10+num%10;
                        num = num/10;
                        if(num==0)
                            break;
                    }
                    if(r==n){
                        printf("%ld is prime.\n",n);
                        continue;
                    }
                    c = (int)sqrt(r);
                    if(r%2==0){
                        x = 1;
                        printf("%ld is prime.\n",n);
                    }
                    else{
                        for(j=3;j<=c;j=j+2){
                            if(r%j==0){
                                printf("%ld is prime.\n",n);
                                x=1;
                                break;
                            }}
                    if(x==0)
                         printf("%ld is emirp.\n",n);
                    }}}
    }
    return 0;
}
