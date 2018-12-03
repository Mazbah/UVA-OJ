#include<bits/stdc++.h>
using namespace std;

int d[50],v[50],x[50];
int dp[50][1010];
bool m[50][1010];

void path(int n,int t,int cnt)
{
    if(n==0) cout<<cnt<<endl;
    else if(m[n][t]){
        path(n-1,t-x[n],cnt+1);
        cout<<d[n]<<" "<<v[n]<<endl;
    }
    else{
        path(n-1,t,cnt);
    }
}

int main()
{
    int t,w,n,test;
    while(scanf("%d %d",&t,&w)==2){
        cin>>n;
        for(int i=1;i<=n;i++) {
            cin>>d[i]>>v[i];
            x[i] = 3*w*d[i];
        }

        memset(m,0,sizeof(m));

        for(int i=1;i<=n;i++){
            for(int j=0;j<=t;j++){

                dp[i][j] = dp[i-1][j];
                if(x[i]<=j && v[i]+dp[i-1][j-x[i]] > dp[i][j])
                {
                    dp[i][j] = v[i] + dp[i-1][j-x[i]];
                    m[i][j] = true;
                }

            }
        }
        if(test++)cout<<endl;
        cout<<dp[n][t]<<endl;
        path(n,t,0);

    }
    return 0;
}

