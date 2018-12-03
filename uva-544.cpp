#include<bits/stdc++.h>
using namespace std;

map<string,int> mp;
int city[500][500],ct,street,tc,c,r;

void info()
{
    int index=0,cost,i;
    string s1,s2;
    for(i=0;i<r;i++){
        cin>>s1>>s2>>cost;
        if(mp[s1]==0)
            mp[s1]=++index;
        if(mp[s2]==0)
            mp[s2]=++index;

        city[mp[s1]][mp[s2]]=cost;
        city[mp[s2]][mp[s1]]=cost;
    }
}

void floyd()
{
    for(int k=1;k<=c;k++){
        for(int i=1;i<=c;i++){
            for(int j=1;j<=c;j++){
                city[i][j] = max(city[i][j],min(city[i][k],city[k][j]));
            }
        }
    }
}
int main()
{
    string s,d;
    while(cin>>c>>r){
        if(c==0 && r==0)
            return 0;
        info();
        floyd();
        cin>>s>>d;
        cout<<"Scenario #"<<++tc<<endl<<city[mp[s]][mp[d]]<<" tons"<<endl<<endl;
        mp.clear();
        memset(city,0,sizeof(city));
    }
    return 0;
}
