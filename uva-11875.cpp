#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[100],x,i,j,age;
    while(scanf("%d",&t)==1)
    {
        for(j=1;j<=t;j++)
        {
            scanf("%d",&n);
            for(i=0;i<n;i++){
                scanf("%d",&a[i]);
            }
            if(n==1) printf("Case %d: %d\n",j,a[0]);
            else if(n==3) printf("Case %d: %d\n",j,a[1]);
            else if(n==5) printf("Case %d: %d\n",j,a[2]);
            else if(n==7) printf("Case %d: %d\n",j,a[3]);
            else if(n==9) printf("Case %d: %d\n",j,a[4]);
        }
    }
    return 0;
}
