#include<bits/stdc++.h>
using namespace std;
int ans[1000000];
int nod(int x)
{
    int ret = 1;

    for(int i=2;i <= x/i;i++){
        if(x%i == 0){
            int cont = 1;

            while(x%i == 0){
                x /= i;
                cont++;
            }

            ret *= cont;
        }
    }
    if(x>1) ret *= 2;
    return ret;
}
int main()
{
    int x =1;

    while(x <= 1000000){
        ans[x]++;
        x += nod(x);
    }
    for(int i=1;i <= 1000000;i++)
        ans[i] += ans[i-1];
    int t,a,b;
    cin>>t;
    for(int j=1;j<=t;j++){
        cin>>a>>b;
        printf("Case %d: %d\n",j,ans[b]-ans[a-1]);
    }
    return 0;
}
