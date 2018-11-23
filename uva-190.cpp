#include<bits/stdc++.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,h,k,g,f,c,a;
    char c1,c2,c3;
    while(scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        g = ((x1*x1+y1*y1 -x3*x3 - y3*y3)*(y1-y2)-(x1*x1+y1*y1-x2*x2-y2*y2)*(y1-y3))/(2*(x1-x2)*(y1-y3)-2*(x1-x3)*(y1-y2));
        f = ((x1*x1+y1*y1 -x2*x2 - y2*y2)*(x1-x3)-(x1*x1+y1*y1-x3*x3-y3*y3)*(x1-x2))/(2*(x1-x2)*(y1-y3)-2*(x1-x3)*(y1-y2));
        c = -(x1*x1+y1*y1+2*g*x1+2*f*y1);
        h = -g;
        k = -f;
        a = sqrt(g*g+f*f-c);

        if(h>0) c1 = '-';
        else {c1 = '+';h = -h;}
        if(h==0){
            c1 = '+';
            h = -h;
        }
        if(k>0) c2 = '-';
        else{
            c2 = '+';
            k = -k;
        }
        if(k==0){
            c2 = '+';
            k = -k;
        }

        printf("(x %c %0.3f)^2 + (y %c %0.3f)^2 = %.3f^2\n",c1,h,c2,k,a);

        if(g>0) c1 = '+';
        else if(g<0){
            c1 ='-';
            g = -g;
        }
        if(g==0){
            c1 = '+';
            g = -g;
        }
        if(f>0) {c2='+';}
        else if(f<0){c2 = '-';f=-f;}
        if(f==0){c2 = '+';f = -f;}
        if(c>0) c3 = '+';
        else{c3 = '-',c = -c;}

        printf("x^2 + y^2 %c %.3fx %c %0.3fy %c %.3f = 0\n\n",c1,2*g,c2,2*f,c3,c);
    }
    return 0;
}
