#include<stdio.h>
int main()
{
    int i,n,k,x,z,j=1;
    int h[100];
    while(scanf("%d",&n)!= EOF){
        k=0;
        z=0;
        if(n==0)
            break;
        else{
            for(i=1;i<=n;i++){
                scanf("%d",&h[i]);
            }
            for(i=1;i<=n;i++)
                k += h[i];
            x = k/n;
            for(i=1;i<=n;i++)
                if(h[i]>x)
                z = z+(h[i]-x);
        printf("Set #%d\nThe minimum number of moves is %d.\n",j,z);
        j++;
        }
    }
    return 0;
}
