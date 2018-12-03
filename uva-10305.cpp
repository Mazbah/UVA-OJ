#include<bits/stdc++.h>
using namespace std;
int indeg[130],outdeg[130],visit[130][130];
int n,m,x,y,i;

void topsort()
{
    vector<int> st;
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(!outdeg[j] && !indeg[j]){
                outdeg[j] = 1;
                st.push_back(j);
                for(k=1;k<=n;k++)
                    if(visit[j][k])
                        --indeg[k];
                break;
            }
        }
    }
    cout<<st[0];
    for(i=1;i<n;i++)
        cout<<" "<<st[i];
    cout<<endl;
    st.clear();
}

int main()
{
    while(cin>>n>>m){
        if(m==0 && n==0)
            break;

        for(i=1;i<=m;i++){
            cin>>x>>y;
            visit[x][y] = 1;
            indeg[y]++;
        }
        topsort();
        memset(indeg,0,sizeof(indeg));
        memset(outdeg,0,sizeof(outdeg));
        memset(visit,0,sizeof(visit));
    }
    return 0;
}
