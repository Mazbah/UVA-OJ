#include<stdio.h>
int main()
{
    int N,m;
    while(1){
        scanf("%d",&N);
        if(N == 0){
            break;
        }
        else{
            if(N<=100){
                printf("f91(%d) = 91\n",N);
            }
            else{
                printf("f91(%d) = %d\n",N,N-10);
            }
        }
    }
    return 0;
}
