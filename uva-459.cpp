#include<bits/stdc++.h>
using namespace std;

vector<int> graph[30];
bool visited[30];

void dfs(int u)
{
    visited[u] = true;
    for(int v=0;v<graph[u].size();v++){
        if(visited[graph[u][v]] == false)
            dfs(graph[u][v]);
    }
}


int main()
{
    int t,V,n,num;
    char input[10];
    char c,a,b;
    cin>>t;
    scanf("\n");
    while(t--)
    {

        gets(input);
        n = input[0]-'A';
        memset(visited,false,sizeof(visited));
        for(int i=0;i<=n;i++)
            graph[i].clear();

        while(gets(input) && input[0]){
            graph[input[0]-'A'].push_back(input[1]-'A');
            graph[input[1]-'A'].push_back(input[0]-'A');
        }

        num = 0;
        for(int i=0;i<=n;i++){
            if(!visited[i]){
                dfs(i);
                num++;
            }
        }
        cout<<num<<endl;
        if(t)
            cout<<endl;
    }
    return 0;
}
