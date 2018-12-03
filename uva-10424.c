#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],str1[30];
    double a;
    int x,i,sum,y,sum1;
    while(gets(str))
    {
        gets(str1);
        sum =0;
        a=0;
        for(i=0;i<strlen(str);i++){
            if(str[i]>='a' && str[i]<='z')
                sum+= str[i]-96;
            else if(str[i]>='A' && str[i]<='Z')
                sum += str[i]-64;
        }
        x =0;
        while(sum !=0){
            x += sum%10;
            sum = sum/10;
        }
        if(x>9){
            sum=x;
            x = 0;
            while(sum!=0){
                x += sum%10;
                sum = sum/10;
            }
        }
        sum1 =0;
        for(i=0;i<strlen(str1);i++){
            if(str1[i]>='a'&& str1[i]<='z')
                sum1+= str1[i]-96;
            else if(str1[i]>='A' && str1[i]<='Z')
                sum1 += str1[i]-64;
        }
        y=0;
        while(sum1 !=0){
            y += sum1%10;
            sum1 = sum1/10;
        }
        if(y>9){
            sum1=y;
            y = 0;
            while(sum1!=0){
                y += sum1%10;
                sum1 = sum1/10;
            }
        }
        if(x<y){
            a = ((x*1.00)/y)*100;
            printf("%.2lf %c\n",a,'%');
        }
        else{
           a = ((y*1.00)/x)*100;
            printf("%.2lf %c\n",a,'%');
        }
    }
    return 0;
}
