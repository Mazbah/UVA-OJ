#include<bits/stdc++.h>
using namespace std;

int cost[1000][1000],color[1000][1000];
int mat[1000][1000];
int m,n,count = 0;

int dr[] = {-1,0,0,1};
int dc[] = {0,1,-1,0};

void bfs(int x,int y)
{
    int ux,uy,vx,vy,k;
    queue<int> Q;
    Q.push(x);
    Q.push(y);
    color[x][y] = 1;
    cost[x][y] = 0;

    while(!Q.empty()){
        ux = Q.front();
        Q.pop();

        uy = Q.front();
        Q.pop();

        for(k=0;k<4;k++){
            vx = ux+dr[k];
            vy = uy+dc[k];

            if((vx>=0 && vx<=m && vy>= 0 && vy<=n) &&(mat[vx][vy] == 0))
            {
                if(!color[vx][vy] && !cost[vx][vy])
                {
                    color[vx][vy] = 1;
                    Q.push(vx);
                    Q.push(vy);


                    cost[vx][vy] = cost[ux][uy] +1;

                }
            }
        }
    }
}
int main()
{
    int i,j,k,edge,col,r,data,bomb,s,s1,e,e1;
    while(scanf("%d%d",&m,&n)==2){
        if(m==0 && n==0) break;

        memset(mat,0,sizeof(mat));
        memset(color,0,sizeof(color));
        memset(cost,0,sizeof(cost));

        cin>>edge;
        while(edge--){
            cin>>r>>data;
            for(j=1;j<=data;j++){
                cin>>bomb;
                mat[r][bomb] = 1;
            }
        }
        cin>>s>>s1;
        bfs(s,s1);
        cin>>e>>e1;
        cout<<cost[e][e1]<<endl;
    }
    return 0;
}
