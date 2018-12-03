#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,i,j,n,k,a;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&x,&y);
        a=0;
        j = y-x;
        k = (int)sqrt(j);
        a = k;
        j -= k*(k+1)/2;
        while(j>0){
            while(k*(k+1)/2 > j)
                k--;
            if(k*(k+1)/2 == j){
                j = 0;
                a += k;
            }
            else{
                j -= k;
                a++;
            }
        }
        printf("%d\n",a);
    }
    return 0;
}
