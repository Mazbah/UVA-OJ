#include<bits/stdc++.h>
using namespace std;
bool r[100][100];
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                r[i][j] = false;
        }
        int start;
        while(cin>>start){
            if(start==0) break;
            int next;
            while(cin>>next,next){
                r[start][next] = true;
            }
        }
        for(int k=1;k<=n;k++)
            for(int i=1;i<=n;i++)
                for(int j=1;j<=n;j++){
                    r[i][j] |= r[i][k] && r[k][j];
                    cout<<"r["<<i<<"]["<<j<<"] |= r["<<i<<"]["<<k<<"] && r["<<k<<"]["<<j<<"]   : "<<(r[i][j] |= r[i][k] && r[k][j])<<endl;
                }
        int num;
        cin>>num;
        while(num--){
            int q;
            cin>>q;

            int count = 0;
            for(int i=1;i<=n;i++)
                if(!r[q][i])
                    count++;

            cout<<count;
            for(int i=1;i<=n;i++)
                if(!r[q][i])
                    cout<<' '<<i;

            cout<<endl;
        }
    }
    return 0;
}



