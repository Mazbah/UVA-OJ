#include<stdio.h>
#include<math.h>
int main()
{
    double m,n,y,a,b,c,x;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
        m = 2*((pow(a,2)*pow(b,2))+(pow(b,2)*pow(c,2))+(pow(c,2)*pow(a,2)));
        y = pow(a,4)+pow(b,4)+pow(c,4);
        n = m-y;
        if(n>0.0){
            x = (1.0/3)*sqrt(n);
            printf("%.3lf\n",x);
        }
        else
            printf("-1.000\n");
    }
    return 0;
}
