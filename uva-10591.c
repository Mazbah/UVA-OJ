#include<stdio.h>
int main()
{
    long int N,i,a,b,c,t,sum,num;
    while(scanf("%ld",&t)!=EOF){
        for(i=1;i<=t;i++){
            scanf("%ld",&N);
            num = N;
            if(num==0)
                break;
            else{
                while(sum !=0){
                    sum = 0;
                    while(num!=0){
                        a = num%10;
                        num = num/10;
                        c = a*a;
                        sum +=c;
                        if(num == 0){
                            num = sum;
                            break;}
                    }
                    if(num<=9)
                        break;}}
            if(num ==1 || num==7)
                printf("Case #%ld: %ld is a Happy number.\n",i,N);
            else
                printf("Case #%ld: %ld is an Unhappy number.\n",i,N);}

    }
        return 0;
}
