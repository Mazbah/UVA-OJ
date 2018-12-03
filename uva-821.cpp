#include<bits/stdc++.h>
using namespace std;
int mat[105][105];
bool on[105];

int main()
{
    int u,v,count=1;
    while(1){
        memset(mat,10,sizeof(mat));
        memset(on,false,sizeof(on));

        cin>>u>>v;
        if(u==0 && v==0)
            break;

        while(1){
            on[u] = true;
            on[v] = true;
            mat[u][v] = 1;

            cin>>u>>v;
            if(u==0 && v ==0)
                break;
        }
        for(int k=0;k<105;k++)
            for(int i=0;i<105;i++)
                for(int j=0;j<105;j++)
                    mat[i][j] = min(mat[i][j],mat[i][k]+mat[k][j]);


        double ans =0,n = 0;
        for(int i=0;i<105;i++){
            for(int j=0;j<105;j++){
                if(i==j)
                    continue;
                if(on[i] && on[j]){
                    ans += mat[i][j];
                    n++;
                }
            }
        }
        printf("Case %d: average length between pages = %.3lf clicks\n",count++, ans / n);
    }
    return 0;
}
