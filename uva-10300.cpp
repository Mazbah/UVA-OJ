#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,a,b,c,s;
    while(scanf("%d",&n)!=EOF){
        for(j=0;j<n;j++){
            scanf("%d",&t);
            s = 0;
            for(i=0;i<t;i++){
                scanf("%d%d%d",&a,&b,&c);
                s += a*c;
            }
        printf("%d\n",s);
        }
    }
    return 0;
}
