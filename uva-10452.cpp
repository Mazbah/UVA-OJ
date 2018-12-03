#include<bits/stdc++.h>
using namespace std;

char g[10][10],s[10]="@IEHOVA#";
int i,j,m,n,l,p[10];

void dfs(int x,int y,int l)
{
    if(x<0 || y<0 || x>=m || y>=n)
        return;
    if(g[x][y] != s[l])
        return;
    if(g[x][y] == '#')
    {
        for(i=0;i<l;i++){
            if(i) cout<<' ';
            if(p[i] == 0)
                cout<<"forth";
            else if(p[i] == 2)
                cout<<"right";
            else
                cout<<"left";
        }
        cout<<endl;
        return;
    }
    p[l] = 0;
    dfs(x-1,y,l+1);
    p[l] = 1;
    dfs(x,y-1,l+1);
    p[l] = 2;
    dfs(x,y+1,l+1);
}
int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(i=0;i<m;i++)
            scanf("%s",&g[i]);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(g[i][j] == '@')
                    dfs(i,j,0);
            }
        }
    }
    return 0;
}
