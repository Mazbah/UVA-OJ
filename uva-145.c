#include<stdio.h>
int main()
{
    char s;
    char str[9];
    int a,b,c,d,e,f,g,h,x,y,X,Y;
    double sum2=0,sum1=0,sum;
    while(scanf("%c",&s)){
        if(s=='#')
            break;
        scanf("%s",str);
        scanf("%d%d%d%d",&a,&b,&c,&d);
        x = (a*60)+b;
        y = (c*60)+d;
        if(s=='A'){
            if(x>480 && x<=1080){
                X = 1080-x;
                sum1 = X*.10;
            }
            else if(x>=0 && x<=480){
                X = 480-x;
                sum1 = X*0.02;
            }
            else if(x>1320 && x<=1440){
                X = 1440 - x;
                sum1 = X*0.02;
            }
            else if(x>1080 && x<=1320){
                X = 1320 - x;
                sum1 = X*0.06;
            }
            if(y>480 && y<=1080){
                Y = y-480;
                sum2 = Y*.10;
            }
            else if(y>=0 && y<=480){
                Y = y-0;
                sum2 = Y*0.02;
            }
            else if(y>1320 && y<=1440){
                Y = y-1320;
                sum2 = Y*0.02;
            }
            else if(y>1080 && y<=1320){
                Y = y-1080;
                sum2 = Y*0.06;
            }
        sum = sum1+sum2;
        printf("%10s%6d%6d%6d%3c%8ld\n",str,X,Y,0,s,sum);
        }
    }
    return 0;
}
