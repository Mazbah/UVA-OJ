#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,k,n,b,h,w,s,t,price,cost[1000000],c,x;
    int p[10000],a[10000],m1,m2;
;    while(cin>>n>>b>>h>>w)
    {
        x = 0;
        for(i=0;i<h;i++){
            scanf("%d",&p[i]);
            price = p[i];
            for(j=0;j<w;j++){
                scanf("%d",&a[j]);
            }
            m1 = a[0];
            for(j=0;j<w;j++){
                if(a[j]>m1){
                    m1 = a[j];
                }
            }
            if(m1>=n){
                cost[i] = price*n;
                if(cost[i]>b)
                    x=1;
                else
                    x=0;
            }
            else
                x=1;
        }
        m2 = cost[0];
        for(i=0;i<h;i++){
            if(m2>cost[i]){         /// re-check plz
                m2 = cost[i];
            }
        }
        if(x==0)
            printf("Cost = %d\n",m2);
        else
            printf("stay home\n");
    }
    return 0;
}
