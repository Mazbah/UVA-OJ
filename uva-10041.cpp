#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int i,j,k,t,r,m,a[40000],sum;
    while(scanf("%d",&t)==1){
        for(k=1;k<=t;k++){
            scanf("%d",&r);
        for(i=1;i<=r;i++)
            scanf("%d",&a[i]);
        sort(a,a+i);
        for(i=1;i<=r;i++){
            sum=0;
            for(j=1;j<=r;j++){
                sum += abs(a[i]-a[j]);
            }
            if(i==1) m = sum;
            if(sum<m) m = sum;
        }
        cout<<m<<endl;}
    }
    return 0;
}
