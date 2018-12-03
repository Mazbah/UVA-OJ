#include<stdio.h>
int main ()
{
    unsigned long int I;
    int i,m[100],P,j;
    while(scanf("%ld",&I)==1){
        if(I==0)
            break;
        else{
            i =1;P=0;
            while(I!=0){
                m[i] = I%2;
                if(m[i]==1){
                    P++;
                }
                I = I/2;
                i++;
            }
        printf("The parity of ");
        for(j=i-1;j>0;j--){
            printf("%d",m[j]);
        }
        printf(" is %ld (mod 2).\n",P);
        }
    }
    return 0;
}
