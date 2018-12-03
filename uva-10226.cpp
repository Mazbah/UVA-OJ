#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    int t,n,p;
    cin>>t;
    getchar();
    while(t--)
    {
        map<string,int> m;
        vector<string> tree;
        int total = 0;
        while(gets(s) && s[0])
        {
            string a(s);
            if(!m[a]){
                m[a] = 1;
                tree.push_back(a);
            }
            else
                m[a]++;
            total++;
        }
        sort(tree.begin(),tree.end());
        for(int i=0;i<tree.size();i++){
            cout<<tree[i]<<' ';
            printf("%.4lf\n",m[tree[i]]*100.00/total);
        }
        if(t) cout<<endl;
    }
    return 0;
}
