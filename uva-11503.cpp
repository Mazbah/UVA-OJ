#include<bits/stdc++.h>
using namespace std;
int r[100005],parent[100005];

void inf(int n){
    for(int i=0;i<=n;i++)
        r[i]=1,parent[i]=i;
}

int fn(int x)
{
    if (x != parent[x])
        return parent[x] = fn(parent[x]);
    return parent[x];
}

int number(int x,int y)
{
    x = fn(x);
    y = fn(y);
    if(x!=y){
        if(r[x]>r[y]){
            r[x] += r[y];
            parent[y] = x;
            return r[x];
        }
        else{
            r[y] += r[x];
            parent[x] = y;
            return r[y];
        }
    }
    return r[x];
}
int main()
{
    int t,n,mx,my;
    string x,y;
    cin>>n;
    while(n--)
    {
        cin>>t;
        inf(min(2*t,100000));
        map<string,int> R;
        int size=0;
        while(t--){
            cin>>x>>y;
            mx = R[x];
            if(!R[x]){
                R[x] = ++size;
                mx = size;
            }
            my = R[y];
            if(!R[y]){
                R[y] = ++size;
                my = size;
            }
            cout<<number(mx,my)<<endl;
        }
    }
    return 0;
}
