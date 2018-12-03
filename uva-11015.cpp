#include<bits/stdc++.h>
using namespace std;
#define inf 100000
int mat[27][27];

int main()
{
    int a,b,m,n,u,v,ki,c=0,minsum,i,j,k;
    char name[27][15];
    while(cin>>n>>m){
        if(n==0)
            break;
        cin.get();
        for(int i=1;i<=n;i++){
            mat[i][i] = 0;
            gets(name[i]);
            for(int j=i+1;j<=n;j++){
                mat[i][j] = mat[j][i] = inf;
            }
        }

        for(int i=0;i<m;i++){
            cin>>u>>v>>ki;
            mat[u][v] = mat[v][u] = ki;
        }

        for(k=1;k<=n;k++){
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(mat[i][k]!=inf && mat[k][j]!=inf)
                        mat[i][j] = min(mat[i][j],mat[i][k]+mat[k][j]);
                }
            }
        }

        int sum,p;

        for(u=1,minsum = inf;u<=n;u++){
            for(v=1,sum=0;v<=n;v++){
                sum += mat[u][v];
                if(sum<minsum){
                    minsum = sum;
                    p = u;
                }
            }
        }
        printf("Case #%d : %s\n", ++c, name[p]);
    }
    return 0;
}
