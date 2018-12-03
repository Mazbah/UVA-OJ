#include<stdio.h>
int main()
{
    int T,N,a,b,c,d,e,f,z;
    scanf("%d",&T);
    for(N=1;N<=T;N++){
        scanf("%d/%d/%d",&a,&b,&c);
        scanf("%d/%d/%d",&d,&e,&f);
        z = c-f;
        if(b<e){
            z--;
        }
        else if(b==e){
            if(a<d)
                z--;
        }
        if(z<0){
            printf("Case #%d: Invalid birth date\n",N);
        }
        else if(z>130){
            printf("Case #%d: Check birth date\n",N);
        }
        else{
            printf("Case #%d: %d\n",N,z);
        }
    }
    return 0;
}








