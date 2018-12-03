#include<stdio.h>
int main()
{
    int j,i,x,a,sum,m,n,c,b;
    while(scanf("%d",&n)){
        if(n==0)
            break;
        else{
            sum=0;
            c = 0;
            while(n!=0){
               x = n%10;
               sum +=x;
               n = n/10;}
            if(sum>=10){
                while(sum!=0){
                   m = sum%10;
                   c+=m;
                   sum = sum/10;
               }}
            else
                 c = sum;
            a = 0;
            if(c>=10){
                while(c!=0){
                   b = c%10;
                   a+=b;
                   c = c/10;
               } }
            else
                a = c;
            printf("%d\n",a);}
    }
    return 0;
}




