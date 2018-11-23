#include<bits/stdc++.h>
using namespace std;
int cost[100][100];
int check[100][100];
int s_row,s_col,e_row,e_col;
queue<int> q;
int dr[]={-2,-2,2,2,1,-1,1,-1};
int dc[]={1,-1,1,-1,2,-2,2,-2};

void bfs(int r,int c)
{
    check[r][c] = 1;
    cost[r][c] = 0;
    q.push(r);
    q.push(c);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        int v = q.front();
        q.pop();

        for(int i=0;i<8;i++){
            int row = dr[i]+u;
            int col = dc[i]+v;
            if((row>=0 && row<8) && (col>=0 && col<8) && check[row][col]==0){
                check[row][col] = 1;
                cost[row][col] =cost[u][v]+1;
                q.push(row);
                q.push(col);
            }
        }
    }
}
int main()
{
    string a,b;
    while(cin>>a>>b){
        s_row = int(a[0]-96);
        s_col = a[1]-'0';
        e_row = int(b[0]-96);
        e_col = b[1]-'0';

        memset(cost,0,sizeof(cost));
        memset(check,0,sizeof(check));

        bfs(s_row - 1,s_col-1);
        cout<<"To get from "<<a<<" to "<<b<<" takes "<<cost[e_row-1][e_col-1]<<" knight moves."<<endl;
    }
    return 0;

}
