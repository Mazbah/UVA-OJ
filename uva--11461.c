#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,x,i,y,m;
    while(scanf("%d%d",&a,&b)==2){
        if(a==0 && b==0)
            break;
        else{
            m = 0;
            for(i=a;i<=b;i++){
                x = sqrt(i);
                y = x*x;
                if(i == y){
                    m++;
                }
            }
        }
        printf("%d\n",m);
    }
}
