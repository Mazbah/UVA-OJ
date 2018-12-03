#include<stdio.h>
#include<math.h>
#define PI 3.1415926535897932384626433832795
int main()
{
    double r,a,n;
    while(scanf("%lf%lf",&r,&n) != EOF){
        a=r*r*n/2*sin(2.0*PI/n);
        printf("%0.3lf\n",a);
    }
    return 0;
}


/// Area of a polygoan = (r^2)*n*(1/2)*sin(360/n)(degree)
/// Area of a polygoan = (r^2)*n*(1/2)*sin(2*PI/n)(redius)
