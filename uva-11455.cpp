#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,a[5],j,k,temp;
    while(scanf("%d",&t)==1)
    {
        for(i=0;i<t;i++){
            scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
            if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
                printf("square\n");
            else{

                for(j=0;j<3;j++){
                    for(k=0;k<3-j;k++){
                        if(a[k]>a[k+1]){
                            temp = a[k];
                            a[k] = a[k+1];
                            a[k+1]=  temp;
                        }
                    }
                }
                if(a[0]==a[1] && a[2]==a[3])
                    printf("rectangle\n");
                else if((a[0]+a[1]+a[2])>a[3])
                    printf("quadrangle\n");
                else
                    printf("banana\n");
        }
        }
    }
    return 0;
}
