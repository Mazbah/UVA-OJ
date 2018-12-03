#include<bits/stdc++.h>
using namespace std;
long long way[1000000];
void count()
{
    int coin[10000],i,j;
    for(i=0;i<22;i++){
        coin[i] = i*i*i;
    }
    way[0] = 1;
    for(i=0;i<22;i++){
        for(j=coin[i];j<100000;j++){
            way[j] += way[j-coin[i]];
        }
    }
}
int main()
{
    int t;
    count();

    while(cin>>t){
        cout<<way[t]/2<<endl;
    }
    return 0;
}

