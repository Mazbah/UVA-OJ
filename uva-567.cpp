#include<bits/stdc++.h>
using namespace std;
int mat[25][25],color[25],cost[25],node,start,end;

void bfs()
{
    int u,v,i,j;
    queue<int> q;

    q.push(start);
    color[start] = 1;
    cost[start] = 0;

    while(!q.empty()){
        u = q.front();
        q.pop();

        for(i=1;i<=20;i++){
            if(mat[u][i]==1 && !color[i] ){
                color[i] = 1;
                cost[i] = cost[u] + 1;

                q.push(i);
            }
        }
    }
}

int main()
{
    int i,j,k,edge,x,y,num,n,t=1,p=1;

    memset(mat,0,sizeof(mat));
    memset(color,0,sizeof(color));
    memset(cost,0,sizeof(cost));

    while(scanf("%d",&num)==1)
    {
        for(j=1;j<=num;j++){
            cin>>x;
            mat[p][x] = 1;
            mat[x][p] = 1;
        }
        p++;

        if(p==20)
        {
            p =1;
            cin>>n;

            printf("Test Set #%d\n",t++);
            for(k=1;k<=n;k++){
                cin>>start>>end;
                bfs();
                printf("%2d to %2d: %d\n",start,end,cost[end]);

                memset(color,0,sizeof(color));
                memset(cost,0,sizeof(cost));
            }
            memset(mat,0,sizeof(mat));
            cout<<endl;

        }
    }
    return 0;
}
