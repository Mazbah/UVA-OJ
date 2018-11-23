#include<stdio.h>
int main()
{
    int a,f,t,i,j,k,m;
    while(scanf("%d",&t)==1){
        for(k=0;k<t;k++){
            scanf("%d",&a);
            scanf("%d",&f);
            for(m=0;m<f;m++){
                for(i=1;i<=a;i++){
                    for(j=1;j<=i;j++){
                        printf("%d",i);
                    }
                     printf("\n");}
                for(i=a-1;i>=1;i--){
                    for(j=1;j<=i;j++){
                        printf("%d",i);
                    }
                     printf("\n");}
                if(k!=t-1 || m!=f-1)
                    printf("\n");}
        }
    }
    return 0;
}
