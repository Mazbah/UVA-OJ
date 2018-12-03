#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,t;
    double a0,an,c,sum,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum = 0;
        if(i>1) printf("\n");
        cin>>n;
        cin>>a0;
        cin>>an;
        for(j=0;j<n;j++){
            scanf("%lf",&c);
            sum += (n-j)*c;
        }
        x = ((n*a0)+(an-2*sum))/(n+1);
        printf("%.2lf\n",x);
    }
    return 0;
}
