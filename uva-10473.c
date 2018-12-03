#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j;
    long long int b,q,x,c,a,z,sum;
    char m[1000],str[1000];
    while(1){
        gets(str);
        if(str[0] == '0' && str[1]=='x'){
            sum =0;
            for(i=2;i<strlen(str);i++){
                if(str[i] == 'A' || str[i] == 'a')
                    sum = sum*16+10;
                else if(str[i] == 'B' || str[i] == 'b')
                    sum = sum*16+11;
                else if(str[i] == 'C' || str[i] == 'c')
                    sum = sum*16+12;
                else if(str[i] == 'D' || str[i] == 'd')
                    sum = sum*16+13;
                else if(str[i] == 'E' || str[i] == 'e')
                    sum = sum*16+14;
                else if(str[i] == 'F' || str[i] == 'f')
                    sum = sum*16+15;
                else
                    sum = sum*16+str[i]-'0';
            }
        printf("%lld\n",sum);}
        else{
            x=0;
            a = atoll(str);
            if(a<0)break;
            else{
               for(i=0;;i++){
                z = a%16;
                a /= 16;
                if(z == 10)
                    m[i] = 'A';
                else if(z == 11)
                    m[i] = 'B';
                else if(z == 12)
                    m[i] = 'C';
                else if(z == 13)
                    m[i] = 'D';
                else if(z == 14)
                    m[i] = 'E';
                else if(z == 15)
                    m[i] = 'F';
                else
                    m[i] = z+'0';
                x ++;
                if(a<=0)
                    break;
                }
                printf("0x");
                for(i=x-1;i>=0;i--)
                    printf("%c",m[i]);
                printf("\n");
           }}}
    return 0;
}



