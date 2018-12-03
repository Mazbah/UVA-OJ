#include<stdio.h>
int main()
{
    long long int a,b;
    char ch;
    while(scanf("%lld %c %lld",&a,&ch,&b) != EOF){
        if(ch == '/')
            printf("%lld\n",a/b);
        else if(ch == '%')
            printf("%lld\n",a%b);
    }
    return 0;
}
