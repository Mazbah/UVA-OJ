#include<stdio.h>
#include<string.h>
int main()
{
    long int a,b,c,d,e,l,h,f,i;
    char str[1000000];
    int p =0;
    while(scanf("%s",str)!=EOF)
    {
        if(p!=0) printf("\n");
        p = 1;
        a=b=c=d=e=l=h=f=0;
        for(i=0;i<strlen(str);i++){
            a = ((a*10)+(str[i]-'0'))%4;
            b = ((b*10)+(str[i]-'0'))%100;
            c = ((c*10)+(str[i]-'0'))%400;
            d = ((d*10)+(str[i]-'0'))%15;
            e = ((e*10)+(str[i]-'0'))%55;
        }
        if((a==0&&b!=0)|| c==0){
            printf("This is leap year.\n");
            l =1;
            f = 1;
        }
        if(d==0){
            printf("This is huluculu festival year.\n");
            f=1;
        }
         if(l==1 && e==0){
            printf("This is bulukulu festival year.\n");
            f=1;
         }
         if(f==0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}
